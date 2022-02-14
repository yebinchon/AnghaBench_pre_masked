
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpdma_dtd {int dummy; } ;
struct vpdma_desc_list {int buf; } ;
struct vpdma_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct vpdma_desc_list*,int) ;
 int FUNC_2 (struct vpdma_desc_list*,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vpdma_data*,int) ;
 int FUNC_5 (struct vpdma_data*,int *) ;
 int FUNC_6 (struct vpdma_data*,struct vpdma_desc_list*,int) ;
 int FUNC_7 (struct vpdma_data*,int *) ;
 int FUNC_8 (struct vpdma_data*,int ,int) ;

int FUNC_9(struct vpdma_data *VAR_5, int VAR_6,
  int *VAR_7, int VAR_8)
{
 struct vpdma_desc_list VAR_9;
 int VAR_10, VAR_11, VAR_12 = 500;

 FUNC_8(VAR_5, VAR_1,
   (VAR_6 << VAR_2) |
   (1 << VAR_3));

 if (VAR_8 <= 0 || !VAR_7)
  return 0;

 VAR_11 = FUNC_2(&VAR_9,
  VAR_8 * sizeof(struct vpdma_dtd), VAR_4);
 if (VAR_11)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
  FUNC_1(&VAR_9, VAR_7[VAR_10]);

 VAR_11 = FUNC_5(VAR_5, &VAR_9.buf);
 if (VAR_11)
  goto free_desc;
 VAR_11 = FUNC_6(VAR_5, &VAR_9, VAR_6);
 if (VAR_11)
  goto unmap_desc;

 while (FUNC_4(VAR_5, VAR_6) && --VAR_12)
  ;

 if (VAR_12 == 0) {
  FUNC_0(&VAR_5->pdev->dev, "Timed out cleaning up VPDMA list\n");
  VAR_11 = -VAR_0;
 }

unmap_desc:
 FUNC_7(VAR_5, &VAR_9.buf);
free_desc:
 FUNC_3(&VAR_9.buf);

 return VAR_11;
}
