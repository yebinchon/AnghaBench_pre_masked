
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_rate {scalar_t__ ant; scalar_t__ type; scalar_t__ bw; scalar_t__ sgi; scalar_t__ bfer; scalar_t__ stbc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct rs_rate *VAR_2,
     struct rs_rate *VAR_3)
{
 bool VAR_4;

 if (VAR_2->stbc || VAR_2->bfer)
  VAR_4 = (VAR_3->ant == VAR_0 || VAR_3->ant == VAR_1);
 else
  VAR_4 = (VAR_2->ant == VAR_3->ant);

 return (VAR_2->type == VAR_3->type) && (VAR_2->bw == VAR_3->bw) && (VAR_2->sgi == VAR_3->sgi)
  && VAR_4;
}
