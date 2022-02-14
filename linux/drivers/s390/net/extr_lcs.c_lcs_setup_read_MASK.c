
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; int func; } ;
struct TYPE_4__ {int wait_q; TYPE_1__ irq_tasklet; } ;
struct lcs_card {TYPE_2__ read; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lcs_card*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct lcs_card *VAR_2)
{
 FUNC_0(3, VAR_1, "initread");

 FUNC_2(VAR_2);

 VAR_2->read.irq_tasklet.data = (unsigned long) &VAR_2->read;
 VAR_2->read.irq_tasklet.func = VAR_0;

 FUNC_1(&VAR_2->read.wait_q);
}
