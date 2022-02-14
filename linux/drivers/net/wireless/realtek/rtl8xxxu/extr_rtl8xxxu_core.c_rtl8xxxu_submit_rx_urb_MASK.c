
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct rtl8xxxu_rx_urb {int urb; } ;
struct rtl8xxxu_priv {int rx_anchor; int pipe_in; int udev; scalar_t__ rx_buf_aggregation; struct rtl8xxxu_fileops* fops; } ;
struct rtl8xxxu_fileops {int rx_desc_size; int rx_agg_buf_size; } ;
struct rtl8723au_phy_stats {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int,int ,struct sk_buff*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct rtl8xxxu_priv *VAR_5,
      struct rtl8xxxu_rx_urb *VAR_6)
{
 struct rtl8xxxu_fileops *VAR_7 = VAR_5->fops;
 struct sk_buff *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = VAR_7->rx_desc_size;

 if (VAR_5->rx_buf_aggregation && VAR_7->rx_agg_buf_size) {
  VAR_9 = VAR_7->rx_agg_buf_size;
  VAR_9 += (VAR_11 + sizeof(struct rtl8723au_phy_stats));
 } else {
  VAR_9 = VAR_3;
 }

 VAR_8 = FUNC_0(((void*)0), VAR_9, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(VAR_8->data, 0, VAR_11);
 FUNC_3(&VAR_6->urb, VAR_5->udev, VAR_5->pipe_in, VAR_8->data,
     VAR_9, VAR_4, VAR_8);
 FUNC_2(&VAR_6->urb, &VAR_5->rx_anchor);
 VAR_10 = FUNC_4(&VAR_6->urb, VAR_1);
 if (VAR_10)
  FUNC_5(&VAR_6->urb);
 return VAR_10;
}
