
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param_list {int extra_response_list; } ;
struct iscsi_extra_response {int er_list; int value; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct iscsi_extra_response* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(
 char *VAR_4,
 char *VAR_5,
 struct iscsi_param_list *VAR_6)
{
 struct iscsi_extra_response *VAR_7;

 if (FUNC_5(VAR_5) > VAR_3) {
  FUNC_3("Value for notunderstood key \"%s\" exceeds %d,"
   " protocol error.\n", VAR_4, VAR_3);
  return -1;
 }

 VAR_7 = FUNC_1(sizeof(struct iscsi_extra_response), VAR_1);
 if (!VAR_7) {
  FUNC_3("Unable to allocate memory for"
   " struct iscsi_extra_response.\n");
  return -VAR_0;
 }
 FUNC_0(&VAR_7->er_list);

 FUNC_4(VAR_7->key, VAR_4, sizeof(VAR_7->key));
 FUNC_4(VAR_7->value, VAR_2,
  sizeof(VAR_7->value));

 FUNC_2(&VAR_7->er_list,
   &VAR_6->extra_response_list);
 return 0;
}
