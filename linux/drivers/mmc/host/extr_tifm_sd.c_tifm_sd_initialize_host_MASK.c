
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_sd {int clk_div; int clk_freq; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct tifm_sd *VAR_18)
{
 int VAR_19;
 unsigned int VAR_20 = 0;
 struct tifm_dev *VAR_21 = VAR_18->dev;

 FUNC_4(0, VAR_21->addr + VAR_5);
 VAR_18->clk_div = 61;
 VAR_18->clk_freq = 20000000;
 FUNC_4(VAR_16, VAR_21->addr + VAR_8);
 FUNC_4(VAR_18->clk_div | VAR_15,
        VAR_21->addr + VAR_4);


 for (VAR_19 = 32; VAR_19 <= 256; VAR_19 <<= 1) {
  if (1 & FUNC_3(VAR_21->addr + VAR_9)) {
   VAR_19 = 0;
   break;
  }
  FUNC_1(VAR_19);
 }

 if (VAR_19) {
  FUNC_2("%s : controller failed to reset\n",
         FUNC_0(&VAR_21->dev));
  return -VAR_0;
 }

 FUNC_4(0, VAR_21->addr + VAR_6);
 FUNC_4(VAR_18->clk_div | VAR_15,
        VAR_21->addr + VAR_4);
 FUNC_4(VAR_17, VAR_21->addr + VAR_1);


 FUNC_4(64, VAR_21->addr + VAR_3);
 FUNC_4(VAR_14, VAR_21->addr + VAR_2);

 for (VAR_19 = 16; VAR_19 <= 64; VAR_19 <<= 1) {
  VAR_20 = FUNC_3(VAR_21->addr + VAR_7);
  FUNC_4(VAR_20, VAR_21->addr + VAR_7);
  if (!(VAR_20 & VAR_13)
      && (VAR_20 & VAR_12)) {
   VAR_19 = 0;
   break;
  }
  FUNC_1(VAR_19);
 }

 if (VAR_19) {
  FUNC_2("%s : card not ready - probe failed on initialization\n",
         FUNC_0(&VAR_21->dev));
  return -VAR_0;
 }

 FUNC_4(VAR_11 | VAR_10 | VAR_12
        | VAR_13,
        VAR_21->addr + VAR_5);

 return 0;
}
