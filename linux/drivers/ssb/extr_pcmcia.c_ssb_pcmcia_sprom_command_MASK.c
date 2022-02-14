
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssb_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssb_bus*,int ,int*) ;
 int FUNC_1 (struct ssb_bus*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ssb_bus *VAR_3, u8 VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_4);
 if (VAR_6)
  return VAR_6;
 for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  VAR_6 = FUNC_0(VAR_3, VAR_1, &VAR_7);
  if (VAR_6)
   return VAR_6;
  if (VAR_7 & VAR_2)
   return 0;
  FUNC_2(10);
 }

 return -VAR_0;
}
