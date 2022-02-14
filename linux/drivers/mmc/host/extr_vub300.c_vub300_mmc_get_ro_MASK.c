
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int read_only; } ;
struct mmc_host {int dummy; } ;


 struct vub300_mmc_host* FUNC_0 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_1(struct mmc_host *VAR_0)
{
 struct vub300_mmc_host *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->read_only;
}
