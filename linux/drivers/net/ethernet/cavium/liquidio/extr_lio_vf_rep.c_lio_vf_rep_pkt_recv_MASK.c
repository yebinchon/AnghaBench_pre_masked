
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int ossp; } ;
union octeon_rh {TYPE_2__ r_dh; TYPE_1__ r; } ;
struct sk_buff {int ip_summed; struct net_device* dev; int protocol; } ;
struct octeon_recv_pkt {int buffer_count; struct sk_buff** buffer_ptr; int * buffer_size; union octeon_rh rh; int octeon_id; } ;
struct octeon_recv_info {struct octeon_recv_pkt* recv_pkt; } ;
struct octeon_device {int dummy; } ;
struct net_device {int dummy; } ;
struct lio_vf_rep_desc {int ifstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct octeon_device* FUNC_2 (int ) ;
 int FUNC_3 (struct octeon_device*,struct sk_buff*,int ) ;
 struct net_device* FUNC_4 (struct octeon_device*,int) ;
 struct lio_vf_rep_desc* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct octeon_recv_info*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_10(struct octeon_recv_info *VAR_3, void *VAR_4)
{
 struct octeon_recv_pkt *VAR_5 = VAR_3->recv_pkt;
 struct lio_vf_rep_desc *VAR_6;
 struct net_device *VAR_7;
 struct octeon_device *VAR_8;
 union octeon_rh *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = FUNC_2(VAR_5->octeon_id);
 if (!VAR_8)
  goto free_buffers;

 VAR_10 = VAR_5->buffer_ptr[0];
 VAR_9 = &VAR_5->rh;
 VAR_12 = VAR_9->r.ossp;

 VAR_7 = FUNC_4(VAR_8, VAR_12);
 if (!VAR_7)
  goto free_buffers;

 VAR_6 = FUNC_5(VAR_7);
 if (!(FUNC_0(&VAR_6->ifstate) & VAR_2) ||
     VAR_5->buffer_count > 1)
  goto free_buffers;

 VAR_10->dev = VAR_7;




 FUNC_3(VAR_8, VAR_10, VAR_5->buffer_size[0]);

 FUNC_9(VAR_10, VAR_9->r_dh.len * VAR_0);
 VAR_10->protocol = FUNC_1(VAR_10, VAR_10->dev);
 VAR_10->ip_summed = VAR_1;

 FUNC_6(VAR_10);

 FUNC_7(VAR_3);

 return 0;

free_buffers:
 for (VAR_11 = 0; VAR_11 < VAR_5->buffer_count; VAR_11++)
  FUNC_8(VAR_5->buffer_ptr[VAR_11]);

 FUNC_7(VAR_3);

 return 0;
}
