
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct tw686x_video_channel {int qlock; int ch; struct tw686x_dev* dev; } ;
struct tw686x_dev {int lock; struct pci_dev* pci_dev; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct tw686x_video_channel*,int ) ;
 int FUNC_3 (struct tw686x_dev*,int ) ;
 struct tw686x_video_channel* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_5(struct vb2_queue *VAR_1)
{
 struct tw686x_video_channel *VAR_2 = FUNC_4(VAR_1);
 struct tw686x_dev *VAR_3 = VAR_2->dev;
 struct pci_dev *VAR_4;
 unsigned long VAR_5;


 FUNC_0(&VAR_3->lock, VAR_5);
 VAR_4 = VAR_3->pci_dev;
 FUNC_1(&VAR_3->lock, VAR_5);
 if (VAR_4)
  FUNC_3(VAR_3, VAR_2->ch);

 FUNC_0(&VAR_2->qlock, VAR_5);
 FUNC_2(VAR_2, VAR_0);
 FUNC_1(&VAR_2->qlock, VAR_5);
}
