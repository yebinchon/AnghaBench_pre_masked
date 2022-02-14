
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ice_vsi {TYPE_2__* back; int rss_table_size; int rss_size; int rss_lut_user; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct ice_vsi*,int *,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(struct ice_vsi *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;
 u8 *VAR_5;

 VAR_5 = FUNC_1(&VAR_2->back->pdev->dev, VAR_2->rss_table_size,
      VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_3) {
  if (VAR_2->rss_lut_user)
   FUNC_4(VAR_5, VAR_2->rss_lut_user, VAR_2->rss_table_size);
  else
   FUNC_2(VAR_5, VAR_2->rss_table_size,
      VAR_2->rss_size);
 }

 VAR_4 = FUNC_3(VAR_2, ((void*)0), VAR_5, VAR_2->rss_table_size);
 FUNC_0(&VAR_2->back->pdev->dev, VAR_5);
 return VAR_4;
}
