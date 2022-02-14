
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uac_rtd_params {int max_psize; struct snd_uac_chip* rbuf; struct snd_uac_chip* ureq; struct snd_uac_chip* uac; } ;
struct uac_req {int dummy; } ;
struct uac_params {int p_chmask; int c_chmask; int req_number; } ;
struct snd_uac_chip {struct uac_rtd_params c_prm; struct uac_rtd_params p_prm; struct snd_pcm* pcm; struct snd_card* card; struct g_audio* audio_dev; } ;
struct snd_pcm {struct snd_uac_chip* private_data; int name; } ;
struct snd_card {TYPE_2__* dev; int longname; int shortname; int driver; } ;
struct g_audio {int out_ep_maxpsize; int in_ep_maxpsize; TYPE_1__* gadget; struct uac_params params; struct snd_uac_chip* uac; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct snd_uac_chip*) ;
 struct snd_uac_chip* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (int *,int,int *,int ,int ,struct snd_card**) ;
 int FUNC_5 (struct snd_card*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_pcm*,int ,int ,int ,int ) ;
 int FUNC_8 (struct snd_card*,char const*,int ,int,int,struct snd_pcm**) ;
 int FUNC_9 (struct snd_pcm*,int ,int *) ;
 int FUNC_10 (int ,char*,char const*,int) ;
 int FUNC_11 (int ,char const*,int) ;
 int VAR_8 ;

int FUNC_12(struct g_audio *VAR_9, const char *VAR_10,
     const char *VAR_11)
{
 struct snd_uac_chip *VAR_12;
 struct snd_card *VAR_13;
 struct snd_pcm *VAR_14;
 struct uac_params *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;

 if (!VAR_9)
  return -VAR_1;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;
 VAR_9->uac = VAR_12;
 VAR_12->audio_dev = VAR_9;

 VAR_15 = &VAR_9->params;
 VAR_16 = VAR_15->p_chmask;
 VAR_17 = VAR_15->c_chmask;

 if (VAR_17) {
  struct uac_rtd_params *VAR_19 = &VAR_12->c_prm;

  VAR_12->c_prm.uac = VAR_12;
  VAR_19->max_psize = VAR_9->out_ep_maxpsize;

  VAR_19->ureq = FUNC_0(VAR_15->req_number, sizeof(struct uac_req),
    VAR_3);
  if (!VAR_19->ureq) {
   VAR_18 = -VAR_2;
   goto fail;
  }

  VAR_19->rbuf = FUNC_0(VAR_15->req_number, VAR_19->max_psize,
    VAR_3);
  if (!VAR_19->rbuf) {
   VAR_19->max_psize = 0;
   VAR_18 = -VAR_2;
   goto fail;
  }
 }

 if (VAR_16) {
  struct uac_rtd_params *VAR_20 = &VAR_12->p_prm;

  VAR_12->p_prm.uac = VAR_12;
  VAR_20->max_psize = VAR_9->in_ep_maxpsize;

  VAR_20->ureq = FUNC_0(VAR_15->req_number, sizeof(struct uac_req),
    VAR_3);
  if (!VAR_20->ureq) {
   VAR_18 = -VAR_2;
   goto fail;
  }

  VAR_20->rbuf = FUNC_0(VAR_15->req_number, VAR_20->max_psize,
    VAR_3);
  if (!VAR_20->rbuf) {
   VAR_20->max_psize = 0;
   VAR_18 = -VAR_2;
   goto fail;
  }
 }


 VAR_18 = FUNC_4(&VAR_9->gadget->dev,
   -1, ((void*)0), VAR_7, 0, &VAR_13);
 if (VAR_18 < 0)
  goto fail;

 VAR_12->card = VAR_13;





 VAR_18 = FUNC_8(VAR_12->card, VAR_10, 0,
          VAR_16 ? 1 : 0, VAR_17 ? 1 : 0, &VAR_14);
 if (VAR_18 < 0)
  goto snd_fail;

 FUNC_11(VAR_14->name, VAR_10, sizeof(VAR_14->name));
 VAR_14->private_data = VAR_12;
 VAR_12->pcm = VAR_14;

 FUNC_9(VAR_14, VAR_6, &VAR_8);
 FUNC_9(VAR_14, VAR_5, &VAR_8);

 FUNC_11(VAR_13->driver, VAR_11, sizeof(VAR_13->driver));
 FUNC_11(VAR_13->shortname, VAR_11, sizeof(VAR_13->shortname));
 FUNC_10(VAR_13->longname, "%s %i", VAR_11, VAR_13->dev->id);

 FUNC_7(VAR_14, VAR_4,
  FUNC_6(VAR_3), 0, VAR_0);

 VAR_18 = FUNC_5(VAR_13);

 if (!VAR_18)
  return 0;

snd_fail:
 FUNC_3(VAR_13);
fail:
 FUNC_1(VAR_12->p_prm.ureq);
 FUNC_1(VAR_12->c_prm.ureq);
 FUNC_1(VAR_12->p_prm.rbuf);
 FUNC_1(VAR_12->c_prm.rbuf);
 FUNC_1(VAR_12);

 return VAR_18;
}
