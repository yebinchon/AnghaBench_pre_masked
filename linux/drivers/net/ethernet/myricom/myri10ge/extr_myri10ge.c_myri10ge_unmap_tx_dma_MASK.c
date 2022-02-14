
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct myri10ge_tx_buf {int mask; int req; TYPE_1__* info; } ;
struct myri10ge_priv {int pdev; } ;
struct TYPE_4__ {int * skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct myri10ge_priv *VAR_2,
      struct myri10ge_tx_buf *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;


 VAR_6 = (VAR_4 + 1) & VAR_3->mask;
 VAR_4 = VAR_3->req & VAR_3->mask;
 do {
  VAR_5 = FUNC_1(&VAR_3->info[VAR_4], VAR_5);
  if (VAR_5) {
   if (VAR_3->info[VAR_4].skb != ((void*)0))
    FUNC_4(VAR_2->pdev,
       FUNC_0(&VAR_3->info[VAR_4],
        VAR_1), VAR_5,
       VAR_0);
   else
    FUNC_3(VAR_2->pdev,
            FUNC_0(&VAR_3->info[VAR_4],
             VAR_1), VAR_5,
            VAR_0);
   FUNC_2(&VAR_3->info[VAR_4], VAR_5, 0);
   VAR_3->info[VAR_4].skb = ((void*)0);
  }
  VAR_4 = (VAR_4 + 1) & VAR_3->mask;
 } while (VAR_4 != VAR_6);
}
