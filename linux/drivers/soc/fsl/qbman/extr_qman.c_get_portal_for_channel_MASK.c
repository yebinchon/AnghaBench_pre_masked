
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qman_portal {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ channel; } ;


 struct qman_portal** VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline struct qman_portal *FUNC_1(u16 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(); VAR_2++) {
  if (VAR_0[VAR_2] &&
      VAR_0[VAR_2]->config->channel == VAR_1)
   return VAR_0[VAR_2];
 }

 return ((void*)0);
}
