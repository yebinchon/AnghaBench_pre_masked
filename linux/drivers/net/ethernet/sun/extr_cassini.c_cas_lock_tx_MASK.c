
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int * tx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct cas *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->tx_lock[VAR_2], VAR_2);
}
