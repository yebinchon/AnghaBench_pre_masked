
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cx88_core {scalar_t__ i2c_rc; int v4l2_dev; int audio_hdl; int video_hdl; int lmmio; int devlist; int i2c_adap; scalar_t__ i2c_rtc; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx88_core*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cx88_core*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct cx88_core *VAR_2, struct pci_dev *VAR_3)
{
 FUNC_11(FUNC_9(VAR_3, 0),
      FUNC_8(VAR_3, 0));

 if (!FUNC_10(&VAR_2->refcount))
  return;

 FUNC_6(&VAR_1);
 FUNC_0(VAR_2);
 if (VAR_2->i2c_rc == 0) {
  if (VAR_2->i2c_rtc)
   FUNC_2(VAR_2->i2c_rtc);
  FUNC_1(&VAR_2->i2c_adap);
 }
 FUNC_5(&VAR_2->devlist);
 FUNC_3(VAR_2->lmmio);
 VAR_0--;
 FUNC_7(&VAR_1);
 FUNC_12(&VAR_2->video_hdl);
 FUNC_12(&VAR_2->audio_hdl);
 FUNC_13(&VAR_2->v4l2_dev);
 FUNC_4(VAR_2);
}
