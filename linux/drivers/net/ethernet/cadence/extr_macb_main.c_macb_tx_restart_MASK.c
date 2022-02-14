
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macb_queue {unsigned int tx_head; unsigned int tx_tail; struct macb* bp; } ;
struct macb {int caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct macb*,int ) ;
 int FUNC_2 (struct macb*,int ,int) ;
 int FUNC_3 (struct macb_queue*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct macb_queue *VAR_5)
{
 unsigned int VAR_6 = VAR_5->tx_head;
 unsigned int VAR_7 = VAR_5->tx_tail;
 struct macb *VAR_8 = VAR_5->bp;

 if (VAR_8->caps & VAR_1)
  FUNC_3(VAR_5, VAR_0, FUNC_0(VAR_4));

 if (VAR_6 == VAR_7)
  return;

 FUNC_2(VAR_8, VAR_2, FUNC_1(VAR_8, VAR_2) | FUNC_0(VAR_3));
}
