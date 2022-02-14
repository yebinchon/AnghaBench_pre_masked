
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {struct gb_hid* driver_data; } ;
struct gb_hid {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct gb_hid*,unsigned char,unsigned char,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_2,
  unsigned char VAR_3, __u8 *VAR_4, size_t VAR_5,
  unsigned char VAR_6)
{
 struct gb_hid *VAR_7 = VAR_2->driver_data;
 int VAR_8;

 if (VAR_6 == VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_3, VAR_4, VAR_5);
 if (!VAR_8)
  VAR_8 = VAR_5;

 return VAR_8;
}
