
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int lock; int txq; int tx_waitq; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct st_data_s*,unsigned long) ;
 int FUNC_5 (struct st_data_s*) ;

__attribute__((used)) static inline void FUNC_6(struct st_data_s *VAR_0,
 unsigned char VAR_1)
{
 struct sk_buff *VAR_2;
 unsigned long VAR_3 = 0;

 FUNC_2(&VAR_0->lock, VAR_3);



 while ((VAR_2 = FUNC_0(&VAR_0->tx_waitq)))
  FUNC_1(&VAR_0->txq, VAR_2);


 FUNC_4(VAR_0, (unsigned long)VAR_1);
 FUNC_3(&VAR_0->lock, VAR_3);


 FUNC_5(VAR_0);
}
