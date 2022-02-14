
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {int timing; int mmc; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ) ;

__attribute__((used)) static u16 FUNC_3(struct sdhci_host *VAR_6)
{
 u16 VAR_7 = 0;

 switch (VAR_6->timing) {
 case 130:
  VAR_7 = FUNC_2(VAR_6, VAR_3);
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_6, VAR_4);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_6, VAR_5);
  break;
 case 131:
 case 134:
  VAR_7 = FUNC_2(VAR_6, VAR_2);
  break;
 case 132:
 case 135:
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  break;
 case 133:
  VAR_7 = FUNC_2(VAR_6, VAR_1);
  break;
 default:
  FUNC_1("%s: Invalid UHS-I mode selected\n",
   FUNC_0(VAR_6->mmc));
  VAR_7 = FUNC_2(VAR_6, VAR_3);
  break;
 }
 return VAR_7;
}
