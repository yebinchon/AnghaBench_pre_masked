
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int request_type; int * cdb; } ;
struct ipr_ioarcb {TYPE_1__ cmd_pkt; int res_handle; } ;
struct ipr_cmnd {struct ipr_ioarcb ioarcb; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ipr_cmnd *VAR_2,
      __be32 VAR_3, u8 VAR_4)
{
 struct ipr_ioarcb *VAR_5 = &VAR_2->ioarcb;

 VAR_5->res_handle = VAR_3;
 VAR_5->cmd_pkt.cdb[0] = VAR_0;
 VAR_5->cmd_pkt.cdb[1] = VAR_4;
 VAR_5->cmd_pkt.request_type = VAR_1;
}
