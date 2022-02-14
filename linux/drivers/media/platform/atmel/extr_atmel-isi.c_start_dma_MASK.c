
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct frame_buffer {TYPE_1__* p_dma_desc; } ;
struct TYPE_4__ {int frate; } ;
struct atmel_isi {int enable_preview_path; TYPE_2__ pdata; int dev; } ;
struct TYPE_3__ {scalar_t__ fbd_phys; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct atmel_isi*,int ) ;
 int FUNC_2 (struct atmel_isi*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct atmel_isi *VAR_19, struct frame_buffer *VAR_20)
{
 u32 VAR_21, VAR_22;

 VAR_22 = FUNC_1(VAR_19, VAR_0);

 FUNC_2(VAR_19, VAR_15,
   VAR_16 | VAR_17);


 if (!VAR_19->enable_preview_path) {
  if (FUNC_1(VAR_19, VAR_18) & VAR_4) {
   FUNC_0(VAR_19->dev, "Already in frame handling.\n");
   return;
  }

  FUNC_2(VAR_19, VAR_12,
    (u32)VAR_20->p_dma_desc->fbd_phys);
  FUNC_2(VAR_19, VAR_11,
    VAR_10 | VAR_9);
  FUNC_2(VAR_19, VAR_6, VAR_7);
 } else {
  FUNC_2(VAR_19, VAR_14,
    (u32)VAR_20->p_dma_desc->fbd_phys);
  FUNC_2(VAR_19, VAR_13,
    VAR_10 | VAR_9);
  FUNC_2(VAR_19, VAR_6, VAR_8);
 }

 VAR_22 &= ~VAR_2;

 VAR_22 |= VAR_19->pdata.frate | VAR_1;


 VAR_21 = VAR_5;

 if (!VAR_19->enable_preview_path)
  VAR_21 |= VAR_4;

 FUNC_2(VAR_19, VAR_3, VAR_21);
 FUNC_2(VAR_19, VAR_0, VAR_22);
}
