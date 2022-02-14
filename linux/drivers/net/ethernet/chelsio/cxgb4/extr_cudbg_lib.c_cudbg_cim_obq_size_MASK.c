
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

u32 FUNC_4(struct adapter *VAR_3, int VAR_4)
{
 u32 VAR_5;

 FUNC_3(VAR_3, VAR_1, VAR_2 |
       FUNC_1(VAR_4));
 VAR_5 = FUNC_2(VAR_3, VAR_0);
 VAR_5 = FUNC_0(VAR_5) * 64;
 return VAR_5 * sizeof(u32);
}
