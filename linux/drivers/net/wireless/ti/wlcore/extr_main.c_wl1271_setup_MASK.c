
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int fw_status_len; void* raw_fw_status; void* fw_status; void* tx_res_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_2)
{
 VAR_2->raw_fw_status = FUNC_1(VAR_2->fw_status_len, VAR_1);
 if (!VAR_2->raw_fw_status)
  goto err;

 VAR_2->fw_status = FUNC_1(sizeof(*VAR_2->fw_status), VAR_1);
 if (!VAR_2->fw_status)
  goto err;

 VAR_2->tx_res_if = FUNC_1(sizeof(*VAR_2->tx_res_if), VAR_1);
 if (!VAR_2->tx_res_if)
  goto err;

 return 0;
err:
 FUNC_0(VAR_2->fw_status);
 FUNC_0(VAR_2->raw_fw_status);
 return -VAR_0;
}
