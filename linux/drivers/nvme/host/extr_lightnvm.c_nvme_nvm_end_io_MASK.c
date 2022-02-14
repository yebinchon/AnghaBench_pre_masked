
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {struct nvm_rq* end_io_data; } ;
struct nvm_rq {int error; int ppa_status; } ;
typedef int blk_status_t ;
struct TYPE_3__ {int u64; } ;
struct TYPE_4__ {int cmd; int status; TYPE_1__ result; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvm_rq*) ;
 TYPE_2__* FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_0, blk_status_t VAR_1)
{
 struct nvm_rq *VAR_2 = VAR_0->end_io_data;

 VAR_2->ppa_status = FUNC_2(FUNC_4(VAR_0)->result.u64);
 VAR_2->error = FUNC_4(VAR_0)->status;
 FUNC_3(VAR_2);

 FUNC_1(FUNC_4(VAR_0)->cmd);
 FUNC_0(VAR_0);
}
