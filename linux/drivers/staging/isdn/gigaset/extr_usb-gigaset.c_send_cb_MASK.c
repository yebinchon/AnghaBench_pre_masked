
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_cardstate {int busy; int bulk_out_urb; int bulk_out_epnum; int udev; int bulk_out_size; } ;
struct cmdbuf_t {scalar_t__ len; scalar_t__ offset; scalar_t__ buf; scalar_t__ wake_tasklet; int * prev; struct cmdbuf_t* next; } ;
struct TYPE_2__ {struct usb_cardstate* usb; } ;
struct cardstate {int dev; int lock; scalar_t__ connected; struct cmdbuf_t* cmdbuf; int cmdlock; scalar_t__ curlen; int * lastcmdbuf; int cmdbytes; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_4 ;
 int FUNC_2 (struct cmdbuf_t*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,int,int ,struct cardstate*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct cardstate *VAR_5)
{
 struct cmdbuf_t *VAR_6 = VAR_5->cmdbuf;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = -VAR_2;
 struct usb_cardstate *VAR_10 = VAR_5->hw.usb;

 do {
  if (!VAR_6->len) {
   FUNC_4(&VAR_5->cmdlock, VAR_7);
   VAR_5->cmdbytes -= VAR_5->curlen;
   FUNC_1(VAR_0, "send_cb: sent %u bytes, %u left",
    VAR_5->curlen, VAR_5->cmdbytes);
   VAR_5->cmdbuf = VAR_6->next;
   if (VAR_5->cmdbuf) {
    VAR_5->cmdbuf->prev = ((void*)0);
    VAR_5->curlen = VAR_5->cmdbuf->len;
   } else {
    VAR_5->lastcmdbuf = ((void*)0);
    VAR_5->curlen = 0;
   }
   FUNC_5(&VAR_5->cmdlock, VAR_7);

   if (VAR_6->wake_tasklet)
    FUNC_6(VAR_6->wake_tasklet);
   FUNC_2(VAR_6);

   VAR_6 = VAR_5->cmdbuf;
  }

  if (VAR_6) {
   VAR_8 = FUNC_3(VAR_6->len, VAR_10->bulk_out_size);
   FUNC_1(VAR_0, "send_cb: send %d bytes", VAR_8);

   FUNC_7(VAR_10->bulk_out_urb, VAR_10->udev,
       FUNC_8(VAR_10->udev,
         VAR_10->bulk_out_epnum),
       VAR_6->buf + VAR_6->offset, VAR_8,
       VAR_4, VAR_5);

   VAR_6->offset += VAR_8;
   VAR_6->len -= VAR_8;
   VAR_10->busy = 1;

   FUNC_4(&VAR_5->lock, VAR_7);
   VAR_9 = VAR_5->connected ?
    FUNC_9(VAR_10->bulk_out_urb, VAR_3) :
    -VAR_1;
   FUNC_5(&VAR_5->lock, VAR_7);

   if (VAR_9) {
    VAR_10->busy = 0;
    FUNC_0(VAR_5->dev,
     "could not submit urb (error %d)\n",
     -VAR_9);
    VAR_6->len = 0;

   }
  }
 } while (VAR_6 && VAR_9);

 return VAR_9;
}
