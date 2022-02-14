
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct net_device {int dummy; } ;
struct bcm_sysport_tx_ring {unsigned int c_index; size_t clean_index; int size; unsigned int packets; unsigned int bytes; scalar_t__ index; int desc_count; struct bcm_sysport_cb* cbs; TYPE_1__* priv; } ;
struct bcm_sysport_priv {int syncp; struct net_device* netdev; } ;
struct bcm_sysport_cb {int dummy; } ;
struct TYPE_3__ {int is_lite; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bcm_sysport_tx_ring*,struct bcm_sysport_cb*,unsigned int*,unsigned int*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct bcm_sysport_priv*,int ,struct net_device*,char*,scalar_t__,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_7 (struct bcm_sysport_priv*,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static unsigned int FUNC_10(struct bcm_sysport_priv *VAR_5,
          struct bcm_sysport_tx_ring *VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8 = 0;
 struct net_device *VAR_9 = VAR_5->netdev;
 unsigned int VAR_10 = 0;
 struct bcm_sysport_cb *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 u32 VAR_14;


 if (!VAR_6->priv->is_lite)
  FUNC_4(VAR_6->priv, FUNC_0(VAR_6->index), VAR_1);
 else
  FUNC_3(VAR_6->priv, FUNC_0(VAR_6->index +
    VAR_0), VAR_1);


 VAR_14 = FUNC_7(VAR_5, FUNC_1(VAR_6->index));
 VAR_13 = (VAR_14 >> VAR_3) & VAR_2;
 VAR_12 = (VAR_13 - VAR_6->c_index) & VAR_2;

 FUNC_6(VAR_5, VAR_4, VAR_9,
    "ring=%d old_c_index=%u c_index=%u txbds_ready=%u\n",
    VAR_6->index, VAR_6->c_index, VAR_13, VAR_12);

 while (VAR_10 < VAR_12) {
  VAR_11 = &VAR_6->cbs[VAR_6->clean_index];
  FUNC_2(VAR_6, VAR_11, &VAR_8, &VAR_7);

  VAR_6->desc_count++;
  VAR_10++;

  if (FUNC_5(VAR_6->clean_index < VAR_6->size - 1))
   VAR_6->clean_index++;
  else
   VAR_6->clean_index = 0;
 }

 FUNC_8(&VAR_5->syncp);
 VAR_6->packets += VAR_7;
 VAR_6->bytes += VAR_8;
 FUNC_9(&VAR_5->syncp);

 VAR_6->c_index = VAR_13;

 FUNC_6(VAR_5, VAR_4, VAR_9,
    "ring=%d c_index=%d pkts_compl=%d, bytes_compl=%d\n",
    VAR_6->index, VAR_6->c_index, VAR_7, VAR_8);

 return VAR_7;
}
