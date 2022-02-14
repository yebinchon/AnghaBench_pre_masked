
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int dummy; } ;
struct mmc_command {int dummy; } ;
struct dw_mci {int stop_cmdr; struct mmc_command stop_abort; } ;


 int FUNC_0 (struct dw_mci*,struct mmc_command*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct dw_mci *VAR_0, struct mmc_data *VAR_1)
{
 struct mmc_command *VAR_2 = &VAR_0->stop_abort;

 FUNC_0(VAR_0, VAR_2, VAR_0->stop_cmdr);
}
