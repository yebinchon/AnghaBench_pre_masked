
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx88_core {struct cx8802_dev* dvbdev; } ;
struct cx8802_driver {struct cx88_core* core; } ;
struct TYPE_2__ {int hdl; } ;
struct cx8802_dev {TYPE_1__ cxhdl; } ;


 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cx8802_driver *VAR_0)
{
 struct cx88_core *VAR_1 = VAR_0->core;
 struct cx8802_dev *VAR_2 = VAR_1->dvbdev;


 FUNC_0(VAR_0->core->dvbdev);
 FUNC_1(&VAR_2->cxhdl.hdl);

 return 0;
}
