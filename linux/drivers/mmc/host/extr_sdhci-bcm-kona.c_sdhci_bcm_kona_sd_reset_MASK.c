
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,unsigned int,int ) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct sdhci_host *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;


 VAR_6 = VAR_3 + FUNC_0(100);


 VAR_5 = FUNC_2(VAR_4, VAR_1);
 VAR_5 |= VAR_2;
 FUNC_3(VAR_4, VAR_5, VAR_1);

 while (!(FUNC_2(VAR_4, VAR_1) & VAR_2)) {
  if (FUNC_4(VAR_6)) {
   FUNC_1("Error: sd host is stuck in reset!!!\n");
   return -VAR_0;
  }
 }


 VAR_5 = FUNC_2(VAR_4, VAR_1);
 VAR_5 &= ~VAR_2;







 FUNC_5(1000, 5000);
 FUNC_3(VAR_4, VAR_5, VAR_1);

 return 0;
}
