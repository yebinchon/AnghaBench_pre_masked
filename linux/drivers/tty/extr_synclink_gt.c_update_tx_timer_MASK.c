
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct slgt_info {int tx_timer; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_2)
{




 if (VAR_2->params.mode == VAR_0) {
  int VAR_3 = (FUNC_2(VAR_2) * 7) + 1000;
  FUNC_0(&VAR_2->tx_timer, VAR_1 + FUNC_1(VAR_3));
 }
}
