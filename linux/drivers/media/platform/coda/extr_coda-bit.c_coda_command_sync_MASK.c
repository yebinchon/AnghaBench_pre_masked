
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_dev {int coda_mutex; } ;
struct coda_ctx {struct coda_dev* dev; } ;


 int FUNC_0 (struct coda_ctx*,int) ;
 int FUNC_1 (struct coda_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct coda_ctx*) ;

__attribute__((used)) static int FUNC_4(struct coda_ctx *VAR_0, int VAR_1)
{
 struct coda_dev *VAR_2 = VAR_0->dev;
 int VAR_3;

 FUNC_2(&VAR_2->coda_mutex);

 FUNC_0(VAR_0, VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_0);

 return VAR_3;
}
