
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;
struct realtek_pci_ms {struct rtsx_pcr* pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtsx_pcr*,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_5(struct realtek_pci_ms *VAR_6)
{
 struct rtsx_pcr *VAR_7 = VAR_6->pcr;
 int VAR_8;

 FUNC_3(VAR_7);

 FUNC_0(VAR_7, VAR_5, VAR_0, VAR_2, 0);
 FUNC_0(VAR_7, VAR_5, VAR_1, VAR_3, 0);

 VAR_8 = FUNC_4(VAR_7, 100);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_2(VAR_7, VAR_4);
}
