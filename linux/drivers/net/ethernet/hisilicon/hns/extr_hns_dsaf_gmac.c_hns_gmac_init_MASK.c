
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mac_driver {TYPE_2__* mac_cb; int mac_id; int dev; } ;
struct dsaf_device {TYPE_1__* misc_op; } ;
struct TYPE_4__ {scalar_t__ mac_type; } ;
struct TYPE_3__ {int (* ge_srst ) (struct dsaf_device*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mac_driver*,int ,int ,int) ;
 int FUNC_2 (struct mac_driver*,int ,int ,int ,int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct dsaf_device*,int ,int) ;
 int FUNC_9 (struct dsaf_device*,int ,int) ;

__attribute__((used)) static void FUNC_10(void *VAR_7)
{
 u32 VAR_8;
 struct mac_driver *VAR_9 = (struct mac_driver *)VAR_7;
 struct dsaf_device *VAR_10
  = (struct dsaf_device *)FUNC_0(VAR_9->dev);

 VAR_8 = VAR_9->mac_id;

 VAR_10->misc_op->ge_srst(VAR_10, VAR_8, 0);
 FUNC_7(10);
 VAR_10->misc_op->ge_srst(VAR_10, VAR_8, 1);
 FUNC_7(10);
 FUNC_4(VAR_7, VAR_6);
 FUNC_6(VAR_7);
 if (VAR_9->mac_cb->mac_type == VAR_5)
  FUNC_5(VAR_7, 0);

 FUNC_3(VAR_7, 1);

 FUNC_1(VAR_9, VAR_1,
    VAR_0, 1);




 FUNC_2(VAR_9, VAR_3, VAR_2,
      VAR_4, 8);
}
