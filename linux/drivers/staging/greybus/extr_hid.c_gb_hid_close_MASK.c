
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_device {struct gb_hid* driver_data; } ;
struct gb_hid {TYPE_2__* connection; int flags; } ;
struct TYPE_4__ {TYPE_1__* bundle; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct gb_hid*,int ) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_2)
{
 struct gb_hid *VAR_3 = VAR_2->driver_data;
 int VAR_4;

 FUNC_0(VAR_0, &VAR_3->flags);


 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4)
  FUNC_1(&VAR_3->connection->bundle->dev,
   "failed to power off (%d)\n", VAR_4);
}
