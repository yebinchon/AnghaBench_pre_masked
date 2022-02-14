
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_0, int VAR_1, int VAR_2, u16 VAR_3,
 int VAR_4)
{
 u32 VAR_5;
 u16 VAR_6;

 FUNC_0(VAR_1, VAR_5);
 VAR_5 += VAR_2;
 VAR_6 = FUNC_1(VAR_0->io + VAR_5);
 if (VAR_4)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= ~VAR_3;
 FUNC_2(VAR_6, VAR_0->io + VAR_5);
}
