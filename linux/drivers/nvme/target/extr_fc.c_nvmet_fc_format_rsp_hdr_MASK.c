
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct fcnvme_lsdesc_rqst {int dummy; } ;
struct TYPE_6__ {void* ls_cmd; } ;
struct TYPE_5__ {TYPE_3__ w0; int desc_len; int desc_tag; } ;
struct TYPE_4__ {void* ls_cmd; } ;
struct fcnvme_ls_acc_hdr {TYPE_2__ rqst; int desc_list_len; TYPE_1__ w0; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, u8 VAR_2, __be32 VAR_3, u8 VAR_4)
{
 struct fcnvme_ls_acc_hdr *VAR_5 = VAR_1;

 VAR_5->w0.ls_cmd = VAR_2;
 VAR_5->desc_list_len = VAR_3;
 VAR_5->rqst.desc_tag = FUNC_0(VAR_0);
 VAR_5->rqst.desc_len =
   FUNC_1(sizeof(struct fcnvme_lsdesc_rqst));
 VAR_5->rqst.w0.ls_cmd = VAR_4;
}
