
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bdx_priv {int ndev; int rxf_fifo0; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bdx_priv*) ;
 int FUNC_2 (struct bdx_priv*,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct bdx_priv *VAR_4, u32 VAR_5)
{
 if (VAR_5 & VAR_3) {
  FUNC_2(VAR_4, &VAR_4->rxf_fifo0);
  FUNC_0("RX_FREE_0\n");
 }

 if (VAR_5 & VAR_0)
  FUNC_1(VAR_4);

 if (VAR_5 & VAR_1)
  FUNC_3(VAR_4->ndev, "PCI-E Link Fault\n");

 if (VAR_5 & VAR_2)
  FUNC_3(VAR_4->ndev, "PCI-E Time Out\n");

}
