
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmpe {int dev; TYPE_1__* ci; } ;
struct TYPE_2__ {int (* write_block ) (struct stmpe*,int ,int ,int const*) ;} ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (char*,int const*,int ) ;
 int FUNC_3 (struct stmpe*,int ,int ,int const*) ;

__attribute__((used)) static int FUNC_4(struct stmpe *VAR_0, u8 VAR_1, u8 VAR_2,
   const u8 *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0->dev, "wr: regs %#x (%d)\n", VAR_1, VAR_2);
 FUNC_2("stmpe wr: ", VAR_3, VAR_2);

 VAR_4 = VAR_0->ci->write_block(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->dev, "failed to write regs %#x: %d\n", VAR_1, VAR_4);

 return VAR_4;
}
