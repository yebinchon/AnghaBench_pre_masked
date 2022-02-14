
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int driver; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8802_dev {int pci; struct cx88_core* core; } ;


 int FUNC_0 (struct file*,struct cx88_core*,struct v4l2_capability*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 struct cx8802_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct cx8802_dev *VAR_3 = FUNC_4(VAR_0);
 struct cx88_core *VAR_4 = VAR_3->core;

 FUNC_3(VAR_2->driver, "cx88_blackbird", sizeof(VAR_2->driver));
 FUNC_2(VAR_2->bus_info, "PCI:%s", FUNC_1(VAR_3->pci));
 return FUNC_0(VAR_0, VAR_4, VAR_2);
}
