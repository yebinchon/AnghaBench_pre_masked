
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct brcmf_sdio {TYPE_4__* sdiodev; TYPE_1__* ci; } ;
struct brcmf_fw_request {int board_type; TYPE_2__* items; } ;
struct brcmf_fw_name {char* member_0; int member_1; } ;
struct TYPE_8__ {TYPE_3__* settings; int nvram_name; int fw_name; } ;
struct TYPE_7__ {int board_type; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int chiprev; int chip; } ;


 int FUNC_0 (struct brcmf_fw_name*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct brcmf_fw_request* FUNC_1 (int ,int ,struct brcmf_fw_name*,int ,struct brcmf_fw_name*,int ) ;
 struct brcmf_fw_name* VAR_4 ;

__attribute__((used)) static struct brcmf_fw_request *
FUNC_2(struct brcmf_sdio *VAR_5)
{
 struct brcmf_fw_request *VAR_6;
 struct brcmf_fw_name VAR_7[] = {
  { ".bin", VAR_5->sdiodev->fw_name },
  { ".txt", VAR_5->sdiodev->nvram_name },
 };

 VAR_6 = FUNC_1(VAR_5->ci->chip, VAR_5->ci->chiprev,
           VAR_4,
           FUNC_0(VAR_4),
           VAR_7, FUNC_0(VAR_7));
 if (!VAR_6)
  return ((void*)0);

 VAR_6->items[VAR_2].type = VAR_0;
 VAR_6->items[VAR_3].type = VAR_1;
 VAR_6->board_type = VAR_5->sdiodev->settings->board_type;

 return VAR_6;
}
