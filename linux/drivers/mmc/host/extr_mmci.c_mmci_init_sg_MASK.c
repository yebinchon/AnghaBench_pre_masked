
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int sg_miter; } ;
struct mmc_data {int flags; int sg_len; int sg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct mmci_host *VAR_4, struct mmc_data *VAR_5)
{
 unsigned int VAR_6 = VAR_1;

 if (VAR_5->flags & VAR_0)
  VAR_6 |= VAR_3;
 else
  VAR_6 |= VAR_2;

 FUNC_0(&VAR_4->sg_miter, VAR_5->sg, VAR_5->sg_len, VAR_6);
}
