
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int itr; } ;
struct fm10k_q_vector {int itr; TYPE_1__ rx; TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct fm10k_q_vector *VAR_3)
{

 u32 VAR_4 = VAR_0;


 FUNC_0(&VAR_3->tx);


 FUNC_0(&VAR_3->rx);


 VAR_4 |= (VAR_3->tx.itr & VAR_2);


 VAR_4 |= (VAR_3->rx.itr & VAR_2) << VAR_1;


 FUNC_1(VAR_4, VAR_3->itr);
}
