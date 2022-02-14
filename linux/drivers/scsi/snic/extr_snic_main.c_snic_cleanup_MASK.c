
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {unsigned int intr_count; unsigned int wq_count; unsigned int cq_count; int * req_pool; int * intr; int * cq; int * wq; int vdev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snic*) ;
 int VAR_1 ;
 int FUNC_2 (struct snic*,int) ;
 int FUNC_3 (struct snic*) ;
 int FUNC_4 (struct snic*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct snic *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 FUNC_6(VAR_2->vdev);
 for (VAR_3 = 0; VAR_3 < VAR_2->intr_count; VAR_3++)
  FUNC_8(&VAR_2->intr[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_2->wq_count; VAR_3++) {
  VAR_4 = FUNC_10(&VAR_2->wq[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }


 FUNC_2(VAR_2, -1);

 FUNC_4(VAR_2, -1);


 for (VAR_3 = 0; VAR_3 < VAR_2->wq_count; VAR_3++)
  FUNC_9(&VAR_2->wq[VAR_3], VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2->cq_count; VAR_3++)
  FUNC_5(&VAR_2->cq[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_2->intr_count; VAR_3++)
  FUNC_7(&VAR_2->intr[VAR_3]);


 FUNC_1(VAR_2);


 FUNC_3(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2->req_pool[VAR_3]);

 return 0;
}
