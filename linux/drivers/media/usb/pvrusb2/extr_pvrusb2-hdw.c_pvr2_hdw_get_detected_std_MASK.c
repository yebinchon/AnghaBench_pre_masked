
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct pvr2_hdw {int v4l2_dev; scalar_t__ std_mask_avail; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static v4l2_std_id FUNC_1(struct pvr2_hdw *VAR_2)
{
 v4l2_std_id VAR_3;
 VAR_3 = (v4l2_std_id)VAR_2->std_mask_avail;
 FUNC_0(&VAR_2->v4l2_dev, 0,
        VAR_1, VAR_0, &VAR_3);
 return VAR_3;
}
