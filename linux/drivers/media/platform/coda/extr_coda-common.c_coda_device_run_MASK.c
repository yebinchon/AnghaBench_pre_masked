
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_dev {int workqueue; } ;
struct coda_ctx {int pic_run_work; struct coda_dev* dev; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct coda_ctx *VAR_1 = VAR_0;
 struct coda_dev *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2->workqueue, &VAR_1->pic_run_work);
}
