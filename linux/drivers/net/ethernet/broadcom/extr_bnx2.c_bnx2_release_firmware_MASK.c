
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {int * rv2p_firmware; int * mips_firmware; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bnx2 *VAR_0)
{
 if (VAR_0->rv2p_firmware) {
  FUNC_0(VAR_0->mips_firmware);
  FUNC_0(VAR_0->rv2p_firmware);
  VAR_0->rv2p_firmware = ((void*)0);
 }
}
