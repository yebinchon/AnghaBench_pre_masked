
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct au0828_dmaqueue {int dummy; } ;
struct TYPE_3__ {struct au0828_buffer* buf; } ;
struct au0828_dev {int vid_timeout_running; int slock; int vid_timeout; TYPE_1__ isoc_ctl; struct au0828_dmaqueue vidq; } ;
struct TYPE_4__ {int vb2_buf; } ;
struct au0828_buffer {int length; TYPE_2__ vb; } ;


 int VAR_0 ;
 int FUNC_0 (struct au0828_dev*,struct au0828_dmaqueue*,struct au0828_buffer*) ;
 struct au0828_dev* VAR_1 ;
 struct au0828_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct au0828_dmaqueue*,struct au0828_buffer**) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (unsigned char*,int,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned char* FUNC_7 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_4)
{
 struct au0828_dev *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct au0828_dmaqueue *VAR_6 = &VAR_5->vidq;
 struct au0828_buffer *VAR_7;
 unsigned char *VAR_8;
 unsigned long VAR_9 = 0;

 FUNC_5(&VAR_5->slock, VAR_9);

 VAR_7 = VAR_5->isoc_ctl.buf;
 if (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_7(&VAR_7->vb.vb2_buf, 0);
  FUNC_3(VAR_8, 0x00, VAR_7->length);
  FUNC_0(VAR_5, VAR_6, VAR_7);
 }
 FUNC_2(VAR_6, &VAR_7);

 if (VAR_5->vid_timeout_running == 1)
  FUNC_4(&VAR_5->vid_timeout, VAR_2 + (VAR_0 / 10));

 FUNC_6(&VAR_5->slock, VAR_9);
}
