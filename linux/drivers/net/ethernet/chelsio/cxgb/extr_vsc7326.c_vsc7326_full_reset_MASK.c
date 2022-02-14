
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void FUNC_6(adapter_t* VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 0xffff;

 FUNC_1(VAR_2, VAR_0, &VAR_3);
 VAR_3 &= ~1;
 FUNC_2(VAR_2, VAR_0, VAR_3);
 FUNC_3(2);
 VAR_3 |= 0x1;
 VAR_3 |= 0x800;
 FUNC_2(VAR_2, VAR_0, VAR_3);
 FUNC_0(1);
 FUNC_5(VAR_2, VAR_1, 0x80000001);
 do {
  FUNC_0(1);
  FUNC_4(VAR_2, VAR_1, &VAR_4);
 } while (VAR_4 != 0x0);
}
