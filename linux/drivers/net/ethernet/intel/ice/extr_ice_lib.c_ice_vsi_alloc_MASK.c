
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_vsi {int type; size_t idx; int irq_handler; int state; struct ice_pf* back; } ;
struct ice_pf {size_t next_vsi; int sw_mutex; TYPE_1__* pdev; int num_alloc_vsi; struct ice_vsi** vsi; } ;
typedef enum ice_vsi_type { ____Placeholder_ice_vsi_type } ice_vsi_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct ice_vsi*) ;
 struct ice_vsi* FUNC_3 (int *,int,int ) ;
 size_t FUNC_4 (struct ice_vsi**,int ,size_t) ;
 int VAR_4 ;
 int FUNC_5 (struct ice_vsi*) ;
 int FUNC_6 (struct ice_vsi*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static struct ice_vsi *
FUNC_10(struct ice_pf *VAR_5, enum ice_vsi_type VAR_6, u16 VAR_7)
{
 struct ice_vsi *VAR_8 = ((void*)0);


 FUNC_7(&VAR_5->sw_mutex);





 if (VAR_5->next_vsi == VAR_2) {
  FUNC_0(&VAR_5->pdev->dev, "out of VSI slots!\n");
  goto unlock_pf;
 }

 VAR_8 = FUNC_3(&VAR_5->pdev->dev, sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  goto unlock_pf;

 VAR_8->type = VAR_6;
 VAR_8->back = VAR_5;
 FUNC_9(VAR_3, VAR_8->state);

 VAR_8->idx = VAR_5->next_vsi;

 if (VAR_6 == 128)
  FUNC_6(VAR_8, VAR_7);
 else
  FUNC_6(VAR_8, VAR_1);

 switch (VAR_8->type) {
 case 129:
  if (FUNC_5(VAR_8))
   goto err_rings;


  VAR_8->irq_handler = VAR_4;
  break;
 case 128:
  if (FUNC_5(VAR_8))
   goto err_rings;
  break;
 case 130:
  if (FUNC_5(VAR_8))
   goto err_rings;
  break;
 default:
  FUNC_1(&VAR_5->pdev->dev, "Unknown VSI type %d\n", VAR_8->type);
  goto unlock_pf;
 }


 VAR_5->vsi[VAR_5->next_vsi] = VAR_8;


 VAR_5->next_vsi = FUNC_4(VAR_5->vsi, VAR_5->num_alloc_vsi,
      VAR_5->next_vsi);
 goto unlock_pf;

err_rings:
 FUNC_2(&VAR_5->pdev->dev, VAR_8);
 VAR_8 = ((void*)0);
unlock_pf:
 FUNC_8(&VAR_5->sw_mutex);
 return VAR_8;
}
