
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ partition_setting_completed; } ;
struct mmc_card {int host; TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_card*,unsigned int,scalar_t__,char*,int,int,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct mmc_card *VAR_8, u8 *VAR_9)
{
 int VAR_10;
 u8 VAR_11, VAR_12;
 unsigned int VAR_13;






 if (VAR_9[VAR_3] &
     VAR_5) {
  VAR_11 =
   VAR_9[VAR_1];
  VAR_12 =
   VAR_9[VAR_2];

  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   if (!VAR_9[VAR_0 + VAR_10 * 3] &&
       !VAR_9[VAR_0 + VAR_10 * 3 + 1] &&
       !VAR_9[VAR_0 + VAR_10 * 3 + 2])
    continue;
   if (VAR_8->ext_csd.partition_setting_completed == 0) {
    FUNC_2("%s: has partition size defined without partition complete\n",
     FUNC_0(VAR_8->host));
    break;
   }
   VAR_13 =
    (VAR_9[VAR_0 + VAR_10 * 3 + 2]
    << 16) +
    (VAR_9[VAR_0 + VAR_10 * 3 + 1]
    << 8) +
    VAR_9[VAR_0 + VAR_10 * 3];
   VAR_13 *= (size_t)(VAR_11 *
    VAR_12);
   FUNC_1(VAR_8, VAR_13 << 19,
    VAR_4 + VAR_10,
    "gp%d", VAR_10, 0,
    VAR_6);
  }
 }
}
