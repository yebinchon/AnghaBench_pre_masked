
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct de4x5_private {int chipset; int useSROM; int srom; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int * FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(char *VAR_8, struct de4x5_private *VAR_9)
{
    int VAR_10, VAR_11 = 0, VAR_12 = FUNC_0(VAR_6);

    if (VAR_9->chipset == VAR_0) {
 FUNC_1(VAR_8, "DE434/5");
 return VAR_11;
    } else {
 int VAR_13 = *((char *)&VAR_9->srom + 19) * 3;
 FUNC_2(VAR_8, (char *)&VAR_9->srom + 26 + VAR_13, 8);
    }
    VAR_8[8] = '\0';
    for (VAR_10=0; VAR_10<VAR_12; VAR_10++) {
 if (FUNC_3(VAR_8,VAR_6[VAR_10])!=((void*)0)) break;
    }
    if (VAR_10 == VAR_12) {
 if (VAR_7) {
     *VAR_8 = '\0';
 } else {
     FUNC_1(VAR_8, (((VAR_9->chipset == VAR_0) ? "DC21040" :
      ((VAR_9->chipset == VAR_1) ? "DC21041" :
       ((VAR_9->chipset == VAR_2) ? "DC21140" :
        ((VAR_9->chipset == VAR_3) ? "DC21142" :
         ((VAR_9->chipset == VAR_4) ? "DC21143" : "UNKNOWN"
        )))))));
 }
 if (VAR_9->chipset != VAR_1) {
     VAR_9->useSROM = 1;
 }
    } else if ((VAR_9->chipset & ~0x00ff) == VAR_5) {
 VAR_9->useSROM = 1;
    }

    return VAR_11;
}
