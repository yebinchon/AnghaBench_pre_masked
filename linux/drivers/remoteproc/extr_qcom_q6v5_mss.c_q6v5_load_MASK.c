
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct q6v5* priv; } ;
struct q6v5 {int mba_region; } ;
struct firmware {int size; int data; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rproc *VAR_0, const struct firmware *VAR_1)
{
 struct q6v5 *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_2->mba_region, VAR_1->data, VAR_1->size);

 return 0;
}
