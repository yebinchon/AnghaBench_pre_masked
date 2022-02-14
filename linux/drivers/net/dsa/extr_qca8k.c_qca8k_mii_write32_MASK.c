
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {int (* write ) (struct mii_bus*,int,int,int) ;int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mii_bus*,int,int,int) ;
 int FUNC_2 (struct mii_bus*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct mii_bus *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 u16 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = VAR_3 & 0xffff;
 VAR_5 = (u16)(VAR_3 >> 16);

 VAR_6 = VAR_0->write(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_6 >= 0)
  VAR_6 = VAR_0->write(VAR_0, VAR_1, VAR_2 + 1, VAR_5);
 if (VAR_6 < 0)
  FUNC_0(&VAR_0->dev,
        "failed to write qca8k 32bit register\n");
}
