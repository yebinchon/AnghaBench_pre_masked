
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int) ;
 int FUNC_2 (int ,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct lan743x_adapter *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_4);

 return FUNC_2(VAR_2, VAR_0, VAR_4,
      !(VAR_4 & VAR_1), 100000, 10000000);
}
