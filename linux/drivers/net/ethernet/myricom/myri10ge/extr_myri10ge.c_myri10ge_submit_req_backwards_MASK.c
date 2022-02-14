
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myri10ge_tx_buf {int req; int mask; int * lanai; } ;
struct mcp_kreq_ether_send {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct mcp_kreq_ether_send*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct myri10ge_tx_buf *VAR_0,
         struct mcp_kreq_ether_send *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 VAR_4 = VAR_0->req;
 while (VAR_2 > 1) {
  VAR_2--;
  VAR_3 = (VAR_4 + VAR_2) & VAR_0->mask;
  FUNC_1(&VAR_0->lanai[VAR_3], &VAR_1[VAR_2], sizeof(*VAR_1));
  FUNC_0();
 }
}
