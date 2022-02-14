
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int vc_num; int vc_y; } ;
struct TYPE_3__ {int cy; scalar_t__* ry; int * rx; int * rpos; int * highsize; int * highbuf; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;


 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*) ;
 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vc_data *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11 = VAR_8->vc_num;

 if (FUNC_0(VAR_8) == 1)
  return 0;
 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 != -1) {
  VAR_10 = VAR_8->vc_y - VAR_0[VAR_11]->ht.cy;
  if ((VAR_10 == 1) || (VAR_10 == -1))
   if (VAR_0[VAR_11]->ht.ry[VAR_9] != VAR_8->vc_y)
    return 0;
  VAR_4 |= 0x01;
  FUNC_2();
  FUNC_3(VAR_0[VAR_11]->ht.highbuf[VAR_9],
       VAR_0[VAR_11]->ht.highsize[VAR_9]);
  VAR_5 = VAR_1 = VAR_0[VAR_11]->ht.rpos[VAR_9];
  VAR_6 = VAR_2 = VAR_0[VAR_11]->ht.rx[VAR_9];
  VAR_7 = VAR_3 = VAR_0[VAR_11]->ht.ry[VAR_9];
  return 1;
 }
 return 0;
}
