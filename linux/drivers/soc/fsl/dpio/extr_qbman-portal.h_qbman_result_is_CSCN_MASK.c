
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int verb; } ;
struct dpaa2_dq {TYPE_1__ dq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct dpaa2_dq *VAR_2)
{
 return ((VAR_2->dq.verb & VAR_1) == VAR_0);
}
