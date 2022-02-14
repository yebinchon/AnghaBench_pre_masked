
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct usb_request {int * buf; void* complete; scalar_t__ length; } ;
struct usb_function {int dummy; } ;
struct f_midi {unsigned int ms_id; unsigned int qlen; TYPE_1__* out_ep; int buflen; int in_req_fifo; TYPE_1__* in_ep; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct f_midi*,char*,int ,int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct f_midi*,struct usb_function*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct usb_request*) ;
 struct f_midi* FUNC_3 (struct usb_function*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct usb_request*) ;
 struct usb_request* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_function *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 struct f_midi *VAR_6 = FUNC_3(VAR_3);
 unsigned VAR_7;
 int VAR_8;


 if (VAR_4 != VAR_6->ms_id)
  return 0;

 VAR_8 = FUNC_1(VAR_6, VAR_3, VAR_6->in_ep);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_3, VAR_6->out_ep);
 if (VAR_8)
  return VAR_8;


 while (FUNC_4(&VAR_6->in_req_fifo)) {
  struct usb_request *VAR_9 =
   FUNC_6(VAR_6->in_ep, VAR_6->buflen);

  if (VAR_9 == ((void*)0))
   return -VAR_0;

  VAR_9->length = 0;
  VAR_9->complete = VAR_2;

  FUNC_5(&VAR_6->in_req_fifo, VAR_9);
 }


 for (VAR_7 = 0; VAR_7 < VAR_6->qlen && VAR_8 == 0; VAR_7++) {
  struct usb_request *VAR_10 =
   FUNC_6(VAR_6->out_ep, VAR_6->buflen);

  if (VAR_10 == ((void*)0))
   return -VAR_0;

  VAR_10->complete = VAR_2;
  VAR_8 = FUNC_7(VAR_6->out_ep, VAR_10, VAR_1);
  if (VAR_8) {
   FUNC_0(VAR_6, "%s: couldn't enqueue request: %d\n",
        VAR_6->out_ep->name, VAR_8);
   if (VAR_10->buf != ((void*)0))
    FUNC_2(VAR_6->out_ep, VAR_10);
   return VAR_8;
  }
 }

 return 0;
}
