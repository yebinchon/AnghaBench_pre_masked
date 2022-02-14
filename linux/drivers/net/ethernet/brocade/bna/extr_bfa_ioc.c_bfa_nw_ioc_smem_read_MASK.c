
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc_init_sem_reg; int host_page_num_fn; int smem_page_start; int smem_pg0; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int
FUNC_7(struct bfa_ioc *VAR_0, void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;
 u32 *VAR_9 = VAR_1;

 VAR_4 = FUNC_0(VAR_0->ioc_regs.smem_pg0, VAR_2);
 VAR_5 = FUNC_1(VAR_2);




 if (!FUNC_3(VAR_0->ioc_regs.ioc_init_sem_reg))
  return 1;

 FUNC_6(VAR_4, VAR_0->ioc_regs.host_page_num_fn);

 VAR_8 = VAR_3/sizeof(u32);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_5(FUNC_4(VAR_5 + VAR_0->ioc_regs.smem_page_start));
  VAR_9[VAR_7] = FUNC_2(VAR_6);
  VAR_5 += sizeof(u32);




  VAR_5 = FUNC_1(VAR_5);
  if (VAR_5 == 0) {
   VAR_4++;
   FUNC_6(VAR_4, VAR_0->ioc_regs.host_page_num_fn);
  }
 }

 FUNC_6(FUNC_0(VAR_0->ioc_regs.smem_pg0, 0),
        VAR_0->ioc_regs.host_page_num_fn);




 FUNC_4(VAR_0->ioc_regs.ioc_init_sem_reg);
 FUNC_6(1, VAR_0->ioc_regs.ioc_init_sem_reg);
 return 0;
}
