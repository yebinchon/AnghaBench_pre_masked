
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int * tx_queue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct cw1200_common *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 4; ++VAR_1)
  FUNC_0(&VAR_0->tx_queue[VAR_1]);
}
