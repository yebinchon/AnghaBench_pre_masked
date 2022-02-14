
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {int vc_num; int vc_rows; int vc_cols; int vc_size_row; scalar_t__ vc_origin; } ;
struct TYPE_3__ {scalar_t__* bgcount; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;


 int FUNC_0 (struct vc_data*,int*) ;
 TYPE_2__** VAR_0 ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;
 int VAR_5 = VAR_1->vc_num;
 u16 VAR_6;
 u16 *VAR_7 = (u16 *)VAR_1->vc_origin;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_0[VAR_5]->ht.bgcount[VAR_2] = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->vc_rows; VAR_2++) {
  u16 *VAR_8 = VAR_7 + VAR_1->vc_cols * 2;
  u16 *VAR_9;

  for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
   VAR_6 = FUNC_0(VAR_1, VAR_9);
   VAR_3 = (VAR_6 & 0x70) >> 4;
   VAR_0[VAR_5]->ht.bgcount[VAR_3]++;
  }
  VAR_7 += VAR_1->vc_size_row;
 }

 VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  if (VAR_0[VAR_5]->ht.bgcount[VAR_2] > 0)
   VAR_4++;
 return VAR_4;
}
