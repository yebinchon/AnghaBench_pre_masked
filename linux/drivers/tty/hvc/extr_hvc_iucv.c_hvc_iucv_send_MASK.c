
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int length; } ;
struct iucv_tty_buffer {int list; TYPE_2__ msg; TYPE_1__* mbuf; } ;
struct hvc_iucv_private {scalar_t__ iucv_state; int sndbuf_len; int path; int tty_outqueue; int sndbuf; } ;
struct TYPE_3__ {scalar_t__ datalen; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int ,void*,int ) ;
 struct iucv_tty_buffer* FUNC_2 (int,int ) ;
 int FUNC_3 (struct iucv_tty_buffer*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct hvc_iucv_private *VAR_6)
{
 struct iucv_tty_buffer *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6->iucv_state == VAR_5)
  return -VAR_2;

 if (VAR_6->iucv_state == VAR_4)
  return -VAR_0;

 if (!VAR_6->sndbuf_len)
  return 0;



 VAR_7 = FUNC_2(VAR_6->sndbuf_len, VAR_3);
 if (!VAR_7)
  return -VAR_1;

 FUNC_6(VAR_7->mbuf->data, VAR_6->sndbuf, VAR_6->sndbuf_len);
 VAR_7->mbuf->datalen = (u16) VAR_6->sndbuf_len;
 VAR_7->msg.length = FUNC_0(VAR_7->mbuf->datalen);

 FUNC_4(&VAR_7->list, &VAR_6->tty_outqueue);

 VAR_8 = FUNC_1(VAR_6->path, &VAR_7->msg, 0, 0,
     (void *) VAR_7->mbuf, VAR_7->msg.length);
 if (VAR_8) {


  FUNC_5(&VAR_7->list);
  FUNC_3(VAR_7);
 }
 VAR_9 = VAR_6->sndbuf_len;
 VAR_6->sndbuf_len = 0;

 return VAR_9;
}
