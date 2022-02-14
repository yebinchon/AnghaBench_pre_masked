
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {unsigned int intr_count; unsigned int rq_count; unsigned int raw_wq_count; unsigned int wq_copy_count; unsigned int cq_count; int * io_sgl_pool; int io_req_pool; int * intr; int * cq; int * wq_copy; int * rq; int * wq; int vdev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fnic*,int) ;
 int FUNC_1 (struct fnic*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct fnic*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct fnic *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 FUNC_5(VAR_5->vdev);
 for (VAR_6 = 0; VAR_6 < VAR_5->intr_count; VAR_6++)
  FUNC_7(&VAR_5->intr[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_5->rq_count; VAR_6++) {
  VAR_7 = FUNC_9(&VAR_5->rq[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5->raw_wq_count; VAR_6++) {
  VAR_7 = FUNC_13(&VAR_5->wq[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5->wq_copy_count; VAR_6++) {
  VAR_7 = FUNC_12(&VAR_5->wq_copy[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }


 FUNC_2(VAR_5, VAR_4);
 FUNC_1(VAR_5, -1);
 FUNC_0(VAR_5, -1);


 for (VAR_6 = 0; VAR_6 < VAR_5->raw_wq_count; VAR_6++)
  FUNC_10(&VAR_5->wq[VAR_6], VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_5->rq_count; VAR_6++)
  FUNC_8(&VAR_5->rq[VAR_6], VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_5->wq_copy_count; VAR_6++)
  FUNC_11(&VAR_5->wq_copy[VAR_6],
       VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_5->cq_count; VAR_6++)
  FUNC_4(&VAR_5->cq[VAR_6]);
 for (VAR_6 = 0; VAR_6 < VAR_5->intr_count; VAR_6++)
  FUNC_6(&VAR_5->intr[VAR_6]);

 FUNC_3(VAR_5->io_req_pool);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_3(VAR_5->io_sgl_pool[VAR_6]);

 return 0;
}
