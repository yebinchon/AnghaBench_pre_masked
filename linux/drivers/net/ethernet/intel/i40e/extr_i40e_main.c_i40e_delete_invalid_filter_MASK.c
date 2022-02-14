
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int fd_ip4_filter_cnt; int fd_sctp4_filter_cnt; int fd_udp4_filter_cnt; int fd_tcp4_filter_cnt; scalar_t__ fd_inv; int fdir_pf_active_filters; } ;
struct i40e_fdir_filter {int flow_type; int fdir_node; int ip4_proto; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40e_fdir_filter*) ;

__attribute__((used)) static void FUNC_2(struct i40e_pf *VAR_0,
           struct i40e_fdir_filter *VAR_1)
{

 VAR_0->fdir_pf_active_filters--;
 VAR_0->fd_inv = 0;

 switch (VAR_1->flow_type) {
 case 129:
  VAR_0->fd_tcp4_filter_cnt--;
  break;
 case 128:
  VAR_0->fd_udp4_filter_cnt--;
  break;
 case 130:
  VAR_0->fd_sctp4_filter_cnt--;
  break;
 case 131:
  switch (VAR_1->ip4_proto) {
  case 133:
   VAR_0->fd_tcp4_filter_cnt--;
   break;
  case 132:
   VAR_0->fd_udp4_filter_cnt--;
   break;
  case 134:
   VAR_0->fd_sctp4_filter_cnt--;
   break;
  case 135:
   VAR_0->fd_ip4_filter_cnt--;
   break;
  }
  break;
 }


 FUNC_0(&VAR_1->fdir_node);
 FUNC_1(VAR_1);
}
