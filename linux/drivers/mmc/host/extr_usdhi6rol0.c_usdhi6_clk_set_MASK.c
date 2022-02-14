
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usdhi6_host {unsigned long imclk; unsigned long rate; int mmc; } ;
struct mmc_ios {unsigned long clock; scalar_t__ timing; } ;


 int FUNC_0 (int,unsigned long) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,unsigned long,int,unsigned long) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct usdhi6_host*,int ) ;
 int FUNC_6 (struct usdhi6_host*,int ,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct usdhi6_host *VAR_6, struct mmc_ios *VAR_7)
{
 unsigned long VAR_8 = VAR_7->clock;
 u32 VAR_9;
 unsigned int VAR_10;

 for (VAR_10 = 1000; VAR_10; VAR_10--) {
  if (FUNC_5(VAR_6, VAR_4) & VAR_5)
   break;
  FUNC_7(10, 100);
 }

 if (!VAR_10) {
  FUNC_2(FUNC_3(VAR_6->mmc), "SD bus busy, clock set aborted\n");
  return;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_1) & ~VAR_2;

 if (VAR_8) {
  unsigned long VAR_11;

  if (VAR_6->imclk <= VAR_8) {
   if (VAR_7->timing != VAR_0) {

    VAR_11 = VAR_6->imclk;
    VAR_9 |= 0xff;
   } else {
    VAR_11 = VAR_6->imclk / 2;
   }
  } else {
   unsigned long VAR_12 =
    FUNC_4(FUNC_0(VAR_6->imclk, VAR_8));
   VAR_9 |= VAR_12 >> 2;
   VAR_11 = VAR_6->imclk / VAR_12;
  }

  if (VAR_6->rate == VAR_11)
   return;

  VAR_6->rate = VAR_11;

  FUNC_1(FUNC_3(VAR_6->mmc), "target %lu, div %u, set %lu\n",
   VAR_8, (VAR_9 & 0xff) << 2, VAR_11);
 }





 if (VAR_6->imclk == VAR_8 || VAR_6->imclk == VAR_6->rate || !VAR_8)
  FUNC_6(VAR_6, VAR_1,
        VAR_9 & ~VAR_3);

 if (!VAR_8) {
  VAR_6->rate = 0;
  return;
 }

 FUNC_6(VAR_6, VAR_1, VAR_9);

 if (VAR_6->imclk == VAR_8 || VAR_6->imclk == VAR_6->rate ||
     !(VAR_9 & VAR_3))
  FUNC_6(VAR_6, VAR_1,
        VAR_9 | VAR_3);
}
