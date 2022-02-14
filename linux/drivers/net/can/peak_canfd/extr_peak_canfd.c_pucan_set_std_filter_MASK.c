
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pucan_std_filter {int mask; int idx; } ;
struct peak_canfd_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct pucan_std_filter* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct peak_canfd_priv*) ;
 int FUNC_3 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_4(struct peak_canfd_priv *VAR_1, u8 VAR_2, u32 VAR_3)
{
 struct pucan_std_filter *VAR_4;

 VAR_4 = FUNC_1(FUNC_2(VAR_1), VAR_0);
 VAR_4->idx = VAR_2;


 VAR_4->mask = FUNC_0(VAR_3);

 return FUNC_3(VAR_1);
}
