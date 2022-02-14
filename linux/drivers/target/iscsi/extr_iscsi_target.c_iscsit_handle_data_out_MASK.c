
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_data {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int dummy; } ;


 int FUNC_0 (struct iscsi_conn*,unsigned char*,struct iscsi_cmd**) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_data*,int) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_data*) ;

__attribute__((used)) static int FUNC_3(struct iscsi_conn *VAR_0, unsigned char *VAR_1)
{
 struct iscsi_cmd *VAR_2 = ((void*)0);
 struct iscsi_data *VAR_3 = (struct iscsi_data *)VAR_1;
 int VAR_4;
 bool VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_2);
 if (VAR_4 < 0)
  return 0;
 else if (!VAR_2)
  return 0;

 VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 else if (VAR_4 > 0)
  VAR_5 = 1;

 return FUNC_1(VAR_2, VAR_3, VAR_5);
}
