
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tpg_np {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
typedef enum iscsit_transport_type { ____Placeholder_iscsit_transport_type } iscsit_transport_type ;


 struct iscsi_tpg_np* FUNC_0 (struct iscsi_tpg_np*,int) ;
 int FUNC_1 (char*,char*) ;
 struct iscsi_tpg_np* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0, char *VAR_1,
      enum iscsit_transport_type VAR_2)
{
 struct iscsi_tpg_np *VAR_3 = FUNC_2(VAR_0);
 struct iscsi_tpg_np *VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  VAR_5 = FUNC_1(VAR_1, "1\n");
 else
  VAR_5 = FUNC_1(VAR_1, "0\n");

 return VAR_5;
}
