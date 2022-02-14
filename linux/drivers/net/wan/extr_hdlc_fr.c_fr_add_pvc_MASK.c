
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvc_device {int dummy; } ;
struct net_device {int min_mtu; int needs_free_netdev; struct pvc_device* ml_priv; int priv_flags; void* max_mtu; void* mtu; int * netdev_ops; int broadcast; scalar_t__ dev_addr; } ;
typedef int hdlc_device ;
typedef int __be16 ;
struct TYPE_2__ {int dce_changed; int dce_pvc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pvc_device* FUNC_0 (struct net_device*,unsigned int) ;
 struct net_device* FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_6 (struct net_device*) ;
 struct net_device** FUNC_7 (struct pvc_device*,int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct net_device*,char*) ;
 int FUNC_10 (struct pvc_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 TYPE_1__* FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_11, unsigned int VAR_12, int VAR_13)
{
 hdlc_device *VAR_14 = FUNC_3(VAR_11);
 struct pvc_device *VAR_15;
 struct net_device *VAR_16;
 int VAR_17;

 if ((VAR_15 = FUNC_0(VAR_11, VAR_12)) == ((void*)0)) {
  FUNC_9(VAR_11, "Memory squeeze on fr_add_pvc()\n");
  return -VAR_3;
 }

 if (*FUNC_7(VAR_15, VAR_13))
  return -VAR_1;

 VAR_17 = FUNC_10(VAR_15);

 if (VAR_13 == VAR_0)
  VAR_16 = FUNC_1(0, "pvceth%d", VAR_7,
       VAR_8);
 else
  VAR_16 = FUNC_1(0, "pvc%d", VAR_7, VAR_10);

 if (!VAR_16) {
  FUNC_9(VAR_11, "Memory squeeze on fr_pvc()\n");
  FUNC_2(VAR_14);
  return -VAR_3;
 }

 if (VAR_13 == VAR_0) {
  VAR_16->priv_flags &= ~VAR_6;
  FUNC_5(VAR_16);
 } else {
  *(__be16*)VAR_16->dev_addr = FUNC_8(VAR_12);
  FUNC_4(VAR_16->broadcast, VAR_12);
 }
 VAR_16->netdev_ops = &VAR_9;
 VAR_16->mtu = VAR_4;
 VAR_16->min_mtu = 68;
 VAR_16->max_mtu = VAR_4;
 VAR_16->priv_flags |= VAR_5;
 VAR_16->ml_priv = VAR_15;

 if (FUNC_11(VAR_16) != 0) {
  FUNC_6(VAR_16);
  FUNC_2(VAR_14);
  return -VAR_2;
 }

 VAR_16->needs_free_netdev = 1;
 *FUNC_7(VAR_15, VAR_13) = VAR_16;
 if (!VAR_17) {
  FUNC_12(VAR_14)->dce_changed = 1;
  FUNC_12(VAR_14)->dce_pvc_count++;
 }
 return 0;
}
