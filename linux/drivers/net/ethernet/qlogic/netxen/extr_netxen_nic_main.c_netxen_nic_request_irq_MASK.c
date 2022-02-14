
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_sds_ring {int name; int irq; } ;
struct netxen_recv_context {struct nx_host_sds_ring* sds_rings; } ;
struct netxen_adapter {int flags; int max_sds_rings; int irq; struct netxen_recv_context recv_ctx; struct net_device* netdev; } ;
struct net_device {char* name; int irq; } ;
typedef int irq_handler_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned long,int ,struct nx_host_sds_ring*) ;
 int FUNC_1 (int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct netxen_adapter *VAR_6)
{
 irq_handler_t VAR_7;
 struct nx_host_sds_ring *VAR_8;
 int VAR_9, VAR_10;

 unsigned long VAR_11 = 0;
 struct net_device *VAR_12 = VAR_6->netdev;
 struct netxen_recv_context *VAR_13 = &VAR_6->recv_ctx;

 if (VAR_6->flags & VAR_1)
  VAR_7 = VAR_5;
 else if (VAR_6->flags & VAR_2)
  VAR_7 = VAR_4;
 else {
  VAR_11 |= VAR_0;
  VAR_7 = VAR_3;
 }
 VAR_6->irq = VAR_12->irq;

 for (VAR_10 = 0; VAR_10 < VAR_6->max_sds_rings; VAR_10++) {
  VAR_8 = &VAR_13->sds_rings[VAR_10];
  FUNC_1(VAR_8->name, "%s[%d]", VAR_12->name, VAR_10);
  VAR_9 = FUNC_0(VAR_8->irq, VAR_7,
      VAR_11, VAR_8->name, VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
