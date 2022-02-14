
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cmdq_en; int generic_cmd6_time; int cmdq_support; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_card*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mmc_card *VAR_4, bool VAR_5)
{
 u8 VAR_6 = VAR_5 ? VAR_2 : 0;
 int VAR_7;

 if (!VAR_4->ext_csd.cmdq_support)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_3, VAR_1,
    VAR_6, VAR_4->ext_csd.generic_cmd6_time);
 if (!VAR_7)
  VAR_4->ext_csd.cmdq_en = VAR_5;

 return VAR_7;
}
