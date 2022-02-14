
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_exch {int state; int esb_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_exch*) ;

__attribute__((used)) static int FUNC_1(struct fc_exch *VAR_3)
{
 int VAR_4 = 1;







 if (VAR_3->state & VAR_2)
  return VAR_4;
 VAR_3->esb_stat |= VAR_0;

 if (!(VAR_3->esb_stat & VAR_1)) {
  VAR_3->state |= VAR_2;
  FUNC_0(VAR_3);
  VAR_4 = 0;
 }
 return VAR_4;
}
