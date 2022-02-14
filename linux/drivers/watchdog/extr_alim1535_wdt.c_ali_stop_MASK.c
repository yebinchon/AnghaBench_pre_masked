
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 u32 VAR_2;

 FUNC_2(&VAR_0);

 FUNC_0(VAR_1, 0xCC, &VAR_2);
 VAR_2 &= ~0x3F;
 VAR_2 &= ~(1 << 25);
 FUNC_1(VAR_1, 0xCC, VAR_2);

 FUNC_3(&VAR_0);
}
