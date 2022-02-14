
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sec_feature_support; } ;
struct TYPE_5__ {int cmdclass; } ;
struct mmc_card {unsigned int erase_size; scalar_t__ eg_boundary; TYPE_3__ ext_csd; TYPE_2__ csd; TYPE_1__* host; } ;
struct TYPE_4__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_0 (struct mmc_card*,unsigned int*,unsigned int*,unsigned int) ;
 scalar_t__ FUNC_1 (struct mmc_card*) ;
 scalar_t__ FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (struct mmc_card*,unsigned int,unsigned int,unsigned int) ;

int FUNC_4(struct mmc_card *VAR_12, unsigned int VAR_13, unsigned int VAR_14,
       unsigned int VAR_15)
{
 unsigned int VAR_16, VAR_17 = VAR_13 + VAR_14;
 int VAR_18;

 if (!(VAR_12->host->caps & VAR_5) ||
     !(VAR_12->csd.cmdclass & VAR_0))
  return -VAR_2;

 if (!VAR_12->erase_size)
  return -VAR_2;

 if (FUNC_2(VAR_12) && VAR_15 != VAR_11 && VAR_15 != VAR_10)
  return -VAR_2;

 if (FUNC_1(VAR_12) && (VAR_15 & VAR_7) &&
     !(VAR_12->ext_csd.sec_feature_support & VAR_3))
  return -VAR_2;

 if (FUNC_1(VAR_12) && (VAR_15 & VAR_9) &&
     !(VAR_12->ext_csd.sec_feature_support & VAR_4))
  return -VAR_2;

 if (VAR_15 == VAR_8) {
  if (VAR_13 % VAR_12->erase_size || VAR_14 % VAR_12->erase_size)
   return -VAR_1;
 }

 if (VAR_15 == VAR_6)
  VAR_14 = FUNC_0(VAR_12, &VAR_13, &VAR_17, VAR_14);

 if (VAR_14 == 0)
  return 0;

 if (VAR_17 <= VAR_13)
  return -VAR_1;


 VAR_17 -= 1;
 VAR_16 = VAR_12->erase_size - (VAR_13 % VAR_12->erase_size);
 if ((VAR_15 & VAR_9) && (VAR_12->eg_boundary) && (VAR_14 > VAR_16)) {
  VAR_18 = FUNC_3(VAR_12, VAR_13, VAR_13 + VAR_16 - 1, VAR_15);
  VAR_13 += VAR_16;
  if ((VAR_18) || (VAR_17 <= VAR_13))
   return VAR_18;
 }

 return FUNC_3(VAR_12, VAR_13, VAR_17, VAR_15);
}
