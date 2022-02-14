
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(u32 *VAR_0, u16 VAR_1)
{


 bool VAR_2 = VAR_1 < (*VAR_0 & 0xFFFF);
 u32 VAR_3 = (*VAR_0 & 0xFFFF0000) + VAR_1;

 if (VAR_2)
  VAR_3 += 65536;
 FUNC_0(*VAR_0, VAR_3);
}
