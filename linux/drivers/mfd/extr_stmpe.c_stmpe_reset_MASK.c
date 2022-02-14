
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct stmpe {int * regs; TYPE_1__* variant; } ;
struct TYPE_2__ {scalar_t__ id_val; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stmpe*,int ) ;
 int FUNC_1 (struct stmpe*,int ,int,int) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct stmpe *VAR_6)
{
 u16 VAR_7 = VAR_6->variant->id_val;
 unsigned long VAR_8;
 int VAR_9 = 0;
 u8 VAR_10;

 if (VAR_7 == VAR_1)

  VAR_10 = VAR_2;
 else

  VAR_10 = VAR_4;

 VAR_9 = FUNC_1(VAR_6, VAR_6->regs[VAR_3],
          VAR_10, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(10);

 VAR_8 = VAR_5 + FUNC_2(100);
 while (FUNC_4(VAR_5, VAR_8)) {
  VAR_9 = FUNC_0(VAR_6, VAR_6->regs[VAR_3]);
  if (VAR_9 < 0)
   return VAR_9;
  if (!(VAR_9 & VAR_10))
   return 0;
  FUNC_5(100, 200);
 }
 return -VAR_0;
}
