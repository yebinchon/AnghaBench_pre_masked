
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_tc; int* prio_tc_map; int* count; int* offset; scalar_t__ hw; } ;
struct tc_mqprio_qopt_offload {scalar_t__ mode; TYPE_1__ qopt; } ;
struct net_device {int dummy; } ;
struct cpsw_slave {int dummy; } ;
struct cpsw_priv {scalar_t__ mqprio_hw; struct cpsw_common* cpsw; } ;
struct cpsw_common {scalar_t__ version; int dev; struct cpsw_slave* slaves; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (struct cpsw_common*,struct cpsw_priv*) ;
 int FUNC_1 (int,int) ;
 struct cpsw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct cpsw_slave*,int,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_7, void *VAR_8)
{
 struct tc_mqprio_qopt_offload *VAR_9 = VAR_8;
 struct cpsw_priv *VAR_10 = FUNC_2(VAR_7);
 struct cpsw_common *VAR_11 = VAR_10->cpsw;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 struct cpsw_slave *VAR_16;
 u32 VAR_17 = 0;
 int VAR_18, VAR_19, VAR_20;

 VAR_13 = VAR_9->qopt.num_tc;
 if (VAR_13 > VAR_2)
  return -VAR_4;

 if (VAR_9->mode != VAR_5)
  return -VAR_4;

 VAR_20 = FUNC_6(VAR_11->dev);
 if (VAR_20 < 0) {
  FUNC_7(VAR_11->dev);
  return VAR_20;
 }

 if (VAR_13) {
  for (VAR_18 = 0; VAR_18 < 8; VAR_18++) {
   VAR_19 = VAR_9->qopt.prio_tc_map[VAR_18];
   VAR_12 = FUNC_1(VAR_19, VAR_13);
   VAR_17 |= VAR_12 << (4 * VAR_18);
  }

  FUNC_4(VAR_7, VAR_13);
  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
   VAR_14 = VAR_9->qopt.count[VAR_18];
   VAR_15 = VAR_9->qopt.offset[VAR_18];
   FUNC_5(VAR_7, VAR_18, VAR_14, VAR_15);
  }
 }

 if (!VAR_9->qopt.hw) {

  FUNC_3(VAR_7);
  VAR_17 = VAR_6;
 }

 VAR_10->mqprio_hw = VAR_9->qopt.hw;

 VAR_15 = VAR_11->version == VAR_3 ?
   VAR_0 : VAR_1;

 VAR_16 = &VAR_11->slaves[FUNC_0(VAR_11, VAR_10)];
 FUNC_9(VAR_16, VAR_17, VAR_15);

 FUNC_8(VAR_11->dev);

 return 0;
}
