
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct firmware {int size; int data; } ;
struct TYPE_6__ {struct firmware const* ext_board; int ext_board_len; int ext_board_data; struct firmware const* board; int board_len; int board_data; } ;
struct TYPE_4__ {int eboard; int dir; int board; } ;
struct TYPE_5__ {TYPE_1__ fw; } ;
struct ath10k {TYPE_3__ normal_mode_fw; TYPE_2__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct ath10k*,char*) ;
 void* FUNC_3 (struct ath10k*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_3, int VAR_4)
{
 const struct firmware *VAR_5;

 if (VAR_4 == VAR_0) {
  if (!VAR_3->hw_params.fw.board) {
   FUNC_2(VAR_3, "failed to find board file fw entry\n");
   return -VAR_2;
  }

  VAR_3->normal_mode_fw.board = FUNC_3(VAR_3,
        VAR_3->hw_params.fw.dir,
        VAR_3->hw_params.fw.board);
  if (FUNC_0(VAR_3->normal_mode_fw.board))
   return FUNC_1(VAR_3->normal_mode_fw.board);

  VAR_3->normal_mode_fw.board_data = VAR_3->normal_mode_fw.board->data;
  VAR_3->normal_mode_fw.board_len = VAR_3->normal_mode_fw.board->size;
 } else if (VAR_4 == VAR_1) {
  if (!VAR_3->hw_params.fw.eboard) {
   FUNC_2(VAR_3, "failed to find eboard file fw entry\n");
   return -VAR_2;
  }

  VAR_5 = FUNC_3(VAR_3, VAR_3->hw_params.fw.dir,
       VAR_3->hw_params.fw.eboard);
  VAR_3->normal_mode_fw.ext_board = VAR_5;
  if (FUNC_0(VAR_3->normal_mode_fw.ext_board))
   return FUNC_1(VAR_3->normal_mode_fw.ext_board);

  VAR_3->normal_mode_fw.ext_board_data = VAR_3->normal_mode_fw.ext_board->data;
  VAR_3->normal_mode_fw.ext_board_len = VAR_3->normal_mode_fw.ext_board->size;
 }

 return 0;
}
