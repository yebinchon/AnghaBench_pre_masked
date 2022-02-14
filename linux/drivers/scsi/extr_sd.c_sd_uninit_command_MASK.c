
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {scalar_t__ cmd_len; int * cmnd; struct request* request; } ;
struct TYPE_3__ {int * bv_page; } ;
struct request {int rq_flags; TYPE_1__ special_vec; } ;
struct TYPE_4__ {int * cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (struct request*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct scsi_cmnd *VAR_3)
{
 struct request *VAR_4 = VAR_3->request;
 u8 *VAR_5;

 if (VAR_4->rq_flags & VAR_0)
  FUNC_0(VAR_4->special_vec.bv_page, VAR_2);

 if (VAR_3->cmnd != FUNC_1(VAR_4)->cmd) {
  VAR_5 = VAR_3->cmnd;
  VAR_3->cmnd = ((void*)0);
  VAR_3->cmd_len = 0;
  FUNC_0(VAR_5, VAR_1);
 }
}
