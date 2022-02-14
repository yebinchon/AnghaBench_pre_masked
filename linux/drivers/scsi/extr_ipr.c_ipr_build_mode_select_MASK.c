
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {void** cdb; int flags_hi; int request_type; } ;
struct ipr_ioarcb {TYPE_1__ cmd_pkt; int res_handle; } ;
struct ipr_cmnd {struct ipr_ioarcb ioarcb; } ;
typedef int dma_addr_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct ipr_cmnd*,int ,void*,int ) ;

__attribute__((used)) static void FUNC_1(struct ipr_cmnd *VAR_4,
      __be32 VAR_5, u8 VAR_6,
      dma_addr_t VAR_7, u8 VAR_8)
{
 struct ipr_ioarcb *VAR_9 = &VAR_4->ioarcb;

 VAR_9->res_handle = VAR_5;
 VAR_9->cmd_pkt.request_type = VAR_2;
 VAR_9->cmd_pkt.flags_hi |= VAR_0;
 VAR_9->cmd_pkt.cdb[0] = VAR_3;
 VAR_9->cmd_pkt.cdb[1] = VAR_6;
 VAR_9->cmd_pkt.cdb[4] = VAR_8;

 FUNC_0(VAR_4, VAR_7, VAR_8, VAR_1);
}
