
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {scalar_t__ host_cookie; int sg_count; int sg; int blocks; scalar_t__ bytes_xfered; } ;
struct mmc_command {struct mmc_data* data; } ;
struct alcor_sdmmc_host {int blocks; int sg_count; int dev; int sg; struct mmc_data* data; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct alcor_sdmmc_host*) ;
 int FUNC_1 (struct alcor_pci_priv*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct alcor_sdmmc_host *VAR_2,
          struct mmc_command *VAR_3)
{
 struct alcor_pci_priv *VAR_4 = VAR_2->alcor_pci;
 struct mmc_data *VAR_5 = VAR_3->data;

 if (!VAR_5)
  return;


 VAR_2->data = VAR_5;
 VAR_2->data->bytes_xfered = 0;
 VAR_2->blocks = VAR_5->blocks;
 VAR_2->sg = VAR_5->sg;
 VAR_2->sg_count = VAR_5->sg_count;
 FUNC_2(VAR_2->dev, "prepare DATA: sg %i, blocks: %i\n",
   VAR_2->sg_count, VAR_2->blocks);

 if (VAR_5->host_cookie != VAR_1)
  FUNC_0(VAR_2);

 FUNC_1(VAR_4, 0, VAR_0);
}
