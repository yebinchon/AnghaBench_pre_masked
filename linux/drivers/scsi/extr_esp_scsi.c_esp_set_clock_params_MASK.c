
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp {int cfreq; int cfact; int sync_defp; int neg_defp; int ccycle; int ctick; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct esp *VAR_1)
{
 int VAR_2;
 u8 VAR_3;
 VAR_2 = VAR_1->cfreq;

 VAR_3 = ((VAR_2 / 1000000) + 4) / 5;
 if (VAR_3 == 1)
  VAR_3 = 2;






 if (VAR_2 <= 5000000 || VAR_3 < 1 || VAR_3 > 8) {
  VAR_2 = 20000000;
  VAR_3 = 4;
 }

 VAR_1->cfact = (VAR_3 == 8 ? 0 : VAR_3);
 VAR_1->cfreq = VAR_2;
 VAR_1->ccycle = FUNC_0(VAR_2);
 VAR_1->ctick = FUNC_2(VAR_3, VAR_1->ccycle);
 VAR_1->neg_defp = FUNC_1(VAR_2, VAR_3);
 VAR_1->sync_defp = VAR_0;
}
