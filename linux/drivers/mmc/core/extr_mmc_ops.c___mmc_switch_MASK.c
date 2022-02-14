
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned char timing; } ;
struct mmc_host {unsigned int max_busy_timeout; int caps; TYPE_1__ ios; } ;
struct mmc_command {int arg; int flags; unsigned int busy_timeout; int sanitize_busy; int opcode; } ;
struct mmc_card {struct mmc_host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_card*,unsigned int,int,int) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,unsigned char) ;
 int FUNC_5 (struct mmc_card*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_7(struct mmc_card *VAR_10, u8 VAR_11, u8 VAR_12, u8 VAR_13,
  unsigned int VAR_14, unsigned char VAR_15,
  bool VAR_16, bool VAR_17, bool VAR_18)
{
 struct mmc_host *VAR_19 = VAR_10->host;
 int VAR_20;
 struct mmc_command VAR_21 = {};
 bool VAR_22 = VAR_16;
 unsigned char VAR_23 = VAR_19->ios.timing;

 FUNC_2(VAR_19);







 if (VAR_14 && VAR_19->max_busy_timeout &&
  (VAR_14 > VAR_19->max_busy_timeout))
  VAR_22 = 0;

 VAR_21.opcode = VAR_8;
 VAR_21.arg = (VAR_9 << 24) |
    (VAR_12 << 16) |
    (VAR_13 << 8) |
    VAR_11;
 VAR_21.flags = VAR_2;
 if (VAR_22) {
  VAR_21.flags |= VAR_7 | VAR_5;




  VAR_21.busy_timeout = VAR_14;
 } else {
  VAR_21.flags |= VAR_6 | VAR_4;
 }

 if (VAR_12 == VAR_0)
  VAR_21.sanitize_busy = 1;

 VAR_20 = FUNC_6(VAR_19, &VAR_21, VAR_3);
 if (VAR_20)
  goto out;


 if (!VAR_16)
  goto out;


 if (((VAR_19->caps & VAR_1) && VAR_22) ||
  FUNC_0(VAR_19))
  goto out_tim;


 VAR_20 = FUNC_1(VAR_10, VAR_14, VAR_17, VAR_18);
 if (VAR_20)
  goto out;

out_tim:

 if (VAR_15)
  FUNC_4(VAR_19, VAR_15);

 if (VAR_17) {
  VAR_20 = FUNC_5(VAR_10);
  if (VAR_20 && VAR_15)
   FUNC_4(VAR_19, VAR_23);
 }
out:
 FUNC_3(VAR_19);

 return VAR_20;
}
