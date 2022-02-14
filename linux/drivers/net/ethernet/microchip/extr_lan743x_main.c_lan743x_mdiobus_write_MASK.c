
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mii_bus {struct lan743x_adapter* priv; } ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan743x_adapter*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct lan743x_adapter*) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_3,
     int VAR_4, int VAR_5, u16 VAR_6)
{
 struct lan743x_adapter *VAR_7 = VAR_3->priv;
 u32 VAR_8, VAR_9;
 int VAR_10;


 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_8 = (u32)VAR_6;
 FUNC_0(VAR_7, VAR_1, VAR_8);


 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_2);
 FUNC_0(VAR_7, VAR_0, VAR_9);
 VAR_10 = FUNC_2(VAR_7);
 return VAR_10;
}
