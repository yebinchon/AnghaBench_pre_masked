
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vmxnet3_adapter {int active_vlans; int cmd_lock; TYPE_3__* shared; } ;
struct net_device {int flags; } ;
typedef int __be16 ;
struct TYPE_4__ {int * vfTable; } ;
struct TYPE_5__ {TYPE_1__ rxFilterConf; } ;
struct TYPE_6__ {TYPE_2__ devRead; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct vmxnet3_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_3, __be16 VAR_4, u16 VAR_5)
{
 struct vmxnet3_adapter *VAR_6 = FUNC_3(VAR_3);

 if (!(VAR_3->flags & VAR_0)) {
  u32 *VAR_7 = VAR_6->shared->devRead.rxFilterConf.vfTable;
  unsigned long VAR_8;

  FUNC_0(VAR_7, VAR_5);
  FUNC_4(&VAR_6->cmd_lock, VAR_8);
  FUNC_1(VAR_6, VAR_2,
           VAR_1);
  FUNC_5(&VAR_6->cmd_lock, VAR_8);
 }

 FUNC_2(VAR_5, VAR_6->active_vlans);

 return 0;
}
