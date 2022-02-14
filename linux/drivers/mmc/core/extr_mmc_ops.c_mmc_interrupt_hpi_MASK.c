
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int out_of_int_time; int hpi_en; } ;
struct mmc_card {TYPE_1__ ext_csd; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const FUNC_0 (int ) ;





 unsigned long VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_card*,int *) ;
 int FUNC_3 (struct mmc_card*,int *) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int const) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

int FUNC_9(struct mmc_card *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 unsigned long VAR_6;

 if (!VAR_3->ext_csd.hpi_en) {
  FUNC_7("%s: HPI enable bit unset\n", FUNC_1(VAR_3->host));
  return 1;
 }

 VAR_4 = FUNC_3(VAR_3, &VAR_5);
 if (VAR_4) {
  FUNC_6("%s: Get card status fail\n", FUNC_1(VAR_3->host));
  goto out;
 }

 switch (FUNC_0(VAR_5)) {
 case 132:
 case 130:
 case 129:
 case 128:




  goto out;
 case 131:
  break;
 default:

  FUNC_5("%s: HPI cannot be sent. Card state=%d\n",
   FUNC_1(VAR_3->host), FUNC_0(VAR_5));
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_4)
  goto out;

 VAR_6 = VAR_2 + FUNC_4(VAR_3->ext_csd.out_of_int_time);
 do {
  VAR_4 = FUNC_3(VAR_3, &VAR_5);

  if (!VAR_4 && FUNC_0(VAR_5) == 128)
   break;
  if (FUNC_8(VAR_2, VAR_6))
   VAR_4 = -VAR_1;
 } while (!VAR_4);

out:
 return VAR_4;
}
