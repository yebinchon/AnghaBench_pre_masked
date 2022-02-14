
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iscsi_path {int dummy; } ;
struct bnx2i_hba {TYPE_1__* cnic; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int (* iscsi_nl_msg_recv ) (TYPE_1__*,int ,char*,int) ;} ;


 int VAR_0 ;
 struct bnx2i_hba* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_1, struct iscsi_path *VAR_2)
{
 struct bnx2i_hba *VAR_3 = FUNC_0(VAR_1);
 char *VAR_4 = (char *) VAR_2;
 u16 VAR_5 = sizeof(*VAR_2);


 VAR_3->cnic->iscsi_nl_msg_recv(VAR_3->cnic, VAR_0, VAR_4,
         VAR_5);

 return 0;
}
