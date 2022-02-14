
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct macb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct macb*,int ) ;
 int FUNC_3 (struct macb*) ;

__attribute__((used)) static u32 FUNC_4(struct macb *VAR_6)
{
 if (!FUNC_3(VAR_6))
  return 0;

 switch (FUNC_1(VAR_1, FUNC_2(VAR_6, VAR_2))) {
 case 4:
  return FUNC_0(VAR_0, VAR_3);
 case 2:
  return FUNC_0(VAR_0, VAR_5);
 case 1:
 default:
  return FUNC_0(VAR_0, VAR_4);
 }
}
