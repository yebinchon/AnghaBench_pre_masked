
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct gve_tx_ring {int tx_fifo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_6(struct gve_tx_ring *VAR_0,
           struct sk_buff *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_1) ? FUNC_2(VAR_1) +
     FUNC_5(VAR_1) : FUNC_3(VAR_1);

 VAR_2 = FUNC_1(&VAR_0->tx_fifo,
         VAR_5);

 VAR_3 = FUNC_0(VAR_5) - VAR_5;
 VAR_4 = VAR_3 + VAR_2 + VAR_1->len;

 return VAR_4;
}
