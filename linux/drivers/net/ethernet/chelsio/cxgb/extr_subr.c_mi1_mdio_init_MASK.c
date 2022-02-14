
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct board_info {int clock_elmer0; int mdio_mdc; int caps; int mdio_mdien; int mdio_mdiinv; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(adapter_t *VAR_3, const struct board_info *VAR_4)
{
 u32 VAR_5 = VAR_4->clock_elmer0 / (2 * VAR_4->mdio_mdc) - 1;
 u32 VAR_6 = VAR_1 | FUNC_2(VAR_4->mdio_mdiinv) |
  FUNC_1(VAR_4->mdio_mdien) | FUNC_0(VAR_5);

 if (!(VAR_4->caps & VAR_2))
  VAR_6 |= FUNC_3(1);
 FUNC_4(VAR_3, VAR_0, VAR_6);
}
