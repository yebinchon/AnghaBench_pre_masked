
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct isst_cmd {int cmd; int mbox_cmd_type; int hnode; void* data; void* param; void* cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_2 ;
 struct isst_cmd* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_3, u32 VAR_4, int VAR_5, u32 VAR_6,
         u32 VAR_7)
{
 struct isst_cmd *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->cpu = VAR_4;
 VAR_8->cmd = VAR_3;
 VAR_8->mbox_cmd_type = VAR_5;
 VAR_8->param = VAR_6;
 VAR_8->data = VAR_7;

 FUNC_0(VAR_2, &VAR_8->hnode, VAR_8->cmd);

 return 0;
}
