
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dev; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct rproc*,struct firmware const*) ;

__attribute__((used)) static int FUNC_2(struct rproc *VAR_0,
       const struct firmware *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1))
  FUNC_0(&VAR_0->dev, "no resource table found for this firmware\n");

 return 0;
}
