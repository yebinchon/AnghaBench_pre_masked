
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct iwl_priv {int passive_no_rx; TYPE_4__* lib; scalar_t__ transport_queue_stop; int trans; TYPE_3__* nvm_data; TYPE_2__* fw; } ;
struct TYPE_8__ {int no_xtal_calib; } ;
struct TYPE_7__ {scalar_t__ sku_cap_ipan_enable; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ ucode_capa; } ;


 int FUNC_0 (int*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (int ,int,int const,int ) ;
 int FUNC_5 (int ,int ) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_4)
{
 const u8 *VAR_5;
 u8 VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_5(VAR_4->trans, 0);

 if (VAR_4->fw->ucode_capa.flags & VAR_1 &&
     VAR_4->nvm_data->sku_cap_ipan_enable) {
  VAR_6 = FUNC_0(VAR_3);
  VAR_5 = VAR_3;
 } else {
  VAR_6 = FUNC_0(VAR_2);
  VAR_5 = VAR_2;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  if (VAR_5[VAR_8] != VAR_0)
   FUNC_4(VAR_4->trans, VAR_8,
      VAR_5[VAR_8], 0);

 VAR_4->passive_no_rx = 0;
 VAR_4->transport_queue_stop = 0;

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7)
  return VAR_7;

 if (!VAR_4->lib->no_xtal_calib) {
  VAR_7 = FUNC_3(VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 return FUNC_1(VAR_4);
}
