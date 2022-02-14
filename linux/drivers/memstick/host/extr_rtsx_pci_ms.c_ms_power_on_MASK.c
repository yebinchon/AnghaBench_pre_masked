
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_pcr*,int ) ;
 int FUNC_3 (struct rtsx_pcr*,int ) ;
 int FUNC_4 (struct rtsx_pcr*) ;
 int FUNC_5 (struct rtsx_pcr*,int) ;
 int FUNC_6 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct realtek_pci_ms *VAR_11)
{
 struct rtsx_pcr *VAR_12 = VAR_11->pcr;
 int VAR_13;

 FUNC_4(VAR_12);
 FUNC_1(VAR_12, VAR_10, VAR_2, 0x07, VAR_7);
 FUNC_1(VAR_12, VAR_10, VAR_5,
   VAR_4, VAR_3);
 FUNC_1(VAR_12, VAR_10, VAR_0,
   VAR_6, VAR_6);
 VAR_13 = FUNC_5(VAR_12, 100);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_12, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_12, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_0(150);

 VAR_13 = FUNC_6(VAR_12, VAR_1,
   VAR_8, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
