
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ curr; } ;
struct saa7134_dev {int ts_field; int slock; TYPE_1__ ts_q; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7134_dev*,TYPE_1__*,int ) ;
 int FUNC_1 (struct saa7134_dev*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct saa7134_dev *VAR_2, unsigned long VAR_3)
{
 enum v4l2_field VAR_4;

 FUNC_2(&VAR_2->slock);
 if (VAR_2->ts_q.curr) {
  VAR_4 = VAR_2->ts_field;
  if (VAR_4 != VAR_0) {
   if ((VAR_3 & 0x100000) != 0x000000)
    goto done;
  } else {
   if ((VAR_3 & 0x100000) != 0x100000)
    goto done;
  }
  FUNC_0(VAR_2, &VAR_2->ts_q, VAR_1);
 }
 FUNC_1(VAR_2,&VAR_2->ts_q);

 done:
 FUNC_3(&VAR_2->slock);
}
