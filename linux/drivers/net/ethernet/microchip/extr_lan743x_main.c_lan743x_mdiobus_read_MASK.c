
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {struct lan743x_adapter* priv; } ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct lan743x_adapter*) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct lan743x_adapter *VAR_6 = VAR_3->priv;
 u32 VAR_7, VAR_8;
 int VAR_9;


 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_2);
 FUNC_1(VAR_6, VAR_0, VAR_8);
 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 return (int)(VAR_7 & 0xFFFF);
}
