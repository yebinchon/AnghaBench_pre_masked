
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {int vc_num; int vc_attr; int vc_y; int vc_x; int vc_pos; } ;
struct TYPE_3__ {int* highsize; int** highbuf; int * ry; int * rx; int * rpos; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static void FUNC_0(struct vc_data *VAR_2, const u16 *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = VAR_2->vc_num;

 VAR_6 = (VAR_2->vc_attr & 0x70) >> 4;
 VAR_7 = VAR_1[VAR_8]->ht.highsize[VAR_6];

 VAR_5 = 0;
 if (VAR_1[VAR_8]->ht.highsize[VAR_6] == 0) {
  VAR_1[VAR_8]->ht.rpos[VAR_6] = VAR_2->vc_pos;
  VAR_1[VAR_8]->ht.rx[VAR_6] = VAR_2->vc_x;
  VAR_1[VAR_8]->ht.ry[VAR_6] = VAR_2->vc_y;
 }
 while ((VAR_7 < VAR_0) && (VAR_5 < VAR_4)) {
  if (VAR_3[VAR_5] > 32) {
   VAR_1[VAR_8]->ht.highbuf[VAR_6][VAR_7] = VAR_3[VAR_5];
   VAR_7++;
  } else if ((VAR_3[VAR_5] == 32) && (VAR_7 != 0)) {
   if (VAR_1[VAR_8]->ht.highbuf[VAR_6][VAR_7 - 1] !=
       32) {
    VAR_1[VAR_8]->ht.highbuf[VAR_6][VAR_7] =
        VAR_3[VAR_5];
    VAR_7++;
   }
  }
  VAR_5++;
 }
 VAR_1[VAR_8]->ht.highsize[VAR_6] = VAR_7;
}
