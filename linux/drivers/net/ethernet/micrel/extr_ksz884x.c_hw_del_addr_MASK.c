
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_hw {int addr_list_size; scalar_t__ io; int * address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ksz_hw *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->addr_list_size; VAR_4++) {
  if (FUNC_1(VAR_2->address[VAR_4], VAR_3)) {
   FUNC_0(VAR_2->address[VAR_4]);
   FUNC_2(0, VAR_2->io + VAR_0 * VAR_4 +
    VAR_1);
   return 0;
  }
 }
 return -1;
}
