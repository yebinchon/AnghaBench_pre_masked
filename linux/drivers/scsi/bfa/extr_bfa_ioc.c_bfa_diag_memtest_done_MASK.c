
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int smem_page_start; int host_page_num_fn; int smem_pg0; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
struct bfa_diag_s {scalar_t__ block; int status; int cbarg; int (* cbfn ) (int ,int ) ;scalar_t__ timer_active; struct bfa_diag_memtest_result* result; struct bfa_ioc_s* ioc; } ;
struct bfa_diag_memtest_result {scalar_t__ status; scalar_t__ addr; scalar_t__ exp; scalar_t__ act; scalar_t__ err_status; scalar_t__ err_status1; scalar_t__ err_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_diag_s*,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 struct bfa_diag_s *VAR_5 = VAR_4;
 struct bfa_ioc_s *VAR_6 = VAR_5->ioc;
 struct bfa_diag_memtest_result *VAR_7 = VAR_5->result;
 u32 VAR_8 = VAR_2;
 u32 VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_6->ioc_regs.smem_pg0, VAR_8);
 VAR_10 = FUNC_1(VAR_8);

 FUNC_7(VAR_9, VAR_6->ioc_regs.host_page_num_fn);

 for (VAR_11 = 0; VAR_11 < (sizeof(struct bfa_diag_memtest_result) /
    sizeof(u32)); VAR_11++) {

  *((u32 *) VAR_7 + VAR_11) =
   FUNC_3(VAR_6->ioc_regs.smem_page_start, VAR_8);
  VAR_8 += sizeof(u32);
 }


 FUNC_2(VAR_6);

 VAR_7->status = FUNC_6(VAR_7->status);
 FUNC_4(VAR_5, VAR_7->status);

 if (VAR_7->status == VAR_3)
  VAR_5->status = VAR_1;
 else {
  VAR_5->status = VAR_0;
  VAR_7->addr = FUNC_6(VAR_7->addr);
  VAR_7->exp = FUNC_6(VAR_7->exp);
  VAR_7->act = FUNC_6(VAR_7->act);
  VAR_7->err_status = FUNC_6(VAR_7->err_status);
  VAR_7->err_status1 = FUNC_6(VAR_7->err_status1);
  VAR_7->err_addr = FUNC_6(VAR_7->err_addr);
  FUNC_4(VAR_5, VAR_7->addr);
  FUNC_4(VAR_5, VAR_7->exp);
  FUNC_4(VAR_5, VAR_7->act);
  FUNC_4(VAR_5, VAR_7->err_status);
  FUNC_4(VAR_5, VAR_7->err_status1);
  FUNC_4(VAR_5, VAR_7->err_addr);
 }
 VAR_5->timer_active = 0;
 VAR_5->cbfn(VAR_5->cbarg, VAR_5->status);
 VAR_5->block = 0;
}
