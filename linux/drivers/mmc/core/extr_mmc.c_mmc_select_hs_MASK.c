
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int generic_cmd6_time; } ;
struct mmc_card {int host; TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_card*,int ,int ,int ,int ,int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0,
      VAR_1, VAR_2,
      VAR_4->ext_csd.generic_cmd6_time, VAR_3,
      1, 1, 1);
 if (VAR_5)
  FUNC_2("%s: switch to high-speed failed, err:%d\n",
   FUNC_1(VAR_4->host), VAR_5);

 return VAR_5;
}
