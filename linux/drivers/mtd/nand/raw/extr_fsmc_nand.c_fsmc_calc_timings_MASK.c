
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_sdr_timings {int tRC_min; int tAR_min; int tCLR_min; int tCS_min; int tWP_min; int tDH_min; int tCH_min; int tCLH_min; int tWH_min; int tALH_min; int tREH_min; int tRP_min; int tCEA_max; int tREA_max; } ;
struct fsmc_nand_timings {scalar_t__ tar; scalar_t__ tclr; scalar_t__ thold; scalar_t__ twait; scalar_t__ tset; void* thiz; } ;
struct fsmc_nand_data {int clk; } ;


 void* FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct fsmc_nand_data *VAR_7,
        const struct nand_sdr_timings *VAR_8,
        struct fsmc_nand_timings *VAR_9)
{
 unsigned long VAR_10 = FUNC_1(VAR_7->clk);
 unsigned long VAR_11 = VAR_6 / VAR_10;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_8->tRC_min < 30000)
  return -VAR_0;

 VAR_9->tar = FUNC_0(VAR_8->tAR_min / 1000, VAR_11) - 1;
 if (VAR_9->tar > VAR_1)
  VAR_9->tar = VAR_1;
 VAR_9->tclr = FUNC_0(VAR_8->tCLR_min / 1000, VAR_11) - 1;
 if (VAR_9->tclr > VAR_2)
  VAR_9->tclr = VAR_2;

 VAR_12 = VAR_8->tCS_min - VAR_8->tWP_min;
 VAR_9->thiz = FUNC_0(VAR_12 / 1000, VAR_11);

 VAR_13 = VAR_8->tDH_min;
 if (VAR_13 < VAR_8->tCH_min)
  VAR_13 = VAR_8->tCH_min;
 if (VAR_13 < VAR_8->tCLH_min)
  VAR_13 = VAR_8->tCLH_min;
 if (VAR_13 < VAR_8->tWH_min)
  VAR_13 = VAR_8->tWH_min;
 if (VAR_13 < VAR_8->tALH_min)
  VAR_13 = VAR_8->tALH_min;
 if (VAR_13 < VAR_8->tREH_min)
  VAR_13 = VAR_8->tREH_min;
 VAR_9->thold = FUNC_0(VAR_13 / 1000, VAR_11);
 if (VAR_9->thold == 0)
  VAR_9->thold = 1;
 else if (VAR_9->thold > VAR_3)
  VAR_9->thold = VAR_3;

 VAR_14 = FUNC_2(VAR_8->tRP_min, VAR_8->tWP_min);
 VAR_9->twait = FUNC_0(VAR_14 / 1000, VAR_11) - 1;
 if (VAR_9->twait == 0)
  VAR_9->twait = 1;
 else if (VAR_9->twait > VAR_5)
  VAR_9->twait = VAR_5;

 VAR_15 = FUNC_2(VAR_8->tCS_min - VAR_8->tWP_min,
     VAR_8->tCEA_max - VAR_8->tREA_max);
 VAR_9->tset = FUNC_0(VAR_15 / 1000, VAR_11) - 1;
 if (VAR_9->tset == 0)
  VAR_9->tset = 1;
 else if (VAR_9->tset > VAR_4)
  VAR_9->tset = VAR_4;

 return 0;
}
