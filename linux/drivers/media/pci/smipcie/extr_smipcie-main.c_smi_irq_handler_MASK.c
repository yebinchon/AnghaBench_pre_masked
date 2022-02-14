
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct smi_rc {int dummy; } ;
struct smi_port {int dummy; } ;
struct smi_dev {TYPE_1__* info; struct smi_rc ir; struct smi_port* ts_port; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ ts_1; scalar_t__ ts_0; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct smi_rc*,int ) ;
 scalar_t__ FUNC_2 (struct smi_port*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct smi_dev *VAR_3 = VAR_2;
 struct smi_port *VAR_4 = &VAR_3->ts_port[0];
 struct smi_port *VAR_5 = &VAR_3->ts_port[1];
 struct smi_rc *VAR_6 = &VAR_3->ir;
 int VAR_7 = 0;

 u32 VAR_8 = FUNC_3(VAR_0);


 if (VAR_3->info->ts_0)
  VAR_7 += FUNC_2(VAR_4, VAR_8);


 if (VAR_3->info->ts_1)
  VAR_7 += FUNC_2(VAR_5, VAR_8);


 VAR_7 += FUNC_1(VAR_6, VAR_8);

 return FUNC_0(VAR_7);
}
