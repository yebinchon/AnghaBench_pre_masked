
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rproc {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct rproc* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct rproc*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, u32 VAR_2)
{
 struct rproc *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_3, VAR_2) == VAR_0)
  FUNC_0(VAR_1, "no message was found in vqid %d\n", VAR_2);
}
