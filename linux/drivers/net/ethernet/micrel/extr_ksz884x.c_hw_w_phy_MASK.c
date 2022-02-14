
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_2, int VAR_3, u16 VAR_4, u16 VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_0 + VAR_3 * VAR_1 + VAR_4;
 FUNC_0(VAR_5, VAR_2->io + VAR_6);
}
