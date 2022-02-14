
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {int status; } ;
struct iwl_host_cmd {TYPE_1__* resp_pkt; int flags; int id; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_2 (struct iwl_host_cmd*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_priv *VAR_7)
{
 int VAR_8;
 struct iwl_host_cmd VAR_9 = {
  .id = VAR_3,
  .flags = VAR_1,
 };
 __le32 *VAR_10;




 if (!FUNC_4(VAR_5, &VAR_7->status) ||
     !FUNC_4(VAR_6, &VAR_7->status) ||
     FUNC_4(VAR_4, &VAR_7->status))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_7, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_10 = (void *)VAR_9.resp_pkt->data;
 if (*VAR_10 != VAR_0) {






  FUNC_0(VAR_7, "SCAN_ABORT ret %d.\n",
          FUNC_3(*VAR_10));
  VAR_8 = -VAR_2;
 }

 FUNC_2(&VAR_9);
 return VAR_8;
}
