
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int dummy; } ;
struct mid_q_entry {int dummy; } ;
struct TCP_Server_Info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* send_cancel ) (struct TCP_Server_Info*,struct smb_rqst*,struct mid_q_entry*) ;} ;


 int FUNC_0 (struct TCP_Server_Info*,struct smb_rqst*,struct mid_q_entry*) ;

__attribute__((used)) static inline int
FUNC_1(struct TCP_Server_Info *VAR_0, struct smb_rqst *VAR_1,
     struct mid_q_entry *VAR_2)
{
 return VAR_0->ops->send_cancel ?
    VAR_0->ops->send_cancel(VAR_0, VAR_1, VAR_2) : 0;
}
