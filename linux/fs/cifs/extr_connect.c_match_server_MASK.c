
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct smb_vol {scalar_t__ ops; int echo_interval; scalar_t__ rdma; scalar_t__ ignore_signature; scalar_t__ min_offload; int srcaddr; TYPE_1__* vals; scalar_t__ nosharesock; int dstaddr; } ;
struct TCP_Server_Info {scalar_t__ ops; int echo_interval; scalar_t__ rdma; scalar_t__ ignore_signature; scalar_t__ min_offload; TYPE_1__* vals; } ;
struct TYPE_6__ {TYPE_2__* nsproxy; } ;
struct TYPE_5__ {int net_ns; } ;
struct TYPE_4__ {scalar_t__ protocol_id; int version_string; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct TCP_Server_Info*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (struct TCP_Server_Info*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_2 (struct TCP_Server_Info*,struct sockaddr*) ;
 int FUNC_3 (struct TCP_Server_Info*,struct smb_vol*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct TCP_Server_Info *VAR_6, struct smb_vol *VAR_7)
{
 struct sockaddr *VAR_8 = (struct sockaddr *)&VAR_7->dstaddr;

 if (VAR_7->nosharesock)
  return 0;


 if (FUNC_5(VAR_7->vals->version_string, VAR_3) == 0) {
  if (VAR_6->vals->protocol_id < VAR_2)
   return 0;
 } else if (FUNC_5(VAR_7->vals->version_string,
     VAR_4) == 0) {
  if (VAR_6->vals->protocol_id < VAR_1)
   return 0;
 } else if ((VAR_6->vals != VAR_7->vals) || (VAR_6->ops != VAR_7->ops))
  return 0;

 if (!FUNC_4(FUNC_0(VAR_6), VAR_5->nsproxy->net_ns))
  return 0;

 if (!FUNC_1(VAR_6, VAR_8,
      (struct sockaddr *)&VAR_7->srcaddr))
  return 0;

 if (!FUNC_2(VAR_6, VAR_8))
  return 0;

 if (!FUNC_3(VAR_6, VAR_7))
  return 0;

 if (VAR_6->echo_interval != VAR_7->echo_interval * VAR_0)
  return 0;

 if (VAR_6->rdma != VAR_7->rdma)
  return 0;

 if (VAR_6->ignore_signature != VAR_7->ignore_signature)
  return 0;

 if (VAR_6->min_offload != VAR_7->min_offload)
  return 0;

 return 1;
}
