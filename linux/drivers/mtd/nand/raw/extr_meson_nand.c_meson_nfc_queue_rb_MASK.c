
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tbers_max; int twb; } ;
struct TYPE_3__ {int chip_select; } ;
struct meson_nfc {int completion; scalar_t__ reg_base; TYPE_2__ timing; TYPE_1__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct meson_nfc*,int ) ;
 int FUNC_1 (struct meson_nfc*) ;
 int FUNC_2 (struct meson_nfc*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct meson_nfc *VAR_6, int VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_6, VAR_6->timing.twb);
 FUNC_1(VAR_6);
 FUNC_2(VAR_6, VAR_0);

 VAR_9 = FUNC_4(VAR_6->reg_base + VAR_4);
 VAR_9 |= VAR_3;
 FUNC_7(VAR_9, VAR_6->reg_base + VAR_4);

 FUNC_5(&VAR_6->completion);


 VAR_8 = VAR_1 | VAR_2
  | VAR_6->param.chip_select | VAR_6->timing.tbers_max;
 FUNC_7(VAR_8, VAR_6->reg_base + VAR_5);

 VAR_10 = FUNC_6(&VAR_6->completion,
       FUNC_3(VAR_7));
 if (VAR_10 == 0)
  VAR_10 = -1;

 return VAR_10;
}
