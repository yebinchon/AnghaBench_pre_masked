
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {struct gb_hid* driver_data; } ;
struct gb_hid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct gb_hid*,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_2, int VAR_3)
{
 struct gb_hid *VAR_4 = VAR_2->driver_data;

 switch (VAR_3) {
 case 129:
  return FUNC_0(VAR_4, VAR_1);
 case 128:
  return FUNC_0(VAR_4, VAR_0);
 }

 return 0;
}
