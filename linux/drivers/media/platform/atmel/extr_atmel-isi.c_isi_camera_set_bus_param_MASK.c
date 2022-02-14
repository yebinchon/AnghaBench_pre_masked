
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ full_mode; scalar_t__ has_emb_sync; scalar_t__ pclk_act_falling; scalar_t__ vsync_act_low; scalar_t__ hsync_act_low; } ;
struct atmel_isi {int dev; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct atmel_isi*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct atmel_isi *VAR_9)
{
 u32 VAR_10 = 0;


 if (VAR_9->pdata.hsync_act_low)
  VAR_10 |= VAR_3;
 if (VAR_9->pdata.vsync_act_low)
  VAR_10 |= VAR_6;
 if (VAR_9->pdata.pclk_act_falling)
  VAR_10 |= VAR_4;
 if (VAR_9->pdata.has_emb_sync)
  VAR_10 |= VAR_1;
 if (VAR_9->pdata.full_mode)
  VAR_10 |= VAR_2;

 VAR_10 |= VAR_5;


 FUNC_1(VAR_9->dev);

 FUNC_0(VAR_9, VAR_7, VAR_8);
 FUNC_0(VAR_9, VAR_0, VAR_10);

 FUNC_2(VAR_9->dev);
}
