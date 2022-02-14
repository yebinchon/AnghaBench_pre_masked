
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mac_driver {int mac_id; int dev; } ;
struct dsaf_device {TYPE_1__* misc_op; } ;
struct TYPE_2__ {int (* xge_srst ) (struct dsaf_device*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dsaf_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct mac_driver *VAR_1 = (struct mac_driver *)VAR_0;
 struct dsaf_device *VAR_2
  = (struct dsaf_device *)FUNC_0(VAR_1->dev);

 u32 VAR_3 = VAR_1->mac_id;

 VAR_2->misc_op->xge_srst(VAR_2, VAR_3, 0);
}
