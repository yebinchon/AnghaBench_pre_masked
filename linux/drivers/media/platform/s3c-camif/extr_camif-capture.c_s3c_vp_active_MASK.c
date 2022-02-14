
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camif_vp {int state; struct camif_dev* camif; } ;
struct camif_dev {int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct camif_vp *VAR_2)
{
 struct camif_dev *VAR_3 = VAR_2->camif;
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_0(&VAR_3->slock, VAR_4);
 VAR_5 = (VAR_2->state & VAR_1) || (VAR_2->state & VAR_0);
 FUNC_1(&VAR_3->slock, VAR_4);

 return VAR_5;
}
