
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct beiscsi_hba {int dummy; } ;
struct TYPE_2__ {int * addr; } ;
struct be_cmd_get_def_gateway_resp {TYPE_1__ ip_addr; } ;
typedef int gw_resp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*,int ,struct be_cmd_get_def_gateway_resp*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_4 (struct be_cmd_get_def_gateway_resp*,int ,int) ;

int FUNC_5(struct beiscsi_hba *VAR_4, u32 VAR_5, u8 *VAR_6)
{
 struct be_cmd_get_def_gateway_resp VAR_7;
 int VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_4, VAR_3, VAR_0,
       "BG_%d : Failed to Get Gateway Addr\n");
  return VAR_8;
 }

 if (!FUNC_2(VAR_7.ip_addr.addr, VAR_5)) {
  VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_5,
        VAR_7.ip_addr.addr);
  if (VAR_8) {
   FUNC_3(VAR_4, VAR_3, VAR_0,
        "BG_%d : Failed to clear Gateway Addr Set\n");
   return VAR_8;
  }
 }

 VAR_8 = FUNC_1(VAR_4, VAR_1, VAR_5, VAR_6);
 if (VAR_8)
  FUNC_3(VAR_4, VAR_3, VAR_0,
       "BG_%d : Failed to Set Gateway Addr\n");

 return VAR_8;
}
