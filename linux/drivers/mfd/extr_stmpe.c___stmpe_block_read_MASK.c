
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmpe {int dev; TYPE_1__* ci; } ;
struct TYPE_2__ {int (* read_block ) (struct stmpe*,int ,int ,int *) ;} ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (struct stmpe*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct stmpe *VAR_0, u8 VAR_1, u8 VAR_2,
         u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_0->ci->read_block(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->dev, "failed to read regs %#x: %d\n", VAR_1, VAR_4);

 FUNC_1(VAR_0->dev, "rd: reg %#x (%d) => ret %#x\n", VAR_1, VAR_2, VAR_4);
 FUNC_2("stmpe rd: ", VAR_3, VAR_2);

 return VAR_4;
}
