
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucsi {TYPE_1__* ppm; } ;
struct TYPE_2__ {int (* sync ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1(struct ucsi *VAR_0)
{
 if (VAR_0->ppm && VAR_0->ppm->sync)
  return VAR_0->ppm->sync(VAR_0->ppm);
 return 0;
}
