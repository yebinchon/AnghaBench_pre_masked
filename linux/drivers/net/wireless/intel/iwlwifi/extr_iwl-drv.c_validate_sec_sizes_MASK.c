
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_firmware_pieces {int dummy; } ;
struct iwl_drv {int dummy; } ;
struct iwl_cfg {scalar_t__ max_inst_size; scalar_t__ max_data_size; } ;


 int FUNC_0 (struct iwl_drv*,char*,scalar_t__) ;
 int FUNC_1 (struct iwl_drv*,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct iwl_firmware_pieces*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_drv *VAR_4,
         struct iwl_firmware_pieces *VAR_5,
         const struct iwl_cfg *VAR_6)
{
 FUNC_0(VAR_4, "f/w package hdr runtime inst size = %zd\n",
  FUNC_2(VAR_5, VAR_1,
        VAR_3));
 FUNC_0(VAR_4, "f/w package hdr runtime data size = %zd\n",
  FUNC_2(VAR_5, VAR_1,
        VAR_2));
 FUNC_0(VAR_4, "f/w package hdr init inst size = %zd\n",
  FUNC_2(VAR_5, VAR_0, VAR_3));
 FUNC_0(VAR_4, "f/w package hdr init data size = %zd\n",
  FUNC_2(VAR_5, VAR_0, VAR_2));


 if (FUNC_2(VAR_5, VAR_1, VAR_3) >
     VAR_6->max_inst_size) {
  FUNC_1(VAR_4, "uCode instr len %zd too large to fit in\n",
   FUNC_2(VAR_5, VAR_1,
         VAR_3));
  return -1;
 }

 if (FUNC_2(VAR_5, VAR_1, VAR_2) >
     VAR_6->max_data_size) {
  FUNC_1(VAR_4, "uCode data len %zd too large to fit in\n",
   FUNC_2(VAR_5, VAR_1,
         VAR_2));
  return -1;
 }

 if (FUNC_2(VAR_5, VAR_0, VAR_3) >
      VAR_6->max_inst_size) {
  FUNC_1(VAR_4, "uCode init instr len %zd too large to fit in\n",
   FUNC_2(VAR_5, VAR_0,
         VAR_3));
  return -1;
 }

 if (FUNC_2(VAR_5, VAR_0, VAR_2) >
     VAR_6->max_data_size) {
  FUNC_1(VAR_4, "uCode init data len %zd too large to fit in\n",
   FUNC_2(VAR_5, VAR_1,
         VAR_2));
  return -1;
 }
 return 0;
}
