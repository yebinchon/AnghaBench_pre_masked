
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe {int * regs; int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stmpe*,int ,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct stmpe *VAR_3,
  int VAR_4)
{
 int VAR_5, VAR_6;


 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "invalid timeout\n");
  return VAR_6;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_3->regs[VAR_1],
   VAR_0,
   VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_3, VAR_3->regs[VAR_1],
   VAR_2,
   VAR_2);
}
