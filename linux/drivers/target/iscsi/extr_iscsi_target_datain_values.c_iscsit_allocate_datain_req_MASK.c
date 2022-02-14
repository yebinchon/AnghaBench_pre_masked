
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_datain_req {int cmd_datain_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct iscsi_datain_req* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

struct iscsi_datain_req *FUNC_3(void)
{
 struct iscsi_datain_req *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2) {
  FUNC_2("Unable to allocate memory for"
    " struct iscsi_datain_req\n");
  return ((void*)0);
 }
 FUNC_0(&VAR_2->cmd_datain_node);

 return VAR_2;
}
