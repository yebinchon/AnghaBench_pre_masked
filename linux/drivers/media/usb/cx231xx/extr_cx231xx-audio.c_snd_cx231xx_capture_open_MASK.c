
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct cx231xx* private_data; int hw; } ;
struct TYPE_2__ {struct snd_pcm_substream* capture_pcm_substream; int users; } ;
struct cx231xx {int state; TYPE_1__ adev; int lock; int dev; scalar_t__ USE_ISO; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int FUNC_1 (struct cx231xx*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (struct snd_pcm_runtime*,int ) ;
 struct cx231xx* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6)
{
 struct cx231xx *VAR_7 = FUNC_7(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 int VAR_9 = 0;

 FUNC_2(VAR_7->dev,
  "opening device and trying to acquire exclusive lock\n");

 if (VAR_7->state & VAR_1) {
  FUNC_3(VAR_7->dev,
   "Can't open. the device was removed.\n");
  return -VAR_2;
 }



 FUNC_4(&VAR_7->lock);
 if (VAR_7->USE_ISO)
  VAR_9 = FUNC_1(VAR_7, VAR_3, 1);
 else
  VAR_9 = FUNC_1(VAR_7, VAR_3, 0);
 FUNC_5(&VAR_7->lock);
 if (VAR_9 < 0) {
  FUNC_3(VAR_7->dev,
   "failed to set alternate setting !\n");

  return VAR_9;
 }

 VAR_8->hw = VAR_5;

 FUNC_4(&VAR_7->lock);

 VAR_9 = FUNC_0(VAR_7, 1, VAR_0);

 VAR_7->adev.users++;
 FUNC_5(&VAR_7->lock);

 FUNC_6(VAR_8, VAR_4);
 VAR_7->adev.capture_pcm_substream = VAR_6;
 VAR_8->private_data = VAR_7;

 return 0;
}
