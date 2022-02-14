
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lancer_cmd_req_delete_object {int object_name; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 struct lancer_cmd_req_delete_object* FUNC_2 (struct be_mcc_wrb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_7(struct be_adapter *VAR_3,
        const char *VAR_4)
{
 struct lancer_cmd_req_delete_object *VAR_5;
 struct be_mcc_wrb *VAR_6;
 int VAR_7;

 FUNC_3(&VAR_3->mcc_lock);

 VAR_6 = FUNC_6(VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto err;
 }

 VAR_5 = FUNC_2(VAR_6);

 FUNC_1(&VAR_5->hdr, VAR_0,
          VAR_2,
          sizeof(*VAR_5), VAR_6, ((void*)0));

 FUNC_5(VAR_5->object_name, VAR_4, sizeof(VAR_5->object_name));

 VAR_7 = FUNC_0(VAR_3);
err:
 FUNC_4(&VAR_3->mcc_lock);
 return VAR_7;
}
