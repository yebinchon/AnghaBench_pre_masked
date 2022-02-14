
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int (* read ) (struct mii_bus*,int,int) ;int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mii_bus*,int,int) ;
 int FUNC_2 (struct mii_bus*,int,int) ;

__attribute__((used)) static u32
FUNC_3(struct mii_bus *VAR_0, int VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = VAR_0->read(VAR_0, VAR_1, VAR_2);
 if (VAR_4 >= 0) {
  VAR_3 = VAR_4;
  VAR_4 = VAR_0->read(VAR_0, VAR_1, VAR_2 + 1);
  VAR_3 |= VAR_4 << 16;
 }

 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->dev,
        "failed to read qca8k 32bit register\n");
  return VAR_4;
 }

 return VAR_3;
}
