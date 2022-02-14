
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mvneta_port {int id; TYPE_2__* pool_short; TYPE_4__* pool_long; int bm_priv; TYPE_3__* dev; int neta_armada3700; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int port_map; int id; int buf_size; } ;
struct TYPE_7__ {int mtu; } ;
struct TYPE_6__ {int port_map; int id; int buf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvneta_port*,int ,int ) ;
 int FUNC_2 (int ,TYPE_4__*,int) ;
 void* FUNC_3 (int ,scalar_t__,int ,int,int ) ;
 int FUNC_4 (struct mvneta_port*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5,
          struct mvneta_port *VAR_6)
{
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 u32 VAR_8, VAR_9;

 if (!VAR_6->neta_armada3700) {
  int VAR_10;

  VAR_10 = FUNC_4(VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 if (FUNC_6(VAR_7, "bm,pool-long", &VAR_8)) {
  FUNC_5(VAR_6->dev, "missing long pool id\n");
  return -VAR_0;
 }


 VAR_6->pool_long = FUNC_3(VAR_6->bm_priv, VAR_8,
        VAR_2, VAR_6->id,
        FUNC_0(VAR_6->dev->mtu));
 if (!VAR_6->pool_long) {
  FUNC_5(VAR_6->dev, "fail to obtain long pool for port\n");
  return -VAR_1;
 }

 VAR_6->pool_long->port_map |= 1 << VAR_6->id;

 FUNC_1(VAR_6, VAR_6->pool_long->buf_size,
       VAR_6->pool_long->id);


 if (FUNC_6(VAR_7, "bm,pool-short", &VAR_9))
  VAR_9 = VAR_8;


 VAR_6->pool_short = FUNC_3(VAR_6->bm_priv, VAR_9,
         VAR_3, VAR_6->id,
         VAR_4);
 if (!VAR_6->pool_short) {
  FUNC_5(VAR_6->dev, "fail to obtain short pool for port\n");
  FUNC_2(VAR_6->bm_priv, VAR_6->pool_long, 1 << VAR_6->id);
  return -VAR_1;
 }

 if (VAR_9 != VAR_8) {
  VAR_6->pool_short->port_map |= 1 << VAR_6->id;
  FUNC_1(VAR_6, VAR_6->pool_short->buf_size,
        VAR_6->pool_short->id);
 }

 return 0;
}
