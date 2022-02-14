
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;
typedef int rss_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int*,int) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10, VAR_11;
 u32 VAR_12[10];
 int VAR_13;

 FUNC_4(VAR_12, sizeof(VAR_12));
 for (VAR_13 = 0; VAR_13 < 10; VAR_13++)
  FUNC_3(FUNC_1(VAR_13), VAR_12[VAR_13]);


 for (VAR_13 = 0; VAR_13 < 32; VAR_13++)
  FUNC_3(FUNC_0(VAR_13), 0);




 VAR_11 = FUNC_2(VAR_7);
 VAR_11 |= VAR_5;

 FUNC_3(VAR_7, VAR_11);

 VAR_10 = (VAR_0 |
  VAR_1 |
  VAR_2 |
  VAR_3 |
  VAR_4);

 FUNC_3(VAR_6, VAR_10);
}
