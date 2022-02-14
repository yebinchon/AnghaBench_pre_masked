
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int vgabase; } ;
struct s3fb_info {scalar_t__ chip; TYPE_1__ state; } ;
struct fb_info {int node; struct s3fb_info* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct fb_info*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int,int*,int*,int*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct fb_info *VAR_12, u32 VAR_13)
{
 struct s3fb_info *VAR_14 = VAR_12->par;
 u16 VAR_15, VAR_16, VAR_17;
 u8 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_1((VAR_14->chip == VAR_5) ? &VAR_11 : &VAR_10,
         1000000000 / VAR_13, &VAR_15, &VAR_16, &VAR_17, VAR_12->node);
 if (VAR_19 < 0) {
  FUNC_0(VAR_12, "cannot set requested pixclock, keeping old value\n");
  return;
 }


 VAR_18 = FUNC_3(VAR_14->state.vgabase, VAR_8);
 FUNC_5(VAR_14->state.vgabase, VAR_9, VAR_18 | VAR_7);


 if (VAR_14->chip == VAR_1 ||
     VAR_14->chip == VAR_2 ||
     VAR_14->chip == VAR_3 ||
     VAR_14->chip == VAR_4 ||
     VAR_14->chip == VAR_6 ||
     VAR_14->chip == VAR_0) {
  FUNC_6(VAR_14->state.vgabase, 0x12, (VAR_16 - 2) | ((VAR_17 & 3) << 6));
  FUNC_6(VAR_14->state.vgabase, 0x29, VAR_17 >> 2);
 } else
  FUNC_6(VAR_14->state.vgabase, 0x12, (VAR_16 - 2) | (VAR_17 << 5));
 FUNC_6(VAR_14->state.vgabase, 0x13, VAR_15 - 2);

 FUNC_2(1000);


 VAR_18 = FUNC_4 (VAR_14->state.vgabase, 0x15);
 FUNC_6(VAR_14->state.vgabase, 0x15, VAR_18 & ~(1<<5));
 FUNC_6(VAR_14->state.vgabase, 0x15, VAR_18 | (1<<5));
 FUNC_6(VAR_14->state.vgabase, 0x15, VAR_18 & ~(1<<5));
}
