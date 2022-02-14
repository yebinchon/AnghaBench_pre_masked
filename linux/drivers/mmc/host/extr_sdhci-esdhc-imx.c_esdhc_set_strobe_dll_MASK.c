
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int mmc; scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_10)
{
 u32 VAR_11;


 FUNC_4(FUNC_2(VAR_10->ioaddr + VAR_8) &
  ~VAR_9,
  VAR_10->ioaddr + VAR_8);


 FUNC_4(VAR_2,
  VAR_10->ioaddr + VAR_0);

 FUNC_4(0, VAR_10->ioaddr + VAR_0);





 VAR_11 = VAR_1 |
  VAR_4 |
  (7 << VAR_3);
 FUNC_4(VAR_11, VAR_10->ioaddr + VAR_0);

 FUNC_3(5);
 VAR_11 = FUNC_2(VAR_10->ioaddr + VAR_5);
 if (!(VAR_11 & VAR_6))
  FUNC_0(FUNC_1(VAR_10->mmc),
  "warning! HS400 strobe DLL status REF not lock!\n");
 if (!(VAR_11 & VAR_7))
  FUNC_0(FUNC_1(VAR_10->mmc),
  "warning! HS400 strobe DLL status SLV not lock!\n");
}
