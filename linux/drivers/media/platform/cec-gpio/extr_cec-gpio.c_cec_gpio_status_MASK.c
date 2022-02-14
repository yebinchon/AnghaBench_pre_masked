
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cec_gpio {char* cec_irq; scalar_t__ v5_is_high; scalar_t__ v5_gpio; scalar_t__ hpd_is_high; scalar_t__ hpd_gpio; scalar_t__ cec_is_low; } ;
struct cec_adapter {int dummy; } ;


 struct cec_gpio* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct cec_adapter *VAR_0, struct seq_file *VAR_1)
{
 struct cec_gpio *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, "mode: %s\n", VAR_2->cec_is_low ? "low-drive" : "read");
 FUNC_1(VAR_1, "using irq: %d\n", VAR_2->cec_irq);
 if (VAR_2->hpd_gpio)
  FUNC_1(VAR_1, "hpd: %s\n",
      VAR_2->hpd_is_high ? "high" : "low");
 if (VAR_2->v5_gpio)
  FUNC_1(VAR_1, "5V: %s\n",
      VAR_2->v5_is_high ? "high" : "low");
}
