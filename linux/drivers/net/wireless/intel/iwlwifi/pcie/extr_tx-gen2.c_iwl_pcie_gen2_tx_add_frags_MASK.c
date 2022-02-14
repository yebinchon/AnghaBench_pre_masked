
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_trans {int dev; } ;
struct iwl_tfh_tfd {int dummy; } ;
struct iwl_cmd_meta {int tbs; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iwl_trans*,struct iwl_tfh_tfd*,int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int const*,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct iwl_trans *VAR_2,
          struct sk_buff *VAR_3,
          struct iwl_tfh_tfd *VAR_4,
          struct iwl_cmd_meta *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_6(VAR_3)->nr_frags; VAR_6++) {
  const skb_frag_t *VAR_7 = &FUNC_6(VAR_3)->frags[VAR_6];
  dma_addr_t VAR_8;
  int VAR_9;

  if (!FUNC_5(VAR_7))
   continue;

  VAR_8 = FUNC_4(VAR_2->dev, VAR_7, 0,
        FUNC_5(VAR_7), VAR_0);

  if (FUNC_8(FUNC_1(VAR_2->dev, VAR_8)))
   return -VAR_1;
  VAR_9 = FUNC_2(VAR_2, VAR_4, VAR_8,
           FUNC_5(VAR_7));
  FUNC_7(VAR_2->dev, VAR_3,
     FUNC_3(VAR_7),
     FUNC_5(VAR_7));
  if (VAR_9 < 0)
   return VAR_9;

  VAR_5->tbs |= FUNC_0(VAR_9);
 }

 return 0;
}
