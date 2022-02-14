
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {struct gb_hid* driver_data; } ;
struct gb_hid {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct gb_hid*,unsigned char,int,int*,size_t) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_2, __u8 *VAR_3,
          size_t VAR_4, unsigned char VAR_5)
{
 struct gb_hid *VAR_6 = VAR_2->driver_data;
 int VAR_7 = VAR_3[0];
 int VAR_8;

 if (VAR_5 == VAR_1)
  return -VAR_0;

 if (VAR_7) {
  VAR_3++;
  VAR_4--;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_5, VAR_7, VAR_3, VAR_4);
 if (VAR_7 && VAR_8 >= 0)
  VAR_8++;

 return 0;
}
