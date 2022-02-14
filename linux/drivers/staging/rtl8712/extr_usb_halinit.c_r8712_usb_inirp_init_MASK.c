
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct recv_priv {int free_recv_buf_queue_cnt; int ff_hwaddr; scalar_t__ precv_buf; } ;
struct recv_buf {int dummy; } ;
struct intf_hdl {int dummy; } ;
struct _adapter {struct recv_priv recvpriv; TYPE_1__* pio_queue; } ;
struct TYPE_2__ {struct intf_hdl intf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct intf_hdl*,int ,int ,unsigned char*) ;

unsigned int FUNC_1(struct _adapter *VAR_4)
{
 u8 VAR_5;
 struct recv_buf *VAR_6;
 struct intf_hdl *VAR_7 = &VAR_4->pio_queue->intf;
 struct recv_priv *VAR_8 = &(VAR_4->recvpriv);

 VAR_8->ff_hwaddr = VAR_1;

 VAR_6 = (struct recv_buf *)VAR_8->precv_buf;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_0(VAR_7, VAR_8->ff_hwaddr, 0,
     (unsigned char *)VAR_6) == 0)
   return VAR_2;
  VAR_6++;
  VAR_8->free_recv_buf_queue_cnt--;
 }
 return VAR_3;
}
