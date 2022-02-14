
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int board_id; } ;
struct ath10k_qmi {struct ath10k* ar; TYPE_3__ board_info; } ;
struct TYPE_10__ {int dir; } ;
struct TYPE_9__ {TYPE_5__ fw; } ;
struct TYPE_7__ {int qmi_ids_valid; int qmi_board_id; } ;
struct TYPE_6__ {int bus; } ;
struct ath10k {TYPE_4__ hw_params; TYPE_2__ id; TYPE_1__ hif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ) ;

__attribute__((used)) static int FUNC_1(struct ath10k_qmi *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3->ar;

 VAR_4->hif.bus = VAR_1;
 VAR_4->id.qmi_ids_valid = 1;
 VAR_4->id.qmi_board_id = VAR_3->board_info.board_id;
 VAR_4->hw_params.fw.dir = VAR_2;

 return FUNC_0(VAR_3->ar, VAR_0);
}
