
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int length; } ;
struct iwl_wipan_noa_notification {TYPE_1__ noa_attribute; scalar_t__ noa_active; } ;
struct iwl_wipan_noa_data {int length; int* data; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int noa_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_wipan_noa_data*,int ) ;
 struct iwl_wipan_noa_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,TYPE_1__*,int) ;
 int FUNC_4 (int ,struct iwl_wipan_noa_data*) ;
 struct iwl_wipan_noa_data* FUNC_5 (int ,int) ;
 int VAR_4 ;
 struct iwl_rx_packet* FUNC_6 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_7(struct iwl_priv *VAR_5,
           struct iwl_rx_cmd_buffer *VAR_6)
{
 struct iwl_wipan_noa_data *VAR_7, *VAR_8;
 struct iwl_rx_packet *VAR_9 = FUNC_6(VAR_6);
 struct iwl_wipan_noa_notification *VAR_10 = (void *)VAR_9->data;


 VAR_8 = FUNC_5(VAR_5->noa_data, 1);

 if (VAR_10->noa_active) {
  u32 VAR_11 = FUNC_2(VAR_10->noa_attribute.length);
  u32 VAR_12 = VAR_11;


  VAR_11 += 1 + 1 + 3 + 1;

  VAR_11 += 1 + 2;
  VAR_12 += 1 + 2;

  VAR_7 = FUNC_1(sizeof(*VAR_7) + VAR_11, VAR_0);
  if (VAR_7) {
   VAR_7->length = VAR_11;
   VAR_7->data[0] = VAR_1;
   VAR_7->data[1] = VAR_11 - 2;
   VAR_7->data[2] = (VAR_3 >> 16) & 0xff;
   VAR_7->data[3] = (VAR_3 >> 8) & 0xff;
   VAR_7->data[4] = (VAR_3 >> 0) & 0xff;
   VAR_7->data[5] = VAR_2;
   FUNC_3(&VAR_7->data[6], &VAR_10->noa_attribute,
          VAR_12);
  }
 } else
  VAR_7 = ((void*)0);

 FUNC_4(VAR_5->noa_data, VAR_7);

 if (VAR_8)
  FUNC_0(VAR_8, VAR_4);
}
