
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_cr_option {scalar_t__ force_clkreq_0; } ;
struct rtsx_pcr {int flags; struct rtsx_cr_option option; } ;


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
 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_4 (struct rtsx_pcr*) ;
 int FUNC_5 (struct rtsx_pcr*,int ) ;

__attribute__((used)) static int FUNC_6(struct rtsx_pcr *VAR_13)
{
 struct rtsx_cr_option *VAR_14 = &(VAR_13->option);

 FUNC_1(VAR_13);
 FUNC_2(VAR_13);

 FUNC_4(VAR_13);


 FUNC_3(VAR_13, VAR_12, VAR_6, 0xFF, 0x00);

 FUNC_3(VAR_13, VAR_12, VAR_5, 0x02, 0x02);

 FUNC_3(VAR_13, VAR_12, VAR_0, 0x3F, 0);

 FUNC_3(VAR_13, VAR_12, VAR_7, 0x03, 0x00);
 FUNC_3(VAR_13, VAR_12, VAR_7, 0x03, 0x01);

 FUNC_3(VAR_13, VAR_12, VAR_8, 0x0F, 0x02);

 FUNC_0(VAR_13, VAR_9);
 if (VAR_13->flags & VAR_10)
  FUNC_3(VAR_13, VAR_12, VAR_11, 0xB0, 0xB0);
 else
  FUNC_3(VAR_13, VAR_12, VAR_11, 0xB0, 0x80);





 if (VAR_14->force_clkreq_0)
  FUNC_3(VAR_13, VAR_12, VAR_11,
   VAR_2, VAR_4);
 else
  FUNC_3(VAR_13, VAR_12, VAR_11,
   VAR_2, VAR_3);

 return FUNC_5(VAR_13, VAR_1);
}
