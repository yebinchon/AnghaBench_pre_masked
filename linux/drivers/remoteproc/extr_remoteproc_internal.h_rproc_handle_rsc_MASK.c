
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rproc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* handle_rsc ) (struct rproc*,int ,void*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rproc*,int ,void*,int,int) ;

__attribute__((used)) static inline
int FUNC_1(struct rproc *VAR_1, u32 VAR_2, void *VAR_3, int VAR_4,
       int VAR_5)
{
 if (VAR_1->ops->handle_rsc)
  return VAR_1->ops->handle_rsc(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5);

 return VAR_0;
}
