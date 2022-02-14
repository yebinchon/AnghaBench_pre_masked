
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct octeon_ethernet {int phy_mode; struct device_node* of_node; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct octeon_ethernet *VAR_4, int VAR_5,
    int VAR_6)
{
 struct device_node *VAR_7 = VAR_4->of_node;
 u32 VAR_8;
 bool VAR_9;
 bool VAR_10;




 VAR_9 = 1;
 VAR_10 = 1;

 if (!FUNC_3(VAR_7, "rx-delay", &VAR_8)) {
  FUNC_2(FUNC_0(VAR_6, VAR_5), VAR_8);
  VAR_9 = VAR_8 > 0;
 }
 if (!FUNC_3(VAR_7, "tx-delay", &VAR_8)) {
  FUNC_2(FUNC_1(VAR_6, VAR_5), VAR_8);
  VAR_10 = VAR_8 > 0;
 }

 if (!VAR_9 && !VAR_10)
  VAR_4->phy_mode = VAR_1;
 else if (!VAR_9)
  VAR_4->phy_mode = VAR_2;
 else if (!VAR_10)
  VAR_4->phy_mode = VAR_3;
 else
  VAR_4->phy_mode = VAR_0;
}
