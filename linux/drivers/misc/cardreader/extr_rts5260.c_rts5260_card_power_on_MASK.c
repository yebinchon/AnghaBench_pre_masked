
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_cr_option {scalar_t__ ocp_en; } ;
struct rtsx_pcr {int extra_caps; struct rtsx_cr_option option; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int,int) ;
 int FUNC_3 (struct rtsx_pcr*) ;

__attribute__((used)) static int FUNC_4(struct rtsx_pcr *VAR_28, int VAR_29)
{
 int VAR_30 = 0;
 struct rtsx_cr_option *VAR_31 = &VAR_28->option;

 if (VAR_31->ocp_en)
  FUNC_1(VAR_28);


 FUNC_2(VAR_28, VAR_6, VAR_2, VAR_2);
 FUNC_2(VAR_28, VAR_9,
    VAR_14, VAR_13);

 FUNC_2(VAR_28, VAR_10, VAR_7,
   VAR_8);

 FUNC_2(VAR_28, VAR_6,
    VAR_1, VAR_1);
 FUNC_0(20);

 if (VAR_28->extra_caps & VAR_5 ||
     VAR_28->extra_caps & VAR_4)
  FUNC_3(VAR_28);


 FUNC_2(VAR_28, VAR_21, 0xFF,
    VAR_23 | VAR_20);

 FUNC_2(VAR_28, VAR_26,
    0xFF, VAR_15);
 FUNC_2(VAR_28, VAR_25, 0xFF, 0);
 FUNC_2(VAR_28, VAR_0, VAR_27 | VAR_24,
    VAR_27 | VAR_24);


 FUNC_2(VAR_28, VAR_22, VAR_16, 0);
 FUNC_2(VAR_28, VAR_12,
   VAR_19 | VAR_18 |
   VAR_17, 0);

 FUNC_2(VAR_28, VAR_11, VAR_3, 0);

 return VAR_30;
}
