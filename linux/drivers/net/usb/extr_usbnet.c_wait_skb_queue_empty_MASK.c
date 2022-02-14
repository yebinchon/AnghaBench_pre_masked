
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct sk_buff_head *VAR_2)
{
 unsigned long VAR_3;

 FUNC_4(&VAR_2->lock, VAR_3);
 while (!FUNC_3(VAR_2)) {
  FUNC_5(&VAR_2->lock, VAR_3);
  FUNC_1(FUNC_0(VAR_1));
  FUNC_2(VAR_0);
  FUNC_4(&VAR_2->lock, VAR_3);
 }
 FUNC_5(&VAR_2->lock, VAR_3);
}
