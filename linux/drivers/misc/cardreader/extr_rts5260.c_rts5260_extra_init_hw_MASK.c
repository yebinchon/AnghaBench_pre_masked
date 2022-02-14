
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_cr_option {scalar_t__ force_clkreq_0; } ;
struct rtsx_pcr {struct rtsx_cr_option option; } ;


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
 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_pcr *VAR_12)
{
 struct rtsx_cr_option *VAR_13 = &VAR_12->option;


 FUNC_2(VAR_12, 0xFC03, 0x7F, 0x07);
 FUNC_2(VAR_12, VAR_11, 0xFF, 0x5D);

 FUNC_0(VAR_12);


 FUNC_2(VAR_12, VAR_7,
    0xFF, VAR_10);

 FUNC_2(VAR_12, VAR_3,
    VAR_9, VAR_8);

 FUNC_2(VAR_12, VAR_4, VAR_5, VAR_5);

 FUNC_1(VAR_12);





 if (VAR_13->force_clkreq_0)
  FUNC_2(VAR_12, VAR_6,
     VAR_0, VAR_2);
 else
  FUNC_2(VAR_12, VAR_6,
     VAR_0, VAR_1);

 return 0;
}
