
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_hw {int addr_list_size; int * address; int override_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ksz_hw*,int,int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ksz_hw *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_0;

 if (FUNC_1(VAR_2->override_addr, VAR_3))
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->addr_list_size; VAR_4++) {
  if (FUNC_1(VAR_2->address[VAR_4], VAR_3))
   return 0;
  if (VAR_0 == VAR_5 && FUNC_0(VAR_2->address[VAR_4]))
   VAR_5 = VAR_4;
 }
 if (VAR_5 < VAR_0) {
  FUNC_3(VAR_2->address[VAR_5], VAR_3, VAR_1);
  FUNC_2(VAR_2, VAR_5, VAR_2->address[VAR_5]);
  return 0;
 }
 return -1;
}
