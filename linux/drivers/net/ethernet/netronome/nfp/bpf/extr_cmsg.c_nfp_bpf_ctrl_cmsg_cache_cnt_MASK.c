
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_app_bpf {unsigned int cmsg_key_sz; unsigned int cmsg_val_sz; TYPE_3__* app; } ;
struct cmsg_req_map_op {int dummy; } ;
struct cmsg_reply_map_op {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ctrl; } ;
struct TYPE_4__ {unsigned int mtu; } ;
struct TYPE_5__ {TYPE_1__ dp; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int ) ;

unsigned int FUNC_1(struct nfp_app_bpf *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_2 = VAR_1->app->ctrl->dp.mtu;
 VAR_5 = VAR_1->cmsg_key_sz + VAR_1->cmsg_val_sz;
 VAR_3 = (VAR_2 - sizeof(struct cmsg_req_map_op)) / VAR_5;
 VAR_4 = (VAR_2 - sizeof(struct cmsg_reply_map_op)) / VAR_5;

 return FUNC_0(VAR_3, VAR_4, VAR_0);
}
