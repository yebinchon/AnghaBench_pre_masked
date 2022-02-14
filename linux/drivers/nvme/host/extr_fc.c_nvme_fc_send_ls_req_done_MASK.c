
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmefc_ls_req_op {int ls_error; int ls_done; } ;
struct nvmefc_ls_req {int dummy; } ;


 int FUNC_0 (int *) ;
 struct nvmefc_ls_req_op* FUNC_1 (struct nvmefc_ls_req*) ;

__attribute__((used)) static void
FUNC_2(struct nvmefc_ls_req *VAR_0, int VAR_1)
{
 struct nvmefc_ls_req_op *VAR_2 = FUNC_1(VAR_0);

 VAR_2->ls_error = VAR_1;
 FUNC_0(&VAR_2->ls_done);
}
