
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {unsigned long we_cycle_time; } ;
struct TYPE_8__ {unsigned long pix_tx_time; int line_upd_time; int vsync_only; TYPE_3__* extif; TYPE_2__* fbdev; TYPE_1__ reg_timings; } ;
struct TYPE_7__ {unsigned long (* get_max_tx_rate ) () ;int (* setup_tearsync ) (int,int,int,int,int,int) ;} ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,...) ;
 TYPE_4__ VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;
 int VAR_20, VAR_21;
 int VAR_22, VAR_23;
 u8 VAR_24;

 VAR_16 = FUNC_1(VAR_1);
 VAR_17 = FUNC_1(VAR_5);
 VAR_20 = !(VAR_16 & 0x80);
 VAR_21 = !(VAR_17 & 0x80);
 VAR_16 = VAR_16 & 0x7f;
 VAR_17 = VAR_17 & 0x3f;

 VAR_12 = (FUNC_1(VAR_2) & 0x7f) * 8;
 VAR_13 = FUNC_1(VAR_6) +
  ((FUNC_1(VAR_7) & 0x3) << 8);

 VAR_14 = FUNC_1(VAR_3) & 0x7f;
 VAR_15 = FUNC_1(VAR_8);


 VAR_9 = VAR_9;
 if (VAR_9->get_max_tx_rate != ((void*)0)) {




  unsigned long VAR_25;
  unsigned long VAR_26 = VAR_9->get_max_tx_rate();

  FUNC_0(VAR_9->dev, "max_tx_rate %ld HZ\n",
   VAR_26);
  VAR_25 = 1000000000 / (VAR_26 / 1000);
  if (VAR_9 < VAR_25)
   VAR_9 = VAR_25;
 }


 VAR_9 = (VAR_12 + VAR_14) * 1000000 / (VAR_10 / 1000);
 VAR_9 *= 1000;
 if (VAR_12 * VAR_9 > VAR_9)




  VAR_22 = 1;
 else

  VAR_22 = 0;

 if (VAR_22 && (VAR_20 || VAR_21)) {




  VAR_23 = 1;
  VAR_20 = 0;
  VAR_21 = 0;
  VAR_18 = VAR_14;
  VAR_19 = VAR_15;
 } else {




  VAR_23 = 0;
  VAR_18 = VAR_16;
  VAR_19 = VAR_17;
  if (!VAR_22) {
   VAR_20 = 0;
   VAR_21 = 0;
  }
 }

 VAR_18 = VAR_18 * 1000000 / (VAR_10 / 1000);
 VAR_18 *= 1000;

 VAR_19 = VAR_19 * (VAR_12 + VAR_14) * 1000000 / (VAR_10 / 1000);
 VAR_19 *= 1000;

 if (VAR_19 <= VAR_18)
  return -VAR_0;

 VAR_19 = VAR_18 * 12 / 10;

 VAR_18 = 10000;

 VAR_24 = FUNC_1(VAR_4);
 VAR_24 &= ~0x3;
 VAR_24 |= VAR_22 ? 1 : 0;
 VAR_24 |= (VAR_23 && VAR_22) ? 0 : 2;
 FUNC_2(VAR_4, VAR_24);

 VAR_9 = !VAR_22;

 FUNC_0(VAR_9->dev,
  "pix_clk %ld HZ pix_tx_time %ld ps line_upd_time %ld ps\n",
  VAR_10, VAR_9, VAR_9);
 FUNC_0(VAR_9->dev,
  "hs %d ps vs %d ps mode %d vsync_only %d\n",
  VAR_18, VAR_19, (VAR_24 & 0x3), !VAR_22);

 return VAR_9->setup_tearsync(1, VAR_18, VAR_19,
         VAR_20, VAR_21, VAR_11);
}
