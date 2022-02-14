
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvme_ctrl {int admin_q; } ;
struct TYPE_2__ {void* lpou; void* lpol; void* numdu; void* numdl; void* lsp; void* lid; void* nsid; int opcode; } ;
struct nvme_command {TYPE_1__ get_log_page; } ;


 void* FUNC_0 (unsigned long) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct nvme_command*,void*,size_t) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct nvme_ctrl *VAR_1, u32 VAR_2, u8 VAR_3, u8 VAR_4,
  void *VAR_5, size_t VAR_6, u64 VAR_7)
{
 struct nvme_command VAR_8 = { };
 unsigned long VAR_9 = VAR_6 / 4 - 1;

 VAR_8.get_log_page.opcode = VAR_0;
 VAR_8.get_log_page.nsid = FUNC_1(VAR_2);
 VAR_8.get_log_page.lid = VAR_3;
 VAR_8.get_log_page.lsp = VAR_4;
 VAR_8.get_log_page.numdl = FUNC_0(VAR_9 & ((1 << 16) - 1));
 VAR_8.get_log_page.numdu = FUNC_0(VAR_9 >> 16);
 VAR_8.get_log_page.lpol = FUNC_1(FUNC_2(VAR_7));
 VAR_8.get_log_page.lpou = FUNC_1(FUNC_4(VAR_7));

 return FUNC_3(VAR_1->admin_q, &VAR_8, VAR_5, VAR_6);
}
