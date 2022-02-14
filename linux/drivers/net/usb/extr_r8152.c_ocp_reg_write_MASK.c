
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8152 {int ocp_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r8152*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct r8152 *VAR_2, u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5, VAR_6;

 VAR_5 = VAR_3 & 0xf000;
 if (VAR_5 != VAR_2->ocp_base) {
  FUNC_0(VAR_2, VAR_0, VAR_1, VAR_5);
  VAR_2->ocp_base = VAR_5;
 }

 VAR_6 = (VAR_3 & 0x0fff) | 0xb000;
 FUNC_0(VAR_2, VAR_0, VAR_6, VAR_4);
}
