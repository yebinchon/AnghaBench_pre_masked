
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct firmware {int size; int data; } ;
struct TYPE_3__ {struct firmware* board; } ;
struct TYPE_4__ {int bmi_board_id; int bmi_chip_id; scalar_t__ bmi_ids_valid; } ;
struct ath10k {int bd_api; TYPE_1__ normal_mode_fw; TYPE_2__ id; } ;
typedef int boardinfo ;


 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct ath10k*,char*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int,char*,...) ;

void FUNC_4(struct ath10k *VAR_0)
{
 char VAR_1[100];
 const struct firmware *VAR_2;
 u32 VAR_3;

 if (VAR_0->id.bmi_ids_valid)
  FUNC_3(VAR_1, sizeof(VAR_1), "%d:%d",
     VAR_0->id.bmi_chip_id, VAR_0->id.bmi_board_id);
 else
  FUNC_3(VAR_1, sizeof(VAR_1), "N/A");

 VAR_2 = VAR_0->normal_mode_fw.board;
 if (!FUNC_0(VAR_2))
  VAR_3 = FUNC_2(0, VAR_2->data, VAR_2->size);
 else
  VAR_3 = 0;

 FUNC_1(VAR_0, "board_file api %d bmi_id %s crc32 %08x",
      VAR_0->bd_api,
      VAR_1,
      VAR_3);
}
