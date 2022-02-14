
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i1480 {int (* read ) (struct i1480*,int,int) ;int dev; scalar_t__ cmd_buf; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct i1480*,int,int) ;

__attribute__((used)) static
int FUNC_3(struct i1480 *VAR_0)
{
 int VAR_1;
 u32 *VAR_2 = (u32 *) VAR_0->cmd_buf;

 VAR_1 = VAR_0->read(VAR_0, 0x80080000, 2 * sizeof(*VAR_2));
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "cannot read U & L states: %d\n", VAR_1);
  goto error;
 }
 FUNC_1(VAR_0->dev, "state U 0x%08x, L 0x%08x\n", VAR_2[0], VAR_2[1]);
error:
 return VAR_1;
}
