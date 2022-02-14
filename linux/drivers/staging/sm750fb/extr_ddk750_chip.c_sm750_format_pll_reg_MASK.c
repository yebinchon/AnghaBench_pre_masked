
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_value {unsigned int POD; unsigned int OD; unsigned int M; unsigned int N; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;

unsigned int FUNC_0(struct pll_value *VAR_9)
{

 unsigned int VAR_10 = VAR_9->POD;

 unsigned int VAR_11 = VAR_9->OD;
 unsigned int VAR_12 = VAR_9->M;
 unsigned int VAR_13 = VAR_9->N;







 return VAR_8 |

  ((VAR_10 << VAR_7) & VAR_6) |

  ((VAR_11 << VAR_5) & VAR_4) |
  ((VAR_13 << VAR_3) & VAR_2) |
  ((VAR_12 << VAR_1) & VAR_0);
}
