
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct emac_rx_queue {int napi; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct emac_rx_queue *VAR_1,
        struct sk_buff *VAR_2,
        u16 VAR_3, bool VAR_4)
{
 if (VAR_4) {
  u16 VAR_5;

  FUNC_0(VAR_3, VAR_5);
  FUNC_1(VAR_2, FUNC_2(VAR_0), VAR_5);
 }

 FUNC_3(&VAR_1->napi, VAR_2);
}
