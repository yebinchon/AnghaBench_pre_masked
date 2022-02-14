
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_device {int dummy; } ;
struct cvmx_bootmem_named_block_desc {int size; int base_addr; } ;


 struct cvmx_bootmem_named_block_desc* FUNC_0 (struct octeon_device*,char const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct octeon_device *VAR_0, const char *VAR_1,
       u64 *VAR_2, u64 *VAR_3)
{
 const struct cvmx_bootmem_named_block_desc *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_0, VAR_1, 0);
 FUNC_2();
 if (VAR_4) {
  *VAR_2 = VAR_4->base_addr;
  *VAR_3 = VAR_4->size;
  return 0;
 }
 return 1;
}
