
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int retries; } ;
struct TYPE_5__ {int beacon; } ;
struct TYPE_4__ {int qual; int updated; scalar_t__ noise; void* level; } ;
struct iw_statistics {TYPE_3__ discard; TYPE_2__ miss; TYPE_1__ qual; } ;
struct ipw2100_priv {int status; struct iw_statistics wstats; } ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct ipw2100_priv*,int ,int*,int*) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static struct iw_statistics *FUNC_4(struct net_device *VAR_9)
{
 enum {
  POOR = 30,
  FAIR = 60,
  GOOD = 80,
  VERY_GOOD = 90,
  EXCELLENT = 95,
  PERFECT = 100
 };
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 struct ipw2100_priv *VAR_14 = FUNC_2(VAR_9);
 struct iw_statistics *VAR_15;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20 = sizeof(u32);

 if (!VAR_14)
  return (struct iw_statistics *)((void*)0);

 VAR_15 = &VAR_14->wstats;






 if (!(VAR_14->status & VAR_8)) {
  VAR_15->miss.beacon = 0;
  VAR_15->discard.retries = 0;
  VAR_15->qual.qual = 0;
  VAR_15->qual.level = 0;
  VAR_15->qual.noise = 0;
  VAR_15->qual.updated = 7;
  VAR_15->qual.updated |= VAR_6 |
      VAR_7 | VAR_5;
  return VAR_15;
 }

 if (FUNC_1(VAR_14, VAR_2,
    &VAR_18, &VAR_20))
  goto fail_get_ordinal;


 if (!(VAR_14->status & VAR_8)) {
  VAR_15->qual.qual = 0;
  VAR_15->qual.level = 0;
 } else {
  if (FUNC_1(VAR_14, VAR_1,
     &VAR_16, &VAR_20))
   goto fail_get_ordinal;
  VAR_15->qual.level = VAR_16 + VAR_0;
  if (VAR_16 < 10)
   VAR_10 = VAR_16 * POOR / 10;
  else if (VAR_16 < 15)
   VAR_10 = (VAR_16 - 10) * (FAIR - POOR) / 5 + POOR;
  else if (VAR_16 < 20)
   VAR_10 = (VAR_16 - 15) * (GOOD - FAIR) / 5 + FAIR;
  else if (VAR_16 < 30)
   VAR_10 = (VAR_16 - 20) * (VERY_GOOD - GOOD) /
       10 + GOOD;
  else
   VAR_10 = (VAR_16 - 30) * (PERFECT - VERY_GOOD) /
       10 + VERY_GOOD;

  if (FUNC_1(VAR_14, VAR_3,
     &VAR_17, &VAR_20))
   goto fail_get_ordinal;

  if (VAR_17 > 75)
   VAR_11 = (90 - VAR_17) * POOR / 15;
  else if (VAR_17 > 70)
   VAR_11 = (75 - VAR_17) * (FAIR - POOR) / 5 + POOR;
  else if (VAR_17 > 65)
   VAR_11 = (70 - VAR_17) * (GOOD - FAIR) / 5 + FAIR;
  else if (VAR_17 > 50)
   VAR_11 = (65 - VAR_17) * (VERY_GOOD - GOOD) /
       15 + GOOD;
  else
   VAR_11 = (50 - VAR_17) *
       (PERFECT - VERY_GOOD) / 50 + VERY_GOOD;

  if (VAR_18 > 50)
   VAR_12 = (60 - VAR_18) * POOR / 10;
  else if (VAR_18 > 40)
   VAR_12 = (50 - VAR_18) * (FAIR - POOR) /
       10 + POOR;
  else if (VAR_18 > 32)
   VAR_12 = (40 - VAR_18) * (GOOD - FAIR) /
       18 + FAIR;
  else if (VAR_18 > 20)
   VAR_12 = (32 - VAR_18) *
       (VERY_GOOD - GOOD) / 20 + GOOD;
  else
   VAR_12 = (20 - VAR_18) *
       (PERFECT - VERY_GOOD) / 20 + VERY_GOOD;

  VAR_13 = FUNC_3(VAR_11, VAR_10);
  VAR_13 = FUNC_3(VAR_12, VAR_13);
  VAR_15->qual.qual = VAR_13;
  VAR_15->qual.level = VAR_16 + VAR_0;
 }

 VAR_15->qual.noise = 0;
 VAR_15->qual.updated = 7;
 VAR_15->qual.updated |= VAR_6;


 VAR_15->miss.beacon = VAR_18;

 if (FUNC_1(VAR_14, VAR_4,
    &VAR_19, &VAR_20))
  goto fail_get_ordinal;
 VAR_15->discard.retries = VAR_19;

 return VAR_15;

      fail_get_ordinal:
 FUNC_0("failed querying ordinals.\n");

 return (struct iw_statistics *)((void*)0);
}
