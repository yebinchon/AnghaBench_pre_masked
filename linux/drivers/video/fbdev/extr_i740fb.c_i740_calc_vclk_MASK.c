
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i740fb_par {int video_clk2_m; int video_clk2_n; int video_clk2_mn_msbs; int video_clk2_div_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_9, struct i740fb_par *VAR_10)
{
 const u32 VAR_11 = VAR_9 / (200 * VAR_3 / VAR_0);
 const u32 VAR_12 = VAR_9 / (1000 * VAR_3 / VAR_0);
 u32 VAR_13 = 512 * VAR_0;
 u32 VAR_14, VAR_15;
 int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 int VAR_19, VAR_20;

 VAR_18 = FUNC_2(15, FUNC_1(VAR_1 / (VAR_9 / VAR_4)));
 VAR_15 = (VAR_9 * (1 << VAR_18)) / VAR_4;
 VAR_9 = VAR_9 / VAR_4;

 VAR_20 = 2;
 do {
  VAR_20++;
  VAR_19 = ((VAR_15 * VAR_20) / VAR_2 + 2) / 4;

  if (VAR_19 < 3)
   VAR_19 = 3;

  {
   u32 VAR_21 = (((VAR_19 * VAR_2 * 4)
     / VAR_20) + ((1 << VAR_18) / 2)) / (1 << VAR_18);

   VAR_14 = (VAR_9 - VAR_21);

   if (FUNC_0(VAR_14) < VAR_11) {
    VAR_16 = VAR_19;
    VAR_17 = VAR_20;
    VAR_13 = VAR_14;
   }
  }
 } while ((FUNC_0(VAR_14) >= VAR_12) &&
   ((VAR_20 <= VAR_6) || (FUNC_0(VAR_13) > VAR_11)));

 if (FUNC_0(VAR_14) < VAR_12) {
  VAR_16 = VAR_19;
  VAR_17 = VAR_20;
 }

 VAR_10->video_clk2_m = (VAR_16 - 2) & 0xFF;
 VAR_10->video_clk2_n = (VAR_17 - 2) & 0xFF;
 VAR_10->video_clk2_mn_msbs = ((((VAR_17 - 2) >> 4) & VAR_8)
     | (((VAR_16 - 2) >> 8) & VAR_7));
 VAR_10->video_clk2_div_sel = ((VAR_18 << 4) | VAR_5);
}
