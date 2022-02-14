
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ufshcd_lrb {int ucd_rsp_ptr; } ;
struct ufs_query_res {int response; } ;
struct TYPE_3__ {struct ufs_query_res response; } ;
struct TYPE_4__ {TYPE_1__ query; } ;
struct ufs_hba {TYPE_2__ dev_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ufs_hba *VAR_1, struct ufshcd_lrb *VAR_2)
{
 struct ufs_query_res *VAR_3 = &VAR_1->dev_cmd.query.response;


 VAR_3->response = FUNC_0(VAR_2->ucd_rsp_ptr) >>
    VAR_0;
 return VAR_3->response;
}
