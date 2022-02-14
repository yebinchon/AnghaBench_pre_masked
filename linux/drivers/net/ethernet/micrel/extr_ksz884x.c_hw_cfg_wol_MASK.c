
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_1, u16 VAR_2, int VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_1->io + VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_1->io + VAR_0);
}
