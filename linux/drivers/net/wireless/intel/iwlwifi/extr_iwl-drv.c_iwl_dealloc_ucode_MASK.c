
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cmd_versions; } ;
struct TYPE_4__ {int mem_tlv; int * trigger_tlv; int * conf_tlv; int dest_tlv; } ;
struct TYPE_6__ {scalar_t__ img; TYPE_2__ ucode_capa; int iml; TYPE_1__ dbg; } ;
struct iwl_drv {TYPE_3__ fw; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_drv*,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_drv *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1->fw.dbg.dest_tlv);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->fw.dbg.conf_tlv); VAR_2++)
  FUNC_2(VAR_1->fw.dbg.conf_tlv[VAR_2]);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->fw.dbg.trigger_tlv); VAR_2++)
  FUNC_2(VAR_1->fw.dbg.trigger_tlv[VAR_2]);
 FUNC_2(VAR_1->fw.dbg.mem_tlv);
 FUNC_2(VAR_1->fw.iml);
 FUNC_2(VAR_1->fw.ucode_capa.cmd_versions);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1, VAR_1->fw.img + VAR_2);
}
