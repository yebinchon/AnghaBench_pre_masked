
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8152 {int coalesce; int version; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct r8152 *VAR_3)
{
 u32 VAR_4 = VAR_3->coalesce / 8;

 switch (VAR_3->version) {
 case 133:
 case 132:
 case 131:
 case 130:
  FUNC_0(VAR_3, VAR_0, VAR_1,
          VAR_4);
  break;

 case 129:
 case 128:



  FUNC_0(VAR_3, VAR_0, VAR_1,
          128 / 8);
  FUNC_0(VAR_3, VAR_0, VAR_2,
          VAR_4);
  break;

 default:
  break;
 }
}
