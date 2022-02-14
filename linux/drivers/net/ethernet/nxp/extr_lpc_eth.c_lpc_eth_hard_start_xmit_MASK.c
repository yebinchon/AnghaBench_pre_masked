
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct txrx_desc_t {size_t control; } ;
struct sk_buff {size_t len; int data; } ;
struct netdata_local {int num_used_tx_buffs; size_t* tx_stat_v; size_t* skblen; int lock; int net_base; scalar_t__ tx_buff_v; struct txrx_desc_t* tx_desc_v; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,int ,size_t) ;
 struct netdata_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (size_t,int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct netdata_local *VAR_8 = FUNC_4(VAR_7);
 u32 VAR_9, VAR_10;
 u32 *VAR_11;
 struct txrx_desc_t *VAR_12;

 VAR_9 = VAR_6->len;

 FUNC_7(&VAR_8->lock);

 if (VAR_8->num_used_tx_buffs >= (VAR_1 - 1)) {


  FUNC_5(VAR_7);
  FUNC_8(&VAR_8->lock);
  FUNC_1(1, "BUG! TX request when no free TX buffers!\n");
  return VAR_2;
 }


 VAR_10 = FUNC_6(FUNC_0(VAR_8->net_base));


 VAR_11 = &VAR_8->tx_stat_v[VAR_10];
 *VAR_11 = 0;
 VAR_12 = &VAR_8->tx_desc_v[VAR_10];
 VAR_12->control =
  (VAR_9 - 1) | VAR_5 | VAR_4;


 FUNC_3(VAR_8->tx_buff_v + VAR_10 * VAR_0, VAR_6->data, VAR_9);


 VAR_8->skblen[VAR_10] = VAR_9;
 VAR_8->num_used_tx_buffs++;


 VAR_10++;
 if (VAR_10 >= VAR_1)
  VAR_10 = 0;
 FUNC_9(VAR_10, FUNC_0(VAR_8->net_base));


 if (VAR_8->num_used_tx_buffs >= (VAR_1 - 1))
  FUNC_5(VAR_7);

 FUNC_8(&VAR_8->lock);

 FUNC_2(VAR_6);
 return VAR_3;
}
