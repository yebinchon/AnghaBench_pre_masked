
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nvme_result {int u32; } ;
typedef int u8 ;
typedef int u32 ;
struct nvme_ctrl {int admin_q; } ;
struct TYPE_2__ {void* dword11; void* fid; int opcode; } ;
struct nvme_command {TYPE_1__ features; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nvme_command*,union nvme_result*,void*,size_t,int ,int ,int ,int ,int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvme_command*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct nvme_ctrl *VAR_1, u8 VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, void *VAR_5, size_t VAR_6, u32 *VAR_7)
{
 struct nvme_command VAR_8;
 union nvme_result VAR_9;
 int VAR_10;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.features.opcode = VAR_2;
 VAR_8.features.fid = FUNC_1(VAR_3);
 VAR_8.features.dword11 = FUNC_1(VAR_4);

 VAR_10 = FUNC_0(VAR_1->admin_q, &VAR_8, &VAR_9,
   VAR_5, VAR_6, 0, VAR_0, 0, 0, 0);
 if (VAR_10 >= 0 && VAR_7)
  *VAR_7 = FUNC_2(VAR_9.u32);
 return VAR_10;
}
