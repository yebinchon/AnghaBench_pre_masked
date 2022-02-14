
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int dummy; } ;
struct vhost_scsi_cmd {struct se_cmd tvc_se_cmd; } ;


 int FUNC_0 (struct se_cmd*,int ) ;

__attribute__((used)) static void FUNC_1(struct vhost_scsi_cmd *VAR_0)
{
 struct se_cmd *VAR_1 = &VAR_0->tvc_se_cmd;


 FUNC_0(VAR_1, 0);

}
