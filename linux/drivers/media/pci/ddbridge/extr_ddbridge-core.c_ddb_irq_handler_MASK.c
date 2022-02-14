
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
 int FUNC_3 (struct ddb*,int) ;

irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct ddb *VAR_6 = (struct ddb *)VAR_5;
 u32 VAR_7 = FUNC_0(VAR_6, VAR_1);
 int VAR_8 = VAR_2;

 if (!VAR_7)
  return VAR_3;
 do {
  if (VAR_7 & 0x80000000)
   return VAR_3;
  FUNC_1(VAR_6, VAR_7, VAR_0);

  if (VAR_7 & 0x0000000f)
   FUNC_3(VAR_6, VAR_7);
  if (VAR_7 & 0x0fffff00)
   FUNC_2(VAR_6, VAR_7);
 } while ((VAR_7 = FUNC_0(VAR_6, VAR_1)));

 return VAR_8;
}
