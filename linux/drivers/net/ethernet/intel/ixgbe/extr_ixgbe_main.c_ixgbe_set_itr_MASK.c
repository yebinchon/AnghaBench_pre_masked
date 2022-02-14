
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int itr; } ;
struct ixgbe_q_vector {int itr; TYPE_1__ tx; TYPE_1__ rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_q_vector*,TYPE_1__*) ;
 int FUNC_1 (struct ixgbe_q_vector*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_q_vector *VAR_1)
{
 u32 VAR_2;

 FUNC_0(VAR_1, &VAR_1->tx);
 FUNC_0(VAR_1, &VAR_1->rx);


 VAR_2 = FUNC_2(VAR_1->rx.itr, VAR_1->tx.itr);


 VAR_2 &= ~VAR_0;
 VAR_2 <<= 2;

 if (VAR_2 != VAR_1->itr) {

  VAR_1->itr = VAR_2;

  FUNC_1(VAR_1);
 }
}
