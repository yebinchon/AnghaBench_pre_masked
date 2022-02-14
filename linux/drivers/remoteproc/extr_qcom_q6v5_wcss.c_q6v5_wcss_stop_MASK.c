
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct q6v5_wcss* priv; } ;
struct q6v5_wcss {int q6v5; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct q6v5_wcss*) ;
 int FUNC_2 (struct q6v5_wcss*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct rproc *VAR_1)
{
 struct q6v5_wcss *VAR_2 = VAR_1->priv;
 int VAR_3;


 VAR_3 = FUNC_3(&VAR_2->q6v5);
 if (VAR_3 == -VAR_0) {
  FUNC_0(VAR_2->dev, "timed out on wait\n");
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_4(&VAR_2->q6v5);

 return 0;
}
