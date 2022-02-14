
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int err; } ;
struct tb_cfg_request {TYPE_1__ result; int work; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct tb_cfg_request*) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct tb_cfg_request *VAR_2, int VAR_3)
{
 FUNC_1(VAR_0, &VAR_2->flags);
 FUNC_0(&VAR_2->work);
 FUNC_3(VAR_1, !FUNC_2(VAR_2));
 VAR_2->result.err = VAR_3;
}
