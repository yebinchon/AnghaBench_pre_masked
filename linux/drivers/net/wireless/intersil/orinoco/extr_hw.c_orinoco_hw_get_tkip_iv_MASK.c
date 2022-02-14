
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int tsc_arr ;
struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {struct hermes hw; } ;
struct TYPE_2__ {int (* read_ltv ) (struct hermes*,int ,int ,int,int *,int ***) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct hermes*,int ,int ,int,int *,int ***) ;

int FUNC_2(struct orinoco_private *VAR_4, int VAR_5, u8 *VAR_6)
{
 struct hermes *VAR_7 = &VAR_4->hw;
 int VAR_8 = 0;
 u8 VAR_9[4][VAR_2];

 if ((VAR_5 < 0) || (VAR_5 >= 4))
  return -VAR_0;

 VAR_8 = VAR_7->ops->read_ltv(VAR_7, VAR_3, VAR_1,
    sizeof(VAR_9), ((void*)0), &VAR_9);
 if (!VAR_8)
  FUNC_0(VAR_6, &VAR_9[VAR_5][0], sizeof(VAR_9[0]));

 return VAR_8;
}
