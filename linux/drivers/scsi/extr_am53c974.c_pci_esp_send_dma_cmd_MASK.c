
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_esp_priv {scalar_t__ dma_status; } ;
struct esp {int config2; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (char*,int,int,int) ;
 struct pci_esp_priv* FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*,int,int ) ;
 int FUNC_4 (struct esp*,int,int ) ;
 int FUNC_5 (struct esp*,int) ;

__attribute__((used)) static void FUNC_6(struct esp *VAR_11, u32 VAR_12, u32 VAR_13,
     u32 VAR_14, int VAR_15, u8 VAR_16)
{
 struct pci_esp_priv *VAR_17 = FUNC_2(VAR_11);
 u32 VAR_18 = 0;

 FUNC_0(!(VAR_16 & VAR_0));

 VAR_17->dma_status = 0;


 if (VAR_15)

  VAR_18 |= VAR_3;
 FUNC_4(VAR_11, VAR_4 | VAR_18, VAR_2);

 FUNC_4(VAR_11, (VAR_13 >> 0) & 0xff, VAR_9);
 FUNC_4(VAR_11, (VAR_13 >> 8) & 0xff, VAR_10);
 if (VAR_11->config2 & VAR_1)
  FUNC_4(VAR_11, (VAR_13 >> 16) & 0xff, VAR_8);

 FUNC_3(VAR_11, VAR_13, VAR_7);
 FUNC_3(VAR_11, VAR_12, VAR_6);

 FUNC_1("start dma addr[%x] count[%d:%d]\n",
      VAR_12, VAR_13, VAR_14);

 FUNC_5(VAR_11, VAR_16);

 FUNC_4(VAR_11, VAR_5 | VAR_18, VAR_2);
}
