
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmpe {int dev; TYPE_1__* ci; } ;
struct TYPE_2__ {int (* write_byte ) (struct stmpe*,int ,int ) ;} ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct stmpe*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct stmpe *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0->dev, "wr: reg %#x <= %#x\n", VAR_1, VAR_2);

 VAR_3 = VAR_0->ci->write_byte(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_0(VAR_0->dev, "failed to write reg %#x: %d\n", VAR_1, VAR_3);

 return VAR_3;
}
