
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8152 {int ocp_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r8152*,int ,int) ;
 int FUNC_1 (struct r8152*,int ,int,int) ;
 int FUNC_2 (struct r8152*,int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct r8152 *VAR_2)
{
 u16 VAR_3;

 FUNC_2(VAR_2, VAR_0, VAR_1, 0x2000);
 VAR_2->ocp_base = 0x2000;
 FUNC_1(VAR_2, VAR_0, 0xb014, 0x4c);
 VAR_3 = FUNC_0(VAR_2, VAR_0, 0xb01a);


 if (VAR_3 & 0xc000)
  return 0;
 else
  return 1;
}
