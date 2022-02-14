
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int dummy; } ;
struct tb_cfg_request {void (* callback ) (void*) ;int work; int response; int request_type; int request_size; int request; int list; void* callback_data; scalar_t__ flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tb_cfg_request*) ;
 int FUNC_4 (struct tb_ctl*,struct tb_cfg_request*) ;
 int FUNC_5 (struct tb_cfg_request*) ;
 int FUNC_6 (struct tb_cfg_request*) ;
 int VAR_0 ;
 int FUNC_7 (struct tb_ctl*,int ,int ,int ) ;

int FUNC_8(struct tb_ctl *VAR_1, struct tb_cfg_request *VAR_2,
     void (*VAR_3)(void *), void *VAR_4)
{
 int VAR_5;

 VAR_2->flags = 0;
 VAR_2->callback = VAR_3;
 VAR_2->callback_data = VAR_4;
 FUNC_1(&VAR_2->work, VAR_0);
 FUNC_0(&VAR_2->list);

 FUNC_5(VAR_2);
 VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (VAR_5)
  goto err_put;

 VAR_5 = FUNC_7(VAR_1, VAR_2->request, VAR_2->request_size,
   VAR_2->request_type);
 if (VAR_5)
  goto err_dequeue;

 if (!VAR_2->response)
  FUNC_2(&VAR_2->work);

 return 0;

err_dequeue:
 FUNC_3(VAR_2);
err_put:
 FUNC_6(VAR_2);

 return VAR_5;
}
