
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; int sg_len; int sg; } ;
struct alcor_sdmmc_host {int sg_miter; struct mmc_data* data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct alcor_sdmmc_host *VAR_4)
{
 unsigned int VAR_5 = VAR_1;
 struct mmc_data *VAR_6 = VAR_4->data;

 if (VAR_6->flags & VAR_0)
  VAR_5 |= VAR_3;
 else
  VAR_5 |= VAR_2;
 FUNC_0(&VAR_4->sg_miter, VAR_6->sg, VAR_6->sg_len, VAR_5);
}
