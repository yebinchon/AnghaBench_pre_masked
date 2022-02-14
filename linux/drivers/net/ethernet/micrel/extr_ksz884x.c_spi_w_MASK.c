
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksz_hw*,int ) ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*,int ) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_1, u16 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 15; VAR_3 >= 0; VAR_3--) {
  (VAR_2 & (0x01 << VAR_3)) ? FUNC_2(VAR_1, VAR_0) :
   FUNC_0(VAR_1, VAR_0);
  FUNC_1(VAR_1);
 }
}
