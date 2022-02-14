
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mxc_nand_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mxc_nand_host *VAR_2, int VAR_3)
{
 uint16_t VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 if (VAR_3)
  VAR_4 &= ~VAR_1;
 else
  VAR_4 |= VAR_1;

 FUNC_1(VAR_4, VAR_0);
}
