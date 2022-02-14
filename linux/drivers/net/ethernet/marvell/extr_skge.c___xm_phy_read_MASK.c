
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_hw {int phy_addr; scalar_t__ phy_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct skge_hw*,int,int ) ;
 int FUNC_2 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct skge_hw *VAR_7, int VAR_8, u16 VAR_9, u16 *VAR_10)
{
 int VAR_11;

 FUNC_2(VAR_7, VAR_8, VAR_5, VAR_9 | VAR_7->phy_addr);
 *VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_6);

 if (VAR_7->phy_type == VAR_2)
  goto ready;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (FUNC_1(VAR_7, VAR_8, VAR_3) & VAR_4)
   goto ready;
  FUNC_0(1);
 }

 return -VAR_0;
 ready:
 *VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_6);

 return 0;
}
