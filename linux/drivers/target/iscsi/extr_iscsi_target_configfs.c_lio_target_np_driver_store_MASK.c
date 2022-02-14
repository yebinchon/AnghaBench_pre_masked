
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_tpg_np {struct iscsi_portal_group* tpg; struct iscsi_np* tpg_np; } ;
struct iscsi_portal_group {int dummy; } ;
struct iscsi_np {int np_sockaddr; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
typedef enum iscsit_transport_type { ____Placeholder_iscsit_transport_type } iscsit_transport_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iscsi_tpg_np*) ;
 int FUNC_1 (struct iscsi_tpg_np*) ;
 scalar_t__ FUNC_2 (struct iscsi_portal_group*) ;
 int FUNC_3 (struct iscsi_portal_group*) ;
 struct iscsi_tpg_np* FUNC_4 (struct iscsi_portal_group*,int *,struct iscsi_tpg_np*,int) ;
 int FUNC_5 (struct iscsi_portal_group*,struct iscsi_tpg_np*) ;
 struct iscsi_tpg_np* FUNC_6 (struct iscsi_tpg_np*,int) ;
 int FUNC_7 (char const*,int ,int*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*) ;
 struct iscsi_tpg_np* FUNC_12 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_13(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3, enum iscsit_transport_type VAR_4,
  const char *VAR_5)
{
 struct iscsi_tpg_np *VAR_6 = FUNC_12(VAR_1);
 struct iscsi_np *VAR_7;
 struct iscsi_portal_group *VAR_8;
 struct iscsi_tpg_np *VAR_9 = ((void*)0);
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_7(VAR_2, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;
 if ((VAR_10 != 1) && (VAR_10 != 0)) {
  FUNC_8("Illegal value for tpg_enable: %u\n", VAR_10);
  return -VAR_0;
 }
 VAR_7 = VAR_6->tpg_np;
 if (!VAR_7) {
  FUNC_8("Unable to locate struct iscsi_np from"
    " struct iscsi_tpg_np\n");
  return -VAR_0;
 }

 VAR_8 = VAR_6->tpg;
 if (FUNC_2(VAR_8) < 0)
  return -VAR_0;

 if (VAR_10) {
  if (FUNC_11(VAR_5)) {
   VAR_11 = FUNC_10(VAR_5);
   if (VAR_11 != 0) {
    FUNC_9("Unable to request_module for %s\n",
     VAR_5);
    VAR_11 = 0;
   }
  }

  VAR_9 = FUNC_4(VAR_8,
     &VAR_7->np_sockaddr, VAR_6, VAR_4);
  if (FUNC_0(VAR_9)) {
   VAR_11 = FUNC_1(VAR_9);
   goto out;
  }
 } else {
  VAR_9 = FUNC_6(VAR_6, VAR_4);
  if (VAR_9) {
   VAR_11 = FUNC_5(VAR_8, VAR_9);
   if (VAR_11 < 0)
    goto out;
  }
 }

 FUNC_3(VAR_8);
 return VAR_3;
out:
 FUNC_3(VAR_8);
 return VAR_11;
}
