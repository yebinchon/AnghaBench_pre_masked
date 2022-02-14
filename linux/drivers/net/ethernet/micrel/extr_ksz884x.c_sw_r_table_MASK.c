
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 int FUNC_0 (struct ksz_hw*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ksz_hw *VAR_4, int VAR_5, u16 VAR_6, u32 *VAR_7)
{
 u16 VAR_8;
 uint VAR_9;

 VAR_8 = (((VAR_5 << VAR_3) | VAR_2) << 8) | VAR_6;

 VAR_9 = FUNC_1(VAR_4);

 FUNC_4(VAR_8, VAR_4->io + VAR_1);
 FUNC_0(VAR_4, VAR_1);
 *VAR_7 = FUNC_3(VAR_4->io + VAR_0);

 FUNC_2(VAR_4, VAR_9);
}
