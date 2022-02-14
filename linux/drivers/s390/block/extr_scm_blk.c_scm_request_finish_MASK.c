
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {scalar_t__* request; int error; struct scm_blk_dev* bdev; } ;
struct scm_blk_dev {int queued_reqs; } ;
typedef int blk_status_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct scm_request*) ;

__attribute__((used)) static void FUNC_4(struct scm_request *VAR_1)
{
 struct scm_blk_dev *VAR_2 = VAR_1->bdev;
 blk_status_t *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_1->request[VAR_4]; VAR_4++) {
  VAR_3 = FUNC_2(VAR_1->request[VAR_4]);
  *VAR_3 = VAR_1->error;
  FUNC_1(VAR_1->request[VAR_4]);
 }

 FUNC_0(&VAR_2->queued_reqs);
 FUNC_3(VAR_1);
}
