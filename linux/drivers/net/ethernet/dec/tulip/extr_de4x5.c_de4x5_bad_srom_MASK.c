
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct de4x5_private {char srom; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct de4x5_private *VAR_3)
{
    int VAR_4, VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
 if (!FUNC_1(&VAR_3->srom, &VAR_2[VAR_4], 3) &&
     !FUNC_1((char *)&VAR_3->srom+0x10, &VAR_2[VAR_4], 3)) {
     if (VAR_4 == 0) {
  VAR_5 = VAR_1;
     } else if (VAR_4 == 1) {
  VAR_5 = VAR_0;
     }
     break;
 }
    }

    return VAR_5;
}
