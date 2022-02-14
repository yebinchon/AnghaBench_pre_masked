
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {char channel; int dev_softc; } ;
typedef int ahc_dev_softc_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_0)
{
 ahc_dev_softc_t VAR_1;

 VAR_1 = VAR_0->dev_softc;
 switch (FUNC_0(VAR_1)) {
 case 129:
  VAR_0->channel = 'A';
  break;
 case 128:
  VAR_0->channel = 'B';
  break;
 default:
  FUNC_1("adapter at unexpected slot %d\n"
         "unable to map to a channel\n",
         FUNC_0(VAR_1));
  VAR_0->channel = 'A';
 }
 return (0);
}
