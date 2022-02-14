
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {struct gb_hid* driver_data; } ;
struct gb_hid {int dummy; } ;


 int FUNC_0 (struct gb_hid*) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_0)
{
 struct gb_hid *VAR_1 = VAR_0->driver_data;

 FUNC_0(VAR_1);
}
