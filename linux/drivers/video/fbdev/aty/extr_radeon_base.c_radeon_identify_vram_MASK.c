
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeonfb_info {scalar_t__ family; int video_ram; int vram_ddr; int vram_width; TYPE_1__* pdev; scalar_t__ is_IGP; } ;
struct TYPE_2__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct radeonfb_info*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_20 ;


 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ,int,char*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct radeonfb_info *VAR_23)
{
 u32 VAR_24;


        if ((VAR_23->family == VAR_2) ||
            (VAR_23->family == VAR_3) ||
            (VAR_23->family == VAR_4) ||
            (VAR_23->family == VAR_1) ||
            (VAR_23->family == VAR_5) ||
     (VAR_23->family == VAR_6) ) {
          u32 VAR_25 = FUNC_0(VAR_19);
          VAR_24 = ((((VAR_25 >> 16) - (VAR_25 & 0xffff) + 1) << 6) * 1024);

   FUNC_6(6);
          FUNC_2(VAR_15, VAR_25);
          FUNC_2(VAR_13, (VAR_25 & 0xffff) << 16);
          FUNC_2(VAR_10, (VAR_25 & 0xffff) << 16);
          FUNC_2(VAR_20, (VAR_25 & 0xffff) << 16);


          FUNC_2(VAR_14, FUNC_0(VAR_14) & ~0x7f0000);

          if ((VAR_23->family == VAR_2) ||
              (VAR_23->family == VAR_3)) {



             FUNC_3(VAR_12, VAR_11,
                     ~VAR_11);
          }
        } else {
          VAR_24 = FUNC_0(VAR_8);
        }


 VAR_23->video_ram = VAR_24 & VAR_9;





 if (VAR_23->video_ram == 0) {
  switch (VAR_23->pdev->device) {
         case 129:
  case 128:
          VAR_23->video_ram = 8192 * 1024;
          break;
         default:
          break;
  }
 }





 if (VAR_23->is_IGP || (VAR_23->family >= VAR_0) ||
     (FUNC_0(VAR_18) & (1<<30)))
  VAR_23->vram_ddr = 1;
 else
  VAR_23->vram_ddr = 0;

 VAR_24 = FUNC_0(VAR_16);
 if (FUNC_1(VAR_23)) {
  VAR_24 &= VAR_21;
  switch (VAR_24) {
  case 0: VAR_23->vram_width = 64; break;
  case 1: VAR_23->vram_width = 128; break;
  case 2: VAR_23->vram_width = 256; break;
  default: VAR_23->vram_width = 128; break;
  }
 } else if ((VAR_23->family == VAR_7) ||
     (VAR_23->family == VAR_2) ||
     (VAR_23->family == VAR_3)){
  if (VAR_24 & VAR_22)
   VAR_23->vram_width = 32;
  else
   VAR_23->vram_width = 64;
 } else {
  if (VAR_24 & VAR_17)
   VAR_23->vram_width = 128;
  else
   VAR_23->vram_width = 64;
 }





 FUNC_5("radeonfb (%s): Found %ldk of %s %d bits wide videoram\n",
        FUNC_4(VAR_23->pdev),
        VAR_23->video_ram / 1024,
        VAR_23->vram_ddr ? "DDR" : "SDRAM",
        VAR_23->vram_width);
}
