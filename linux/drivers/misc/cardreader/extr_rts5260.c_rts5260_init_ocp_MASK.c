
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ocp_glitch; } ;
struct rtsx_cr_option {int sd_800mA_ocp_thd; scalar_t__ ocp_en; } ;
struct rtsx_pcr {TYPE_1__ hw_param; struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtsx_pcr *VAR_9)
{
 struct rtsx_cr_option *VAR_10 = &VAR_9->option;

 if (VAR_10->ocp_en) {
  u8 VAR_11, VAR_12;


  FUNC_1(VAR_9, VAR_4,
    VAR_7,
    VAR_10->sd_800mA_ocp_thd);

  FUNC_1(VAR_9, VAR_1,
    VAR_3,
    VAR_2);

  VAR_11 = VAR_8;
  VAR_12 = VAR_9->hw_param.ocp_glitch;
  FUNC_1(VAR_9, VAR_0, VAR_11, VAR_12);
  FUNC_1(VAR_9, VAR_4,
     VAR_6 |
     VAR_5,
     VAR_6 |
     VAR_5);

  FUNC_0(VAR_9);
 } else {
  FUNC_1(VAR_9, VAR_4,
     VAR_6 |
     VAR_5, 0);
 }
}
