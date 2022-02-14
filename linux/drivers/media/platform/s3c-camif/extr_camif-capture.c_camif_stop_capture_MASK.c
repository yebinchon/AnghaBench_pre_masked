
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camif_vp {int state; int irq_queue; struct camif_dev* camif; } ;
struct camif_dev {int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct camif_vp*) ;
 int FUNC_1 (struct camif_vp*,int) ;
 int FUNC_2 (struct camif_vp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct camif_vp*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct camif_vp *VAR_4)
{
 struct camif_dev *VAR_5 = VAR_4->camif;
 unsigned long VAR_6;
 int VAR_7;

 if (!FUNC_4(VAR_4))
  return 0;

 FUNC_5(&VAR_5->slock, VAR_6);
 VAR_4->state &= ~(VAR_3 | VAR_2);
 VAR_4->state |= VAR_1;
 FUNC_6(&VAR_5->slock, VAR_6);

 VAR_7 = FUNC_7(VAR_4->irq_queue,
      !(VAR_4->state & VAR_1),
      FUNC_3(VAR_0));

 FUNC_5(&VAR_5->slock, VAR_6);

 if (VAR_7 == 0 && !(VAR_4->state & VAR_3)) {

  VAR_4->state &= ~(VAR_3 | VAR_1 |
          VAR_2);

  FUNC_0(VAR_4);
  FUNC_1(VAR_4, 0);
 }

 FUNC_6(&VAR_5->slock, VAR_6);

 return FUNC_2(VAR_4);
}
