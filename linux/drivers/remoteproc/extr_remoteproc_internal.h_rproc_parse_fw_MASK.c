
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rproc {TYPE_1__* ops; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int (* parse_fw ) (struct rproc*,struct firmware const*) ;} ;


 int FUNC_0 (struct rproc*,struct firmware const*) ;

__attribute__((used)) static inline int FUNC_1(struct rproc *VAR_0, const struct firmware *VAR_1)
{
 if (VAR_0->ops->parse_fw)
  return VAR_0->ops->parse_fw(VAR_0, VAR_1);

 return 0;
}
