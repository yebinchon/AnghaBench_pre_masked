
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_dev {int v4l2_dev; int m2m_dev; } ;
struct coda_ctx {int completion; int dev; scalar_t__ aborting; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct coda_ctx*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct coda_dev*,int ) ;
 int FUNC_3 (struct coda_dev*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct coda_ctx*) ;
 int FUNC_6 (int *,char*) ;
 struct coda_ctx* FUNC_7 (int ) ;

irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct coda_dev *VAR_8 = VAR_7;
 struct coda_ctx *VAR_9;


 FUNC_2(VAR_8, VAR_3);
 FUNC_3(VAR_8, 0, VAR_2);
 FUNC_3(VAR_8, VAR_1,
        VAR_0);

 VAR_9 = FUNC_7(VAR_8->m2m_dev);
 if (VAR_9 == ((void*)0)) {
  FUNC_6(&VAR_8->v4l2_dev,
    "Instance released before the end of transaction\n");
  return VAR_4;
 }

 FUNC_5(VAR_9);

 if (VAR_9->aborting) {
  FUNC_0(1, VAR_9, "task has been aborted\n");
 }

 if (FUNC_1(VAR_9->dev)) {
  FUNC_0(1, VAR_9, "coda is still busy!!!!\n");
  return VAR_5;
 }

 FUNC_4(&VAR_9->completion);

 return VAR_4;
}
