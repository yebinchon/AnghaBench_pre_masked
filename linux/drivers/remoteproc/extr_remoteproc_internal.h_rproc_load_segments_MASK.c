
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rproc {TYPE_1__* ops; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int (* load ) (struct rproc*,struct firmware const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rproc*,struct firmware const*) ;

__attribute__((used)) static inline
int FUNC_1(struct rproc *VAR_1, const struct firmware *VAR_2)
{
 if (VAR_1->ops->load)
  return VAR_1->ops->load(VAR_1, VAR_2);

 return -VAR_0;
}
