
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc_init_sem_reg; int host_page_num_fn; int smem_pg0; int smem_page_start; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef int bfa_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static bfa_status_t
FUNC_7(struct bfa_ioc_s *VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_3->ioc_regs.smem_pg0, VAR_4);
 VAR_9 = FUNC_1(VAR_4);
 FUNC_4(VAR_3, VAR_8);
 FUNC_4(VAR_3, VAR_9);
 FUNC_4(VAR_3, VAR_5);




 if (VAR_0 == FUNC_2(VAR_3->ioc_regs.ioc_init_sem_reg)) {
  FUNC_4(VAR_3, 0);
  return VAR_1;
 }

 FUNC_6(VAR_8, VAR_3->ioc_regs.host_page_num_fn);

 VAR_7 = VAR_5/sizeof(u32);
 FUNC_4(VAR_3, VAR_7);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_3(VAR_3->ioc_regs.smem_page_start, VAR_9, 0);
  VAR_9 += sizeof(u32);




  VAR_9 = FUNC_1(VAR_9);
  if (VAR_9 == 0) {
   VAR_8++;
   FUNC_6(VAR_8, VAR_3->ioc_regs.host_page_num_fn);
  }
 }
 FUNC_6(FUNC_0(VAR_3->ioc_regs.smem_pg0, 0),
   VAR_3->ioc_regs.host_page_num_fn);




 FUNC_5(VAR_3->ioc_regs.ioc_init_sem_reg);
 FUNC_6(1, VAR_3->ioc_regs.ioc_init_sem_reg);
 FUNC_4(VAR_3, VAR_8);
 return VAR_2;
}
