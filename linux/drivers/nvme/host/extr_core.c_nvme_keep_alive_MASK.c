
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int timeout; int q; struct nvme_ctrl* end_io_data; } ;
struct nvme_ctrl {int kato; int ka_cmd; int admin_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int VAR_2 ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,int *,struct request*,int ,int ) ;
 struct request* FUNC_3 (int ,int *,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct nvme_ctrl *VAR_4)
{
 struct request *VAR_5;

 VAR_5 = FUNC_3(VAR_4->admin_q, &VAR_4->ka_cmd, VAR_0,
   VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_5->timeout = VAR_4->kato * VAR_1;
 VAR_5->end_io_data = VAR_4;

 FUNC_2(VAR_5->q, ((void*)0), VAR_5, 0, VAR_3);

 return 0;
}
