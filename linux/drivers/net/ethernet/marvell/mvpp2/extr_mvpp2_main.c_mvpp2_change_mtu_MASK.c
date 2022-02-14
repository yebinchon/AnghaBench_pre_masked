
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct mvpp2_port {scalar_t__ pkt_size; TYPE_2__* dev; struct mvpp2* priv; } ;
struct mvpp2 {int port_count; struct mvpp2_port** port_list; scalar_t__ percpu_pools; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {int mtu; TYPE_1__ dev; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mvpp2*,int) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct mvpp2_port*) ;
 int FUNC_7 (struct mvpp2_port*) ;
 int FUNC_8 (struct mvpp2_port*) ;
 int FUNC_9 (struct mvpp2_port*) ;
 int FUNC_10 (struct net_device*,char*) ;
 int FUNC_11 (struct net_device*,char*,int,int) ;
 struct mvpp2_port* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,char*,int) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_1, int VAR_2)
{
 struct mvpp2_port *VAR_3 = FUNC_12(VAR_1);
 bool VAR_4 = FUNC_14(VAR_1);
 struct mvpp2 *VAR_5 = VAR_3->priv;
 int VAR_6;

 if (!FUNC_1(FUNC_2(VAR_2), 8)) {
  FUNC_11(VAR_1, "illegal MTU value %d, round to %d\n", VAR_2,
       FUNC_0(FUNC_2(VAR_2), 8));
  VAR_2 = FUNC_0(FUNC_2(VAR_2), 8);
 }

 if (FUNC_2(VAR_2) > VAR_0) {
  if (VAR_5->percpu_pools) {
   FUNC_13(VAR_1, "mtu %d too high, switching to shared buffers", VAR_2);
   FUNC_4(VAR_5, 0);
  }
 } else {
  bool VAR_7 = 0;
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_5->port_count; VAR_8++)
   if (VAR_5->port_list[VAR_8] != VAR_3 &&
       FUNC_2(VAR_5->port_list[VAR_8]->dev->mtu) >
       VAR_0) {
    VAR_7 = 1;
    break;
   }


  if (!VAR_7) {
   FUNC_3(VAR_3->dev->dev.parent,
     "all ports have a low MTU, switching to per-cpu buffers");
   FUNC_4(VAR_5, 1);
  }
 }

 if (VAR_4)
  FUNC_9(VAR_3);

 VAR_6 = FUNC_5(VAR_1, VAR_2);
 if (VAR_6) {
  FUNC_10(VAR_1, "failed to change MTU\n");

  FUNC_5(VAR_1, VAR_1->mtu);
 } else {
  VAR_3->pkt_size = FUNC_2(VAR_2);
 }

 if (VAR_4) {
  FUNC_8(VAR_3);
  FUNC_6(VAR_3);
  FUNC_7(VAR_3);
 }

 return VAR_6;
}
