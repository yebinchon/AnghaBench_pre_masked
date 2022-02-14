
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {struct nvm_rq* end_io_data; } ;
struct nvme_nvm_command {int dummy; } ;
struct nvm_rq {int nr_ppas; } ;
struct nvm_geo {int csecs; } ;
struct nvm_dev {struct request_queue* q; struct nvm_geo geo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request_queue*,int *,struct request*,int ,int ) ;
 int FUNC_3 (struct request_queue*,struct request*,void*,int,int ) ;
 int FUNC_4 (struct nvme_nvm_command*) ;
 struct nvme_nvm_command* FUNC_5 (int,int ) ;
 struct request* FUNC_6 (struct request_queue*,struct nvm_rq*,struct nvme_nvm_command*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct nvm_dev *VAR_3, struct nvm_rq *VAR_4,
         void *VAR_5)
{
 struct nvm_geo *VAR_6 = &VAR_3->geo;
 struct request_queue *VAR_7 = VAR_3->q;
 struct nvme_nvm_command *VAR_8;
 struct request *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(sizeof(struct nvme_nvm_command), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_7, VAR_4, VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto err_free_cmd;
 }

 if (VAR_5) {
  VAR_10 = FUNC_3(VAR_7, VAR_9, VAR_5, VAR_6->csecs * VAR_4->nr_ppas,
    VAR_1);
  if (VAR_10)
   goto err_free_cmd;
 }

 VAR_9->end_io_data = VAR_4;

 FUNC_2(VAR_7, ((void*)0), VAR_9, 0, VAR_2);

 return 0;

err_free_cmd:
 FUNC_4(VAR_8);
 return VAR_10;
}
