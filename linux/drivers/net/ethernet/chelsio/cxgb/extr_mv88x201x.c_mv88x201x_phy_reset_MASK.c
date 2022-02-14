
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(adapter_t *VAR_1)
{
 u32 VAR_2;

 FUNC_1(VAR_1, VAR_0, &VAR_2);
 VAR_2 &= ~4;
 FUNC_2(VAR_1, VAR_0, VAR_2);
 FUNC_0(100);

 FUNC_2(VAR_1, VAR_0, VAR_2 | 4);
 FUNC_0(1000);


 FUNC_1(VAR_1, VAR_0, &VAR_2);
 VAR_2 |= 0x8000;
 FUNC_2(VAR_1, VAR_0, VAR_2);
 FUNC_3(100);
 return 0;
}
