
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
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
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;

int FUNC_3(struct dwc2_hsotg *VAR_10, int VAR_11)
{
 u32 VAR_12 = FUNC_2(VAR_10, VAR_8);
 u32 VAR_13 = FUNC_2(VAR_10, VAR_0);
 u32 VAR_14 = FUNC_2(VAR_10, VAR_3);
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;


 VAR_15 = (VAR_12 & VAR_9) ? 1000 : 125;


 VAR_16 = (VAR_14 & VAR_4) >> VAR_5;
 VAR_17 = (VAR_14 & VAR_6) >> VAR_7;
 VAR_18 = (VAR_13 & VAR_1) >> VAR_2;





 VAR_19 = (VAR_18 - VAR_17) +
     FUNC_0(VAR_18 * VAR_11, VAR_15);

 return FUNC_1(VAR_16, VAR_19 / VAR_18);
}
