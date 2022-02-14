
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct zfcp_fsf_req {struct fsf_qtcb* qtcb; } ;
struct fcp_resp {scalar_t__ fr_flags; scalar_t__ fr_status; } ;
struct TYPE_12__ {struct fcp_resp resp; } ;
struct TYPE_7__ {TYPE_6__ iu; } ;
struct TYPE_8__ {TYPE_1__ fcp_rsp; } ;
struct TYPE_9__ {TYPE_2__ io; } ;
struct TYPE_11__ {scalar_t__ qtcb_type; } ;
struct TYPE_10__ {scalar_t__ fsf_status; } ;
struct fsf_qtcb {TYPE_3__ bottom; TYPE_5__ prefix; TYPE_4__ header; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline
bool FUNC_0(struct zfcp_fsf_req *VAR_4)
{
 struct fsf_qtcb *VAR_5 = VAR_4->qtcb;
 u32 VAR_6 = VAR_5->header.fsf_status;
 struct fcp_resp *VAR_7;
 u8 VAR_8, VAR_9;

 if (VAR_5->prefix.qtcb_type != VAR_2)
  return 0;
 VAR_7 = &VAR_5->bottom.io.fcp_rsp.iu.resp;
 VAR_8 = VAR_7->fr_flags;
 VAR_9 = VAR_7->fr_status;
 return (VAR_6 == VAR_1) &&
  (VAR_8 == VAR_0) &&
  (VAR_9 == VAR_3);
}
