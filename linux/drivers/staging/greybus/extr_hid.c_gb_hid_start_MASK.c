
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int quirks; struct gb_hid* driver_data; } ;
struct gb_hid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gb_hid*,unsigned int) ;
 int FUNC_1 (struct hid_device*,int ,unsigned int*) ;
 int FUNC_2 (struct gb_hid*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_6)
{
 struct gb_hid *VAR_7 = VAR_6->driver_data;
 unsigned int VAR_8 = VAR_3;
 int VAR_9;

 FUNC_1(VAR_6, VAR_1, &VAR_8);
 FUNC_1(VAR_6, VAR_4, &VAR_8);
 FUNC_1(VAR_6, VAR_0, &VAR_8);

 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;

 VAR_9 = FUNC_0(VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;

 if (!(VAR_6->quirks & VAR_5))
  FUNC_2(VAR_7);

 return 0;
}
