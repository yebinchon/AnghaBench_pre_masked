
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_bm {int bppi_virt_addr; int bppi_phys_addr; int bppi_pool; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_2,
         struct mvneta_bm *VAR_3)
{
 VAR_3->bppi_pool = FUNC_1(VAR_2, "internal-mem", 0);
 if (!VAR_3->bppi_pool)
  return -VAR_0;

 VAR_3->bppi_virt_addr = FUNC_0(VAR_3->bppi_pool,
        VAR_1,
        &VAR_3->bppi_phys_addr);
 if (!VAR_3->bppi_virt_addr)
  return -VAR_0;

 return 0;
}
