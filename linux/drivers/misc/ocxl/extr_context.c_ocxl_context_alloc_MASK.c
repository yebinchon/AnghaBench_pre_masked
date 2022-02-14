
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_context {int pasid; scalar_t__ tidr; int irq_idr; int irq_lock; int xsl_error_lock; int events_wq; int mapping_lock; struct address_space* mapping; int status_mutex; int status; struct ocxl_afu* afu; } ;
struct ocxl_afu {int contexts_lock; int pasid_count; scalar_t__ pasid_max; scalar_t__ pasid_base; int contexts_idr; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ocxl_context*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ocxl_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ocxl_afu*) ;

int FUNC_8(struct ocxl_context **VAR_3, struct ocxl_afu *VAR_4,
  struct address_space *VAR_5)
{
 int VAR_6;
 struct ocxl_context *VAR_7;

 *VAR_3 = FUNC_3(sizeof(struct ocxl_context), VAR_1);
 if (!*VAR_3)
  return -VAR_0;

 VAR_7 = *VAR_3;

 VAR_7->afu = VAR_4;
 FUNC_5(&VAR_4->contexts_lock);
 VAR_6 = FUNC_0(&VAR_4->contexts_idr, VAR_7, VAR_4->pasid_base,
   VAR_4->pasid_base + VAR_4->pasid_max, VAR_1);
 if (VAR_6 < 0) {
  FUNC_6(&VAR_4->contexts_lock);
  return VAR_6;
 }
 VAR_4->pasid_count++;
 FUNC_6(&VAR_4->contexts_lock);

 VAR_7->pasid = VAR_6;
 VAR_7->status = VAR_2;
 FUNC_4(&VAR_7->status_mutex);
 VAR_7->mapping = VAR_5;
 FUNC_4(&VAR_7->mapping_lock);
 FUNC_2(&VAR_7->events_wq);
 FUNC_4(&VAR_7->xsl_error_lock);
 FUNC_4(&VAR_7->irq_lock);
 FUNC_1(&VAR_7->irq_idr);
 VAR_7->tidr = 0;





 FUNC_7(VAR_4);
 return 0;
}
