
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int name; int node_num; } ;
struct dlm_cancel_join {int name_len; int domain; int node_idx; } ;
typedef int cancel_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct dlm_cancel_join*,int ,int) ;
 int FUNC_2 (int ,char*,int,int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,struct dlm_cancel_join*,int,unsigned int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dlm_ctxt *VAR_3,
        unsigned int VAR_4)
{
 int VAR_5;
 struct dlm_cancel_join VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.node_idx = VAR_3->node_num;
 VAR_6.name_len = FUNC_4(VAR_3->name);
 FUNC_0(VAR_6.domain, VAR_3->name, VAR_6.name_len);

 VAR_5 = FUNC_3(VAR_0, VAR_1,
        &VAR_6, sizeof(VAR_6), VAR_4,
        ((void*)0));
 if (VAR_5 < 0) {
  FUNC_2(VAR_2, "Error %d when sending message %u (key 0x%x) to "
       "node %u\n", VAR_5, VAR_0, VAR_1,
       VAR_4);
  goto bail;
 }

bail:
 return VAR_5;
}
