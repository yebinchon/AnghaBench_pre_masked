
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_iram_info {size_t remaining; size_t next_paddr; } ;
typedef size_t phys_addr_t ;


 size_t FUNC_0 (size_t,int) ;

__attribute__((used)) static phys_addr_t FUNC_1(struct coda_iram_info *VAR_0, size_t VAR_1)
{
 phys_addr_t VAR_2;

 VAR_1 = FUNC_0(VAR_1, 1024);
 if (VAR_1 > VAR_0->remaining)
  return 0;
 VAR_0->remaining -= VAR_1;

 VAR_2 = VAR_0->next_paddr;
 VAR_0->next_paddr += VAR_1;

 return VAR_2;
}
