
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_host {int blocksize; int wait_for; int addr; } ;
struct mmc_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sh_mmcif_host*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sh_mmcif_host *VAR_5,
     struct mmc_request *VAR_6)
{
 VAR_5->blocksize = (FUNC_1(VAR_5->addr, VAR_2) &
      VAR_0) + 3;

 VAR_5->wait_for = VAR_4;


 FUNC_0(VAR_5, VAR_3, VAR_1);
}
