
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmciamtd_dev {int vpp; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int dummy; } ;
struct map_info {scalar_t__ map_priv_1; } ;


 int FUNC_0 (struct pcmcia_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,struct pcmciamtd_dev*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct map_info *VAR_2, int VAR_3)
{
 struct pcmciamtd_dev *VAR_4 = (struct pcmciamtd_dev *)VAR_2->map_priv_1;
 struct pcmcia_device *VAR_5 = VAR_4->p_dev;
 unsigned long VAR_6;

 FUNC_1("dev = %p on = %d vpp = %d\n\n", VAR_4, VAR_3, VAR_4->vpp);
 FUNC_2(&VAR_0, VAR_6);
 if (VAR_3) {
  if (++VAR_1 == 1)
   FUNC_0(VAR_5, VAR_4->vpp);
 } else {
  if (--VAR_1 == 0)
   FUNC_0(VAR_5, 0);
 }
 FUNC_3(&VAR_0, VAR_6);
}
