
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_hw {int multi_list_size; scalar_t__ io; int * multi_bits; int * multi_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_1(VAR_2->multi_bits, 0, sizeof(u8) * VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->multi_list_size; VAR_3++) {
  VAR_5 = (FUNC_0(6, VAR_2->multi_list[VAR_3]) >> 26) & 0x3f;
  VAR_4 = VAR_5 >> 3;
  VAR_6 = 1 << (VAR_5 & 7);
  VAR_2->multi_bits[VAR_4] |= (u8) VAR_6;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2->multi_bits[VAR_3], VAR_2->io + VAR_1 +
   VAR_3);
}
