
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfd_cell {int dummy; } ;
struct kempld_device_data {int feature_mask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 struct mfd_cell* VAR_9 ;
 int FUNC_0 (int ,int,struct mfd_cell*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct kempld_device_data *VAR_10)
{
 struct mfd_cell VAR_11[VAR_6];
 int VAR_12 = 0;

 if (VAR_10->feature_mask & VAR_1)
  VAR_11[VAR_12++] = VAR_9[VAR_5];

 if (VAR_10->feature_mask & VAR_2)
  VAR_11[VAR_12++] = VAR_9[VAR_8];

 if (VAR_10->feature_mask & VAR_0)
  VAR_11[VAR_12++] = VAR_9[VAR_4];

 if (VAR_10->feature_mask & VAR_3)
  VAR_11[VAR_12++] = VAR_9[VAR_7];

 return FUNC_0(VAR_10->dev, -1, VAR_11, VAR_12, ((void*)0), 0, ((void*)0));
}
