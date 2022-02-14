
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {scalar_t__ type; int phy_poll; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct board_info *VAR_2)
{
 if (VAR_2->type == VAR_1)
  FUNC_0(&VAR_2->phy_poll, VAR_0 * 2);
}
