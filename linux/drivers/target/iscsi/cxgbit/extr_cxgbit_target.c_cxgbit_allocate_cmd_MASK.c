
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int dummy; } ;
struct TYPE_4__ {int cdev; } ;
struct cxgbit_sock {TYPE_1__ com; struct iscsi_conn* conn; } ;
struct TYPE_5__ {int tag; } ;
struct cxgbit_cmd {int setup_ddp; TYPE_2__ ttinfo; } ;
struct TYPE_6__ {int no_ddp_mask; } ;
struct cxgbi_ppm {TYPE_3__ tformat; } ;


 int VAR_0 ;
 struct cxgbi_ppm* FUNC_0 (int ) ;
 struct iscsi_cmd* FUNC_1 (struct iscsi_conn*,int ) ;
 struct cxgbit_cmd* FUNC_2 (struct iscsi_cmd*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct iscsi_cmd *FUNC_4(struct cxgbit_sock *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_1->conn;
 struct cxgbi_ppm *VAR_3 = FUNC_0(VAR_1->com.cdev);
 struct cxgbit_cmd *VAR_4;
 struct iscsi_cmd *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_5) {
  FUNC_3("Unable to allocate iscsi_cmd + cxgbit_cmd\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_5);
 VAR_4->ttinfo.tag = VAR_3->tformat.no_ddp_mask;
 VAR_4->setup_ddp = 1;

 return VAR_5;
}
