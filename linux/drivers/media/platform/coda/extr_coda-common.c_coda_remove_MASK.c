
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int size; scalar_t__ vaddr; } ;
struct coda_dev {int ida; int debugfs_root; int workbuf; int tempbuf; int codebuf; TYPE_1__ iram; int iram_pool; int workqueue; int v4l2_dev; scalar_t__ m2m_dev; int * vfd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct coda_dev*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long,int ) ;
 int FUNC_5 (int *) ;
 struct coda_dev* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_0)
{
 struct coda_dev *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->vfd); VAR_2++) {
  if (FUNC_10(&VAR_1->vfd[VAR_2]))
   FUNC_11(&VAR_1->vfd[VAR_2]);
 }
 if (VAR_1->m2m_dev)
  FUNC_9(VAR_1->m2m_dev);
 FUNC_7(&VAR_0->dev);
 FUNC_8(&VAR_1->v4l2_dev);
 FUNC_3(VAR_1->workqueue);
 if (VAR_1->iram.vaddr)
  FUNC_4(VAR_1->iram_pool, (unsigned long)VAR_1->iram.vaddr,
         VAR_1->iram.size);
 FUNC_1(VAR_1, &VAR_1->codebuf);
 FUNC_1(VAR_1, &VAR_1->tempbuf);
 FUNC_1(VAR_1, &VAR_1->workbuf);
 FUNC_2(VAR_1->debugfs_root);
 FUNC_5(&VAR_1->ida);
 return 0;
}
