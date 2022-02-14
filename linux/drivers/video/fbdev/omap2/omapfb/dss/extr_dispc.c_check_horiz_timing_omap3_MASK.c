
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u64 ;
typedef scalar_t__ u16 ;
struct omap_video_timings {scalar_t__ x_res; scalar_t__ hfp; scalar_t__ hsw; scalar_t__ hbp; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,unsigned long,int const) ;
 int VAR_0 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int const) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1, unsigned long VAR_2,
  const struct omap_video_timings *VAR_3, u16 VAR_4,
  u16 VAR_5, u16 VAR_6, u16 VAR_7, u16 VAR_8,
  bool VAR_9)
{
 const int VAR_10 = FUNC_0(VAR_6, VAR_8);
 unsigned long VAR_11;
 static const u8 VAR_12[3] = { 8, 10, 20 };
 u64 VAR_13, VAR_14;
 int VAR_15;

 VAR_11 = VAR_3->x_res + VAR_3->hfp + VAR_3->hsw + VAR_3->hbp - VAR_7;

 VAR_15 = 0;
 if (VAR_8 < VAR_6)
  VAR_15++;
 if (VAR_7 < VAR_5)
  VAR_15++;
 VAR_14 = FUNC_2((u64)(VAR_3->hbp + VAR_3->hsw + VAR_3->hfp) * VAR_2, VAR_1);
 FUNC_1("blanking period + ppl = %llu (limit = %u)\n", VAR_14, VAR_12[VAR_15]);
 if (VAR_14 <= VAR_12[VAR_15])
  return -VAR_0;


 if (!VAR_9)
  return 0;






 VAR_13 = FUNC_2((u64)(VAR_11 - VAR_4) * VAR_2, VAR_1);
 FUNC_1("(nonactive - pos_x) * pcd = %llu max(0, DS - 2) * width = %d\n",
  VAR_13, FUNC_3(0, VAR_10 - 2) * VAR_5);
 if (VAR_13 < FUNC_3(0, VAR_10 - 2) * VAR_5)
  return -VAR_0;






 VAR_13 = FUNC_2((u64)VAR_11 * VAR_2, VAR_1);
 FUNC_1("nonactive * pcd  = %llu, max(0, DS - 1) * width = %d\n",
  VAR_13, FUNC_3(0, VAR_10 - 1) * VAR_5);
 if (VAR_13 < FUNC_3(0, VAR_10 - 1) * VAR_5)
  return -VAR_0;

 return 0;
}
