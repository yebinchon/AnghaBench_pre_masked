
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ext_board_len; int * ext_board_data; int * ext_board; scalar_t__ board_len; int * board_data; int * board; } ;
struct ath10k {TYPE_1__ normal_mode_fw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ath10k *VAR_0)
{
 if (!FUNC_0(VAR_0->normal_mode_fw.board))
  FUNC_1(VAR_0->normal_mode_fw.board);

 if (!FUNC_0(VAR_0->normal_mode_fw.ext_board))
  FUNC_1(VAR_0->normal_mode_fw.ext_board);

 VAR_0->normal_mode_fw.board = ((void*)0);
 VAR_0->normal_mode_fw.board_data = ((void*)0);
 VAR_0->normal_mode_fw.board_len = 0;
 VAR_0->normal_mode_fw.ext_board = ((void*)0);
 VAR_0->normal_mode_fw.ext_board_data = ((void*)0);
 VAR_0->normal_mode_fw.ext_board_len = 0;
}
