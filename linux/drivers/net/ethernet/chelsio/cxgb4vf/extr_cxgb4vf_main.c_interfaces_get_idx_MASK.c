
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nports; } ;
struct adapter {TYPE_1__ params; } ;
typedef scalar_t__ loff_t ;



__attribute__((used)) static inline void *FUNC_0(struct adapter *VAR_0, loff_t VAR_1)
{
 return VAR_1 <= VAR_0->params.nports
  ? (void *)(uintptr_t)(VAR_1 + 1)
  : ((void*)0);
}
