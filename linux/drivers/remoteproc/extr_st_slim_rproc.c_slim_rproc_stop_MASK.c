
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_slim_rproc {scalar_t__ slimcore; scalar_t__ peri; } ;
struct rproc {int dev; struct st_slim_rproc* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct rproc *VAR_6)
{
 struct st_slim_rproc *VAR_7 = VAR_6->priv;
 u32 VAR_8;


 FUNC_3(0UL, VAR_7->peri + VAR_5);
 FUNC_3(0UL, VAR_7->peri + VAR_2);


 FUNC_3(VAR_0, VAR_7->slimcore + VAR_1);

 FUNC_3(!VAR_4, VAR_7->slimcore + VAR_3);

 VAR_8 = FUNC_2(VAR_7->slimcore + VAR_3);
 if (VAR_8 & VAR_4)
  FUNC_1(&VAR_6->dev, "Failed to disable SLIM");

 FUNC_0(&VAR_6->dev, "slim stopped\n");

 return 0;
}
