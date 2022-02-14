
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ath10k_mem_region {scalar_t__ len; } ;
struct TYPE_2__ {int size; struct ath10k_mem_region* regions; } ;
struct ath10k_hw_mem_layout {TYPE_1__ region_table; } ;
struct ath10k_dump_ram_data_hdr {int dummy; } ;
struct ath10k {int dummy; } ;


 size_t FUNC_0 (size_t,int) ;
 struct ath10k_hw_mem_layout* FUNC_1 (struct ath10k*) ;

__attribute__((used)) static u32 FUNC_2(struct ath10k *VAR_0)
{
 const struct ath10k_hw_mem_layout *VAR_1;
 const struct ath10k_mem_region *VAR_2;
 size_t VAR_3 = 0;
 int VAR_4;

 VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return 0;

 VAR_2 = &VAR_1->region_table.regions[0];

 for (VAR_4 = 0; VAR_4 < VAR_1->region_table.size; VAR_4++) {
  VAR_3 += VAR_2->len;
  VAR_2++;
 }


 VAR_3 += VAR_1->region_table.size * sizeof(struct ath10k_dump_ram_data_hdr);


 VAR_3 = FUNC_0(VAR_3, 16);

 return VAR_3;
}
