
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ipr_res_addr {scalar_t__ bus; int target; } ;
struct TYPE_7__ {struct ipr_res_addr fd_res_addr; } ;
struct TYPE_6__ {int* fd_res_path; } ;
struct TYPE_8__ {TYPE_2__ error; TYPE_1__ error64; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct ipr_hostrcb {TYPE_4__ hcam; TYPE_5__* ioa_cfg; } ;
struct TYPE_10__ {scalar_t__ sis64; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct ipr_hostrcb *VAR_2)
{
 struct ipr_res_addr *VAR_3;
 u8 *VAR_4;

 if (VAR_2->ioa_cfg->sis64) {
  VAR_4 = &VAR_2->hcam.u.error64.fd_res_path[0];
  if ((VAR_4[0] == 0x00 || VAR_4[0] == 0x80 ||
      VAR_4[0] == 0x81) && VAR_4[2] != 0xFF)
   return 1;
 } else {
  VAR_3 = &VAR_2->hcam.u.error.fd_res_addr;

  if ((VAR_3->bus < VAR_0) &&
      (VAR_3->target < (VAR_1 - 1)))
   return 1;
 }
 return 0;
}
