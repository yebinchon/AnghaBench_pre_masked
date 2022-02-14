
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {int status; struct fsf_qtcb* qtcb; } ;
struct TYPE_4__ {scalar_t__ fsf_status; scalar_t__ fsf_command; scalar_t__ log_length; } ;
struct TYPE_3__ {scalar_t__ prot_status; } ;
struct fsf_qtcb {TYPE_2__ header; TYPE_1__ prefix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_2 (struct zfcp_fsf_req*) ;

__attribute__((used)) static inline
void FUNC_3(struct zfcp_fsf_req *VAR_7)
{
 struct fsf_qtcb *VAR_8 = VAR_7->qtcb;

 if (FUNC_0(VAR_7->status & (VAR_5 |
        VAR_6))) {
  FUNC_1("fs_rerr", 3, VAR_7);

 } else if ((VAR_8->prefix.prot_status != VAR_2) &&
     (VAR_8->prefix.prot_status != VAR_1)) {
  FUNC_1("fs_perr", 1, VAR_7);

 } else if (VAR_8->header.fsf_status != VAR_0) {
  FUNC_1("fs_ferr",
          FUNC_2(VAR_7)
          ? 5 : 1, VAR_7);

 } else if ((VAR_8->header.fsf_command == VAR_4) ||
     (VAR_8->header.fsf_command == VAR_3)) {
  FUNC_1("fs_open", 4, VAR_7);

 } else if (VAR_8->header.log_length) {
  FUNC_1("fs_qtcb", 5, VAR_7);

 } else {
  FUNC_1("fs_norm", 6, VAR_7);
 }
}
