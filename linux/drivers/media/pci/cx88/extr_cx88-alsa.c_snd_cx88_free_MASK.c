
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_audio_dev {scalar_t__ irq; int pci; int core; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,struct cx88_audio_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cx88_audio_dev *VAR_0)
{
 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);

 FUNC_0(VAR_0->core, VAR_0->pci);

 FUNC_2(VAR_0->pci);
 return 0;
}
