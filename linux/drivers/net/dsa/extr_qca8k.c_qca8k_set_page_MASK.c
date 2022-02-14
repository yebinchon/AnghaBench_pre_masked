
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mii_bus {scalar_t__ (* write ) (struct mii_bus*,int,int ,scalar_t__) ;int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct mii_bus*,int,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct mii_bus *VAR_1, u16 VAR_2)
{
 if (VAR_2 == VAR_0)
  return;

 if (VAR_1->write(VAR_1, 0x18, 0, VAR_2) < 0)
  FUNC_0(&VAR_1->dev,
        "failed to set qca8k page\n");
 VAR_0 = VAR_2;
}
