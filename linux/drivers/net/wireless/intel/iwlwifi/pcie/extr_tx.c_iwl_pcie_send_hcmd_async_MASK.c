
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dummy; } ;
struct iwl_host_cmd {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,int ) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_host_cmd*) ;

__attribute__((used)) static int FUNC_4(struct iwl_trans *VAR_2,
        struct iwl_host_cmd *VAR_3)
{
 int VAR_4;


 if (FUNC_1(VAR_3->flags & VAR_0))
  return -VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2,
   "Error sending %s: enqueue_hcmd failed: %d\n",
   FUNC_2(VAR_2, VAR_3->id), VAR_4);
  return VAR_4;
 }
 return 0;
}
