
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mac_driver {int mac_id; int dev; } ;
struct dsaf_device {TYPE_1__* misc_op; } ;
struct TYPE_2__ {int (* xge_srst ) (struct dsaf_device*,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (struct mac_driver*,int ) ;
 int FUNC_3 (struct mac_driver*) ;
 int FUNC_4 (struct mac_driver*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dsaf_device*,int ,int) ;
 int FUNC_7 (struct dsaf_device*,int ,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_1)
{
 struct mac_driver *VAR_2 = (struct mac_driver *)VAR_1;
 struct dsaf_device *VAR_3
  = (struct dsaf_device *)FUNC_0(VAR_2->dev);
 u32 VAR_4 = VAR_2->mac_id;

 VAR_3->misc_op->xge_srst(VAR_3, VAR_4, 0);
 FUNC_5(100);
 VAR_3->misc_op->xge_srst(VAR_3, VAR_4, 1);

 FUNC_5(100);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2, 0);

 FUNC_4(VAR_2, 0x0, 0x0);

 FUNC_1(VAR_1, VAR_0);
}
