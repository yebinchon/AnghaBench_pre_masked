
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {struct gb_hid* driver_data; } ;
struct gb_hid {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gb_hid*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2)
{
 struct gb_hid *VAR_3 = VAR_2->driver_data;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_0, &VAR_3->flags);
 return 0;
}
