
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct fsg_dev {int bulk_in_enabled; int bulk_out_enabled; TYPE_1__* bulk_out; TYPE_1__* bulk_in; int atomic_bitflags; int function; } ;
struct fsg_common {int running; int fsg_num_buffers; TYPE_8__** luns; struct fsg_buffhd* buffhds; int bulk_out_maxpacket; int gadget; struct fsg_dev* fsg; int fsg_wait; } ;
struct fsg_buffhd {TYPE_2__* outreq; TYPE_2__* inreq; int buf; } ;
struct TYPE_11__ {int unit_attention_data; } ;
struct TYPE_10__ {int complete; struct fsg_buffhd* context; int buf; } ;
struct TYPE_9__ {int desc; struct fsg_common* driver_data; } ;


 int FUNC_0 (TYPE_8__**) ;
 int FUNC_1 (struct fsg_common*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct fsg_common*,TYPE_1__*,TYPE_2__**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct fsg_common *VAR_4, struct fsg_dev *VAR_5)
{
 struct fsg_dev *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (VAR_4->running)
  FUNC_1(VAR_4, "reset interface\n");

reset:

 if (VAR_4->fsg) {
  VAR_6 = VAR_4->fsg;

  for (VAR_7 = 0; VAR_7 < VAR_4->fsg_num_buffers; ++VAR_7) {
   struct fsg_buffhd *VAR_9 = &VAR_4->buffhds[VAR_7];

   if (VAR_9->inreq) {
    FUNC_8(VAR_6->bulk_in, VAR_9->inreq);
    VAR_9->inreq = ((void*)0);
   }
   if (VAR_9->outreq) {
    FUNC_8(VAR_6->bulk_out, VAR_9->outreq);
    VAR_9->outreq = ((void*)0);
   }
  }


  if (VAR_6->bulk_in_enabled) {
   FUNC_6(VAR_6->bulk_in);
   VAR_6->bulk_in_enabled = 0;
  }
  if (VAR_6->bulk_out_enabled) {
   FUNC_6(VAR_6->bulk_out);
   VAR_6->bulk_out_enabled = 0;
  }

  VAR_4->fsg = ((void*)0);
  FUNC_9(&VAR_4->fsg_wait);
 }

 VAR_4->running = 0;
 if (!VAR_5 || VAR_8)
  return VAR_8;

 VAR_4->fsg = VAR_5;
 VAR_6 = VAR_4->fsg;


 VAR_8 = FUNC_4(VAR_4->gadget, &(VAR_6->function), VAR_6->bulk_in);
 if (VAR_8)
  goto reset;
 VAR_8 = FUNC_7(VAR_6->bulk_in);
 if (VAR_8)
  goto reset;
 VAR_6->bulk_in->driver_data = VAR_4;
 VAR_6->bulk_in_enabled = 1;

 VAR_8 = FUNC_4(VAR_4->gadget, &(VAR_6->function),
    VAR_6->bulk_out);
 if (VAR_8)
  goto reset;
 VAR_8 = FUNC_7(VAR_6->bulk_out);
 if (VAR_8)
  goto reset;
 VAR_6->bulk_out->driver_data = VAR_4;
 VAR_6->bulk_out_enabled = 1;
 VAR_4->bulk_out_maxpacket = FUNC_5(VAR_6->bulk_out->desc);
 FUNC_3(VAR_0, &VAR_6->atomic_bitflags);


 for (VAR_7 = 0; VAR_7 < VAR_4->fsg_num_buffers; ++VAR_7) {
  struct fsg_buffhd *VAR_10 = &VAR_4->buffhds[VAR_7];

  VAR_8 = FUNC_2(VAR_4, VAR_6->bulk_in, &VAR_10->inreq);
  if (VAR_8)
   goto reset;
  VAR_8 = FUNC_2(VAR_4, VAR_6->bulk_out, &VAR_10->outreq);
  if (VAR_8)
   goto reset;
  VAR_10->inreq->buf = VAR_10->outreq->buf = VAR_10->buf;
  VAR_10->inreq->context = VAR_10->outreq->context = VAR_10;
  VAR_10->inreq->complete = VAR_2;
  VAR_10->outreq->complete = VAR_3;
 }

 VAR_4->running = 1;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->luns); ++VAR_7)
  if (VAR_4->luns[VAR_7])
   VAR_4->luns[VAR_7]->unit_attention_data =
    VAR_1;
 return VAR_8;
}
