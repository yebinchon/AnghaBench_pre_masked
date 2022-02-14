
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_1(struct il_priv *VAR_3)
{


 return FUNC_0(VAR_2, &VAR_3->status) &&
     FUNC_0(VAR_1, &VAR_3->status) &&
     !FUNC_0(VAR_0, &VAR_3->status);
}
