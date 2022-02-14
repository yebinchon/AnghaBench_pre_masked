
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * mbox; } ;
struct TYPE_3__ {int mbox; } ;
struct ivtv {scalar_t__ has_cx23415; TYPE_2__ dec_mbox; TYPE_1__ enc_mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ivtv*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct ivtv *VAR_22)
{
 FUNC_0("Preparing for firmware halt.\n");
 if (VAR_22->has_cx23415 && VAR_22->dec_mbox.mbox)
  FUNC_2(VAR_22, VAR_0, 0);
 if (VAR_22->enc_mbox.mbox)
  FUNC_2(VAR_22, VAR_1, 0);

 FUNC_1(10, 0);
 VAR_22->enc_mbox.mbox = *(VAR_22->dec_mbox.mbox = ((void*)0));

 FUNC_0("Stopping VDM\n");
 FUNC_3(VAR_8, VAR_19);

 FUNC_0("Stopping AO\n");
 FUNC_3(VAR_2, VAR_11);

 FUNC_0("pinging (?) APU\n");
 FUNC_3(VAR_3, VAR_12);

 FUNC_0("Stopping VPU\n");
 if (!VAR_22->has_cx23415)
  FUNC_3(VAR_10, VAR_20);
 else
  FUNC_3(VAR_9, VAR_20);

 FUNC_0("Resetting Hw Blocks\n");
 FUNC_3(VAR_4, VAR_17);

 FUNC_0("Stopping SPU\n");
 FUNC_3(VAR_7, VAR_18);

 FUNC_1(10, 0);

 FUNC_0("init Encoder SDRAM pre-charge\n");
 FUNC_3(VAR_5, VAR_15);

 FUNC_0("init Encoder SDRAM refresh to 1us\n");
 FUNC_3(VAR_6, VAR_16);

 if (VAR_22->has_cx23415) {
  FUNC_0("init Decoder SDRAM pre-charge\n");
  FUNC_3(VAR_5, VAR_13);

  FUNC_0("init Decoder SDRAM refresh to 1us\n");
  FUNC_3(VAR_6, VAR_14);
 }

 FUNC_0("Sleeping for %dms\n", VAR_21);
 FUNC_1(VAR_21, 0);
}
