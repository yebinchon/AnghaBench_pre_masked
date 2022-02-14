
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {scalar_t__ sg_off; int sg_orig; int sg_ptr; int sg_len; } ;
struct mmc_data {int sg; int sg_len; } ;



__attribute__((used)) static void FUNC_0(struct tmio_mmc_host *VAR_0, struct mmc_data *VAR_1)
{
 VAR_0->sg_len = VAR_1->sg_len;
 VAR_0->sg_ptr = VAR_1->sg;
 VAR_0->sg_orig = VAR_1->sg;
 VAR_0->sg_off = 0;
}
