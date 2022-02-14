
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ curr; } ;
struct TYPE_9__ {scalar_t__ dma_running; } ;
struct TYPE_8__ {scalar_t__ curr; } ;
struct TYPE_6__ {scalar_t__ curr; } ;
struct saa7134_dev {int field; int ovfield; TYPE_5__ ts_q; TYPE_4__ dmasound; TYPE_3__ vbi_q; scalar_t__ ovenable; TYPE_2__* fmt; TYPE_1__ video_q; scalar_t__ insuspend; int slock; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_7__ {scalar_t__ planar; } ;


 int FUNC_0 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_23 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int,int,char*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

int FUNC_8(struct saa7134_dev *VAR_24)
{
 u32 VAR_25, VAR_26=0, VAR_27=0, VAR_28=0;
 enum v4l2_field VAR_29 = VAR_22;
 enum v4l2_field VAR_30 = VAR_22;

 FUNC_3(&VAR_24->slock);

 if (VAR_24->insuspend)
  return 0;


 if (VAR_24->video_q.curr) {
  VAR_26 |= 0x01;
  VAR_27 |= VAR_12;
  VAR_28 |= VAR_2 |
   VAR_1;
  VAR_29 = VAR_24->field;
 }


 if (VAR_24->video_q.curr && VAR_24->fmt->planar) {
  VAR_27 |= VAR_16 |
   VAR_17;
 }


 if (VAR_24->ovenable) {
  VAR_26 |= 0x10;
  VAR_27 |= VAR_13;
  VAR_30 = VAR_24->ovfield;
 }


 if (VAR_24->vbi_q.curr) {
  VAR_26 |= 0x22;
  VAR_27 |= VAR_14 |
   VAR_15;
  VAR_28 |= VAR_6 |
   VAR_5 |
   VAR_4 |
   VAR_3;
 }


 if (VAR_24->dmasound.dma_running) {
  VAR_27 |= VAR_18;
  VAR_28 |= VAR_10 |
   VAR_9;
 }


 if (VAR_24->ts_q.curr) {
  VAR_27 |= VAR_17;
  VAR_28 |= VAR_8 |
   VAR_7;
 }


 if (FUNC_2(VAR_29) || FUNC_2(VAR_30) || VAR_29 == VAR_30) {

  FUNC_6(FUNC_1(VAR_20), 0x0d);
  FUNC_6(FUNC_1(VAR_21), 0x0d);
  FUNC_6(FUNC_0(VAR_20), 0x02);
  FUNC_6(FUNC_0(VAR_21), 0x02);
  VAR_25 = 0;
 } else {

  if (VAR_23 == VAR_29) {

   FUNC_6(FUNC_1(VAR_20), 0x0d);
   FUNC_6(FUNC_1(VAR_21), 0x0e);
  } else {

   FUNC_6(FUNC_1(VAR_20), 0x0e);
   FUNC_6(FUNC_1(VAR_21), 0x0d);
  }
  FUNC_6(FUNC_0(VAR_20), 0x01);
  FUNC_6(FUNC_0(VAR_21), 0x01);
  VAR_25 = 1;
 }


 FUNC_6(VAR_19, VAR_26);
 FUNC_7(VAR_0, VAR_28);
 FUNC_5(VAR_11,
     VAR_12 |
     VAR_13 |
     VAR_14 |
     VAR_15 |
     VAR_16 |
     VAR_17 |
     VAR_18,
     VAR_27);
 FUNC_4("dmabits: task=0x%02x ctrl=0x%02x irq=0x%x split=%s\n",
  VAR_26, VAR_27, VAR_28, VAR_25 ? "no" : "yes");

 return 0;
}
