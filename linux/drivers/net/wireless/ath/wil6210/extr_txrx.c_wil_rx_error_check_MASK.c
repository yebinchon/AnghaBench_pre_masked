
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil_net_stats {int rx_mic_error; } ;
struct wil6210_priv {int dummy; } ;
struct TYPE_2__ {int status; int error; } ;
struct vring_rx_desc {TYPE_1__ dma; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wil6210_priv*,char*) ;
 struct vring_rx_desc* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct wil6210_priv *VAR_3, struct sk_buff *VAR_4,
         struct wil_net_stats *VAR_5)
{
 struct vring_rx_desc *VAR_6 = FUNC_1(VAR_4);

 if ((VAR_6->dma.status & VAR_2) &&
     (VAR_6->dma.error & VAR_1)) {
  VAR_5->rx_mic_error++;
  FUNC_0(VAR_3, "MIC error, dropping packet\n");
  return -VAR_0;
 }

 return 0;
}
