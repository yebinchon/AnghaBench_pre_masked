
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_rate {scalar_t__ ant; scalar_t__ sgi; scalar_t__ bfer; scalar_t__ stbc; } ;
typedef enum rs_column { ____Placeholder_rs_column } rs_column ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct rs_rate*) ;
 scalar_t__ FUNC_1 (struct rs_rate*) ;
 scalar_t__ FUNC_2 (struct rs_rate*) ;

__attribute__((used)) static inline enum rs_column FUNC_3(struct rs_rate *VAR_11)
{
 if (FUNC_0(VAR_11)) {
  if (VAR_11->ant == VAR_0)
   return VAR_3;

  if (VAR_11->ant == VAR_1)
   return VAR_4;

  goto err;
 }

 if (FUNC_2(VAR_11)) {
  if (VAR_11->ant == VAR_0 || VAR_11->stbc || VAR_11->bfer)
   return VAR_11->sgi ? VAR_8 :
    VAR_7;

  if (VAR_11->ant == VAR_1)
   return VAR_11->sgi ? VAR_10 :
    VAR_9;

  goto err;
 }

 if (FUNC_1(VAR_11))
  return VAR_11->sgi ? VAR_6 : VAR_5;

err:
 return VAR_2;
}
