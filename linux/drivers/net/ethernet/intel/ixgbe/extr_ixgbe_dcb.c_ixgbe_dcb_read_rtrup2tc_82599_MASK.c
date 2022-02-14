
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct ixgbe_hw {int dummy; } ;


 size_t FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ixgbe_hw *VAR_4, u8 *VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_5[VAR_7] = VAR_1 &
   (VAR_6 >> (VAR_7 * VAR_2));
}
