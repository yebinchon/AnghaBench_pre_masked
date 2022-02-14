
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2 {int hc_cmd; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct bnx2 *VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 if (!FUNC_3(VAR_4->dev))
  return -VAR_3;

 VAR_6 = FUNC_0(VAR_4, VAR_2) & 0xffff;


 FUNC_1(VAR_4, VAR_0, VAR_4->hc_cmd | VAR_1);
 FUNC_0(VAR_4, VAR_0);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  if ((FUNC_0(VAR_4, VAR_2) & 0xffff) !=
   VAR_6) {

   break;
  }

  FUNC_2(10);
 }
 if (VAR_5 < 10)
  return 0;

 return -VAR_3;
}
