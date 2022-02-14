
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ddb {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddb*,int ) ;
 int FUNC_1 (struct ddb*,int,int ) ;
 int FUNC_2 (struct ddb*,int) ;

irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct ddb *VAR_6 = (struct ddb *)VAR_5;
 u32 VAR_7 = 0x8000000f;
 u32 VAR_8 = VAR_7 & FUNC_0(VAR_6, VAR_1);

 if (!VAR_8)
  return VAR_3;
 do {
  if (VAR_8 & 0x80000000)
   return VAR_3;
  FUNC_1(VAR_6, VAR_8, VAR_0);
  FUNC_2(VAR_6, VAR_8);
 } while ((VAR_8 = VAR_7 & FUNC_0(VAR_6, VAR_1)));

 return VAR_2;
}
