
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_rc {struct rc_dev* rc_dev; } ;
struct smi_dev {struct smi_rc ir; } ;
struct rc_dev {int dummy; } ;


 int FUNC_0 (struct rc_dev*) ;
 int FUNC_1 (struct smi_rc*) ;

void FUNC_2(struct smi_dev *VAR_0)
{
 struct smi_rc *VAR_1 = &VAR_0->ir;
 struct rc_dev *VAR_2 = VAR_1->rc_dev;

 FUNC_1(VAR_1);
 FUNC_0(VAR_2);
 VAR_1->rc_dev = ((void*)0);
}
