
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_board_info {int dummy; } ;
struct mdio_board_entry {int list; int board_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mdio_board_entry* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct mdio_board_info const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(const struct mdio_board_info *VAR_4,
    unsigned int VAR_5)
{
 struct mdio_board_entry *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++, VAR_6++, VAR_4++) {
  FUNC_2(&VAR_6->board_info, VAR_4, sizeof(*VAR_4));
  FUNC_3(&VAR_3);
  FUNC_1(&VAR_6->list, &VAR_2);
  FUNC_4(&VAR_3);
 }

 return 0;
}
