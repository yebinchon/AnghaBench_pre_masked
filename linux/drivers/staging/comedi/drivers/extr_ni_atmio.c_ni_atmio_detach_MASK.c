
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct comedi_device {scalar_t__ hw_dev; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 struct pnp_dev *VAR_1;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 VAR_1 = VAR_0->hw_dev ? FUNC_3(VAR_0->hw_dev) : ((void*)0);
 if (VAR_1)
  FUNC_2(VAR_1);
}
