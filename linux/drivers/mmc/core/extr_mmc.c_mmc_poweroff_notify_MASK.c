
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int generic_cmd6_time; unsigned int power_off_longtime; int power_off_notification; } ;
struct mmc_card {TYPE_1__ ext_csd; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_card*,int ,int ,unsigned int,unsigned int,int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4->ext_csd.generic_cmd6_time;
 int VAR_7;


 if (VAR_5 == VAR_2)
  VAR_6 = VAR_4->ext_csd.power_off_longtime;

 VAR_7 = FUNC_0(VAR_4, VAR_0,
   VAR_3,
   VAR_5, VAR_6, 0, 1, 0, 0);
 if (VAR_7)
  FUNC_2("%s: Power Off Notification timed out, %u\n",
         FUNC_1(VAR_4->host), VAR_6);


 VAR_4->ext_csd.power_off_notification = VAR_1;

 return VAR_7;
}
