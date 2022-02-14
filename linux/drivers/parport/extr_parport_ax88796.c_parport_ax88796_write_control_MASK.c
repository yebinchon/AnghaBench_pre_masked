
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct ax_drvdata {int dev; int spp_cpr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned char,unsigned char) ;
 unsigned char FUNC_2 (struct parport*) ;
 struct ax_drvdata* FUNC_3 (struct parport*) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static void
FUNC_6(struct parport *VAR_9, unsigned char VAR_10)
{
 struct ax_drvdata *VAR_11 = FUNC_3(VAR_9);
 unsigned int VAR_12 = FUNC_4(VAR_11->spp_cpr);

 VAR_12 &= VAR_3;

 if (!(VAR_10 & VAR_8))
  VAR_12 |= VAR_2;

 if (!(VAR_10 & VAR_5))
  VAR_12 |= VAR_0;

 if (VAR_10 & VAR_6)
  VAR_12 |= VAR_4;

 if (!(VAR_10 & VAR_7))
  VAR_12 |= VAR_1;

 FUNC_0(VAR_11->dev, "write_control: ctrl=%02x, cpr=%02x\n", VAR_10, VAR_12);
 FUNC_5(VAR_12, VAR_11->spp_cpr);

 if (FUNC_2(VAR_9) != VAR_10) {
  FUNC_1(VAR_11->dev, "write_control: read != set (%02x, %02x)\n",
   FUNC_2(VAR_9), VAR_10);
 }
}
