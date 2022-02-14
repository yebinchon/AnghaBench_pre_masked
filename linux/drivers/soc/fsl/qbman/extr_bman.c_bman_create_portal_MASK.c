
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ci; int ce_be; int ce; } ;
struct bm_portal {TYPE_1__ addr; } ;
struct bman_portal {struct bm_portal_config const* config; int irqname; scalar_t__ irq_sources; struct bm_portal p; } ;
struct bm_portal_config {int irq; int dev; int cpu; int addr_virt_ci; int addr_virt_ce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bm_portal*) ;
 int FUNC_1 (struct bm_portal*) ;
 scalar_t__ FUNC_2 (struct bm_portal*) ;
 int FUNC_3 (struct bm_portal*,int ,int) ;
 int VAR_7 ;
 int FUNC_4 (struct bm_portal*) ;
 int FUNC_5 (struct bm_portal*) ;
 scalar_t__ FUNC_6 (struct bm_portal*,int ,int ) ;
 int VAR_8 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,struct bman_portal*) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int ,int ,int ,int ,struct bman_portal*) ;
 int FUNC_11 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_12(struct bman_portal *VAR_10,
         const struct bm_portal_config *VAR_11)
{
 struct bm_portal *VAR_12;
 int VAR_13;

 VAR_12 = &VAR_10->p;





 VAR_12->addr.ce = VAR_11->addr_virt_ce;
 VAR_12->addr.ce_be = VAR_11->addr_virt_ce;
 VAR_12->addr.ci = VAR_11->addr_virt_ci;
 if (FUNC_6(VAR_12, VAR_8, VAR_7)) {
  FUNC_7(VAR_11->dev, "RCR initialisation failed\n");
  goto fail_rcr;
 }
 if (FUNC_2(VAR_12)) {
  FUNC_7(VAR_11->dev, "MC initialisation failed\n");
  goto fail_mc;
 }




 FUNC_0(VAR_12);


 FUNC_3(VAR_12, VAR_2, 0xffffffff);
 VAR_10->irq_sources = 0;
 FUNC_3(VAR_12, VAR_0, 0);
 FUNC_3(VAR_12, VAR_3, 0xffffffff);
 FUNC_11(VAR_10->irqname, VAR_6, VAR_5, VAR_11->cpu);
 if (FUNC_10(VAR_11->irq, VAR_9, 0, VAR_10->irqname, VAR_10)) {
  FUNC_7(VAR_11->dev, "request_irq() failed\n");
  goto fail_irq;
 }

 if (FUNC_8(VAR_11->dev, VAR_11->irq, VAR_11->cpu))
  goto fail_affinity;


 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13) {
  FUNC_7(VAR_11->dev, "RCR unclean\n");
  goto fail_rcr_empty;
 }

 VAR_10->config = VAR_11;

 FUNC_3(VAR_12, VAR_2, 0);
 FUNC_3(VAR_12, VAR_1, 0);

 return 0;

fail_rcr_empty:
fail_affinity:
 FUNC_9(VAR_11->irq, VAR_10);
fail_irq:
 FUNC_1(VAR_12);
fail_mc:
 FUNC_4(VAR_12);
fail_rcr:
 return -VAR_4;
}
