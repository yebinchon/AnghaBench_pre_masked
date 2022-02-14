
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8152 {int ocp_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r8152*,int ,int) ;
 int FUNC_1 (struct r8152*,int ,int ,int) ;

__attribute__((used)) static u16 FUNC_2(struct r8152 *VAR_2, u16 VAR_3)
{
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_3 & 0xf000;
 if (VAR_4 != VAR_2->ocp_base) {
  FUNC_1(VAR_2, VAR_0, VAR_1, VAR_4);
  VAR_2->ocp_base = VAR_4;
 }

 VAR_5 = (VAR_3 & 0x0fff) | 0xb000;
 return FUNC_0(VAR_2, VAR_0, VAR_5);
}
