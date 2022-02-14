
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa25x_udc {int * ep; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1 (struct pxa25x_udc *VAR_2)
{
 unsigned VAR_3;




 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(&VAR_2->ep[VAR_3], -VAR_0);
}
