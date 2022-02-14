
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct ax_drvdata {int spp_cpr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct ax_drvdata* FUNC_0 (struct parport*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned char
FUNC_2(struct parport *VAR_8)
{
 struct ax_drvdata *VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10 = FUNC_1(VAR_9->spp_cpr);
 unsigned int VAR_11 = 0;

 if (!(VAR_10 & VAR_2))
  VAR_11 |= VAR_7;

 if (!(VAR_10 & VAR_0))
  VAR_11 |= VAR_4;

 if (VAR_10 & VAR_3)
  VAR_11 |= VAR_5;

 if (!(VAR_10 & VAR_1))
  VAR_11 |= VAR_6;

 return VAR_11;
}
