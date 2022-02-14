
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb {int nr; int ddb_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ddb*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct ddb *VAR_2)
{
 if (FUNC_0(VAR_2->ddb_dev))
  return;
 FUNC_2(VAR_2);
 FUNC_3(&VAR_0, FUNC_1(VAR_1, VAR_2->nr));
}
