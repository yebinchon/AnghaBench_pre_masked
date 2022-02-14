
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct brcmf_pciedev_info {TYPE_4__* pdev; TYPE_3__* settings; TYPE_1__* ci; int nvram_name; int fw_name; } ;
struct brcmf_fw_request {int bus_nr; scalar_t__ domain_nr; int board_type; TYPE_2__* items; } ;
struct brcmf_fw_name {char* member_0; int member_1; } ;
struct TYPE_10__ {int number; } ;
struct TYPE_9__ {TYPE_5__* bus; } ;
struct TYPE_8__ {int board_type; } ;
struct TYPE_7__ {int flags; int type; } ;
struct TYPE_6__ {int chiprev; int chip; } ;


 int FUNC_0 (struct brcmf_fw_name*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct brcmf_fw_request* FUNC_1 (int ,int ,struct brcmf_fw_name*,int ,struct brcmf_fw_name*,int ) ;
 struct brcmf_fw_name* VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static struct brcmf_fw_request *
FUNC_3(struct brcmf_pciedev_info *VAR_6)
{
 struct brcmf_fw_request *VAR_7;
 struct brcmf_fw_name VAR_8[] = {
  { ".bin", VAR_6->fw_name },
  { ".txt", VAR_6->nvram_name },
 };

 VAR_7 = FUNC_1(VAR_6->ci->chip, VAR_6->ci->chiprev,
           VAR_5,
           FUNC_0(VAR_5),
           VAR_8, FUNC_0(VAR_8));
 if (!VAR_7)
  return ((void*)0);

 VAR_7->items[VAR_3].type = VAR_1;
 VAR_7->items[VAR_4].type = VAR_2;
 VAR_7->items[VAR_4].flags = VAR_0;
 VAR_7->board_type = VAR_6->settings->board_type;

 VAR_7->domain_nr = FUNC_2(VAR_6->pdev->bus) + 1;
 VAR_7->bus_nr = VAR_6->pdev->bus->number;

 return VAR_7;
}
