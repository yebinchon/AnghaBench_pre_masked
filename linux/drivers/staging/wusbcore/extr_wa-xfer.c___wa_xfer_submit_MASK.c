
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wahc {int xfer_list_lock; int xfer_list; TYPE_1__* usb_iface; } ;
struct wa_xfer {unsigned int segs; int segs_submitted; struct wa_seg** seg; int list_node; TYPE_2__* ep; struct wahc* wa; } ;
struct wa_seg {int list_node; int status; } ;
struct TYPE_6__ {int wRequests; } ;
struct wa_rpipe {int wa; int seg_lock; TYPE_3__ descr; int segs_available; int seg_list; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wa_rpipe*,struct wa_xfer*,struct wa_seg*,int*) ;
 int FUNC_4 (struct wa_xfer*) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (struct device*,char*,struct wa_xfer*,int ,unsigned int,size_t,size_t) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,struct wa_rpipe*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct wa_xfer*) ;

__attribute__((used)) static int FUNC_15(struct wa_xfer *VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 struct wahc *VAR_6 = VAR_1->wa;
 struct device *VAR_7 = &VAR_6->usb_iface->dev;
 unsigned VAR_8;
 struct wa_seg *VAR_9;
 unsigned long VAR_10;
 struct wa_rpipe *VAR_11 = VAR_1->ep->hcpriv;
 size_t VAR_12 = FUNC_7(VAR_11->descr.wRequests);
 u8 VAR_13;
 u8 VAR_14;

 FUNC_10(&VAR_6->xfer_list_lock, VAR_10);
 FUNC_8(&VAR_1->list_node, &VAR_6->xfer_list);
 FUNC_11(&VAR_6->xfer_list_lock, VAR_10);

 FUNC_0(FUNC_5(&VAR_11->segs_available) > VAR_12);
 VAR_2 = 0;
 FUNC_10(&VAR_11->seg_lock, VAR_10);
 for (VAR_8 = 0; VAR_8 < VAR_1->segs; VAR_8++) {
  int VAR_15 = 1;

  VAR_13 = FUNC_5(&VAR_11->segs_available);
  VAR_14 = FUNC_9(&VAR_11->seg_list);
  VAR_9 = VAR_1->seg[VAR_8];
  if (VAR_13 && VAR_14) {




   VAR_3 = FUNC_2(VAR_11->wa);
   if (VAR_3) {
    VAR_15 = 0;
    VAR_2 = FUNC_3(VAR_11, VAR_1, VAR_9,
       &VAR_4);
    FUNC_6(VAR_7, "xfer %p ID 0x%08X#%u: available %u empty %u submitted\n",
     VAR_1, FUNC_14(VAR_1), VAR_8, VAR_13,
     VAR_14);
    if (VAR_4)
     FUNC_1(VAR_11->wa);

    if (VAR_2 < 0) {
     FUNC_4(VAR_1);
     goto error_seg_submit;
    }
   }
  }

  if (VAR_15) {
   FUNC_6(VAR_7, "xfer %p ID 0x%08X#%u: available %u empty %u delayed\n",
    VAR_1, FUNC_14(VAR_1), VAR_8, VAR_13, VAR_14);
   VAR_9->status = VAR_0;
   FUNC_8(&VAR_9->list_node, &VAR_11->seg_list);
  }
  VAR_1->segs_submitted++;
 }
error_seg_submit:




 if (!VAR_3 && !FUNC_9(&VAR_11->seg_list)
  && (FUNC_5(&VAR_11->segs_available) ==
   FUNC_7(VAR_11->descr.wRequests)))
  VAR_5 = 1;
 FUNC_11(&VAR_11->seg_lock, VAR_10);

 if (VAR_5)
  FUNC_12(VAR_11->wa, VAR_11);
 else if (VAR_4)
  FUNC_13(VAR_11->wa);

 return VAR_2;
}
