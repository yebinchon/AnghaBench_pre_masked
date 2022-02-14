
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {int admin_q; } ;
struct TYPE_2__ {int nsid; int cns; int opcode; } ;
struct nvme_command {TYPE_1__ identify; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct nvme_command*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct nvme_ctrl *VAR_3, unsigned VAR_4, __le32 *VAR_5)
{
 struct nvme_command VAR_6 = { };

 VAR_6.identify.opcode = VAR_2;
 VAR_6.identify.cns = VAR_1;
 VAR_6.identify.nsid = FUNC_0(VAR_4);
 return FUNC_1(VAR_3->admin_q, &VAR_6, VAR_5,
        VAR_0);
}
