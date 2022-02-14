
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_dev {int coda_mutex; } ;
struct coda_ctx {struct coda_dev* dev; } ;


 int FUNC_0 (struct coda_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct coda_ctx *VAR_0)
{
 struct coda_dev *VAR_1 = VAR_0->dev;
 int VAR_2;

 FUNC_1(&VAR_1->coda_mutex);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->coda_mutex);

 return VAR_2;
}
