
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_ucode_capabilities {int _api; } ;
struct iwl_ucode_api {int api_flags; int api_index; } ;
struct iwl_drv {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct iwl_drv*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct iwl_drv *VAR_1, const u8 *VAR_2,
        struct iwl_ucode_capabilities *VAR_3)
{
 const struct iwl_ucode_api *VAR_4 = (void *)VAR_2;
 u32 VAR_5 = FUNC_4(VAR_4->api_index);
 u32 VAR_6 = FUNC_4(VAR_4->api_flags);
 int VAR_7;

 if (VAR_5 >= FUNC_1(VAR_0, 32)) {
  FUNC_2(VAR_1,
    "api flags index %d larger than supported by driver\n",
    VAR_5);
  return;
 }

 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  if (VAR_6 & FUNC_0(VAR_7))
   FUNC_3(VAR_7 + 32 * VAR_5, VAR_3->_api);
 }
}
