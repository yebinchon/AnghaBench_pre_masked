
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_adapter {int num_q_vectors; int flags; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct igb_adapter*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct igb_adapter *VAR_2)
{
 int VAR_3 = VAR_2->num_q_vectors;

 if (VAR_2->flags & VAR_1)
  FUNC_2(VAR_2->pdev);
 else if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_2->pdev);

 while (VAR_3--)
  FUNC_0(VAR_2, VAR_3);
}
