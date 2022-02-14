
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int* megabytes; int cardtype; int radio; int tuner; } ;
struct cx18 {int* stream_buffers; int* stream_buf_size; size_t instance; TYPE_3__* card; int card_i2c; scalar_t__ card_name; int v4l2_cap; TYPE_2__* pci_dev; TYPE_4__ options; int std; } ;
struct TYPE_7__ {int i2c; scalar_t__ name; int v4l2_capabilities; TYPE_1__* pci_list; } ;
struct TYPE_6__ {scalar_t__ subsystem_vendor; scalar_t__ device; scalar_t__ subsystem_device; int vendor; } ;
struct TYPE_5__ {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct cx18*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int * VAR_31 ;
 int * VAR_32 ;

__attribute__((used)) static void FUNC_5(struct cx18 *VAR_33)
{
 int VAR_34, VAR_35;

 VAR_33->options.megabytes[VAR_5] = VAR_23;
 VAR_33->options.megabytes[VAR_2] = VAR_17;
 VAR_33->options.megabytes[VAR_1] = VAR_14;
 VAR_33->options.megabytes[VAR_7] = VAR_28;
 VAR_33->options.megabytes[VAR_6] = VAR_26;
 VAR_33->options.megabytes[VAR_3] = VAR_20;
 VAR_33->options.megabytes[VAR_4] = 0;

 VAR_33->stream_buffers[VAR_5] = VAR_24;
 VAR_33->stream_buffers[VAR_2] = VAR_18;
 VAR_33->stream_buffers[VAR_1] = VAR_15;
 VAR_33->stream_buffers[VAR_7] = VAR_29;
 VAR_33->stream_buffers[VAR_6] = VAR_27;
 VAR_33->stream_buffers[VAR_3] = VAR_21;
 VAR_33->stream_buffers[VAR_4] = 0;

 VAR_33->stream_buf_size[VAR_5] = VAR_25;
 VAR_33->stream_buf_size[VAR_2] = VAR_19;
 VAR_33->stream_buf_size[VAR_1] = VAR_16;
 VAR_33->stream_buf_size[VAR_7] = VAR_30;
 VAR_33->stream_buf_size[VAR_6] = VAR_12 * 36;
 VAR_33->stream_buf_size[VAR_3] = VAR_22;
 VAR_33->stream_buf_size[VAR_4] = 0;


 for (VAR_34 = 0; VAR_34 < VAR_8; VAR_34++) {
  if (VAR_33->stream_buffers[VAR_34] == 0 ||
      VAR_33->options.megabytes[VAR_34] <= 0 ||
      VAR_33->stream_buf_size[VAR_34] <= 0) {
   VAR_33->options.megabytes[VAR_34] = 0;
   VAR_33->stream_buffers[VAR_34] = 0;
   VAR_33->stream_buf_size[VAR_34] = 0;
   continue;
  }
  if (VAR_34 == VAR_7) {
   VAR_33->stream_buf_size[VAR_34] *= 1024;
   VAR_33->stream_buf_size[VAR_34] -=
      (VAR_33->stream_buf_size[VAR_34] % VAR_11);

   if (VAR_33->stream_buf_size[VAR_34] < VAR_11)
    VAR_33->stream_buf_size[VAR_34] =
      VAR_11;
  } else if (VAR_34 == VAR_1) {
   VAR_33->stream_buf_size[VAR_34] *= 1024;
   VAR_33->stream_buf_size[VAR_34] -=
      (VAR_33->stream_buf_size[VAR_34] % VAR_10);

   if (VAR_33->stream_buf_size[VAR_34] < VAR_10)
    VAR_33->stream_buf_size[VAR_34] =
      VAR_10;
  }






  if (VAR_34 == VAR_6 ||
      VAR_34 == VAR_7 ||
      VAR_34 == VAR_1) {
   if (VAR_33->stream_buffers[VAR_34] < 0) {
    VAR_33->stream_buffers[VAR_34] =
     VAR_33->options.megabytes[VAR_34] * 1024 * 1024
     / VAR_33->stream_buf_size[VAR_34];
   } else {

    VAR_33->options.megabytes[VAR_34] =
     VAR_33->stream_buffers[VAR_34]
     * VAR_33->stream_buf_size[VAR_34]/(1024 * 1024);
   }
  } else {

   if (VAR_33->stream_buffers[VAR_34] < 0) {
    VAR_33->stream_buffers[VAR_34] =
      VAR_33->options.megabytes[VAR_34] * 1024
      / VAR_33->stream_buf_size[VAR_34];
   } else {

    VAR_33->options.megabytes[VAR_34] =
      VAR_33->stream_buffers[VAR_34]
      * VAR_33->stream_buf_size[VAR_34] / 1024;
   }

   VAR_33->stream_buf_size[VAR_34] *= 1024;
  }
  FUNC_0("Stream type %d options: %d MB, %d buffers, %d bytes\n",
    VAR_34, VAR_33->options.megabytes[VAR_34],
    VAR_33->stream_buffers[VAR_34], VAR_33->stream_buf_size[VAR_34]);
 }

 VAR_33->options.cardtype = VAR_13[VAR_33->instance];
 VAR_33->options.tuner = VAR_32[VAR_33->instance];
 VAR_33->options.radio = VAR_31[VAR_33->instance];

 VAR_33->std = FUNC_4(VAR_33);
 if (VAR_33->options.cardtype == -1) {
  FUNC_2("Ignore card\n");
  return;
 }
 VAR_33->card = FUNC_3(VAR_33->options.cardtype - 1);
 if (VAR_33->card)
  FUNC_2("User specified %s card\n", VAR_33->card->name);
 else if (VAR_33->options.cardtype != 0)
  FUNC_1("Unknown user specified type, trying to autodetect card\n");
 if (!VAR_33->card) {
  if (VAR_33->pci_dev->subsystem_vendor == VAR_9) {
   VAR_33->card = FUNC_3(VAR_0);
   FUNC_2("Autodetected Hauppauge card\n");
  }
 }
 if (!VAR_33->card) {
  for (VAR_34 = 0; (VAR_33->card = FUNC_3(VAR_34)); VAR_34++) {
   if (!VAR_33->card->pci_list)
    continue;
   for (VAR_35 = 0; VAR_33->card->pci_list[VAR_35].device; VAR_35++) {
    if (VAR_33->pci_dev->device !=
        VAR_33->card->pci_list[VAR_35].device)
     continue;
    if (VAR_33->pci_dev->subsystem_vendor !=
        VAR_33->card->pci_list[VAR_35].subsystem_vendor)
     continue;
    if (VAR_33->pci_dev->subsystem_device !=
        VAR_33->card->pci_list[VAR_35].subsystem_device)
     continue;
    FUNC_2("Autodetected %s card\n", VAR_33->card->name);
    goto done;
   }
  }
 }
done:

 if (!VAR_33->card) {
  VAR_33->card = FUNC_3(VAR_0);
  FUNC_1("Unknown card: vendor/device: [%04x:%04x]\n",
    VAR_33->pci_dev->vendor, VAR_33->pci_dev->device);
  FUNC_1("              subsystem vendor/device: [%04x:%04x]\n",
    VAR_33->pci_dev->subsystem_vendor,
    VAR_33->pci_dev->subsystem_device);
  FUNC_1("Defaulting to %s card\n", VAR_33->card->name);
  FUNC_1("Please mail the vendor/device and subsystem vendor/device IDs and what kind of\n");
  FUNC_1("card you have to the ivtv-devel mailinglist (www.ivtvdriver.org)\n");
  FUNC_1("Prefix your subject line with [UNKNOWN CX18 CARD].\n");
 }
 VAR_33->v4l2_cap = VAR_33->card->v4l2_capabilities;
 VAR_33->card_name = VAR_33->card->name;
 VAR_33->card_i2c = VAR_33->card->i2c;
}
