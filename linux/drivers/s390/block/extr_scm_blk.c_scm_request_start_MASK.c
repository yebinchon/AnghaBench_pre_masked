
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {int aob; struct scm_blk_dev* bdev; } ;
struct scm_blk_dev {int queued_reqs; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct scm_request*) ;

__attribute__((used)) static void FUNC_4(struct scm_request *VAR_0)
{
 struct scm_blk_dev *VAR_1 = VAR_0->bdev;

 FUNC_1(&VAR_1->queued_reqs);
 if (FUNC_2(VAR_0->aob)) {
  FUNC_0(5, "no subchannel");
  FUNC_3(VAR_0);
 }
}
