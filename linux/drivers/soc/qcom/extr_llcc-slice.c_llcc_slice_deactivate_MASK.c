
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct llcc_slice_desc {int slice_id; } ;
struct TYPE_4__ {int lock; int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct llcc_slice_desc*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct llcc_slice_desc *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4);

 if (FUNC_1(VAR_5))
  return -VAR_3;

 FUNC_5(&VAR_4->lock);
 if (!FUNC_7(VAR_5->slice_id, VAR_4->bitmap)) {
  FUNC_6(&VAR_4->lock);
  return 0;
 }
 VAR_6 = VAR_1 << VAR_2;

 VAR_7 = FUNC_4(VAR_5->slice_id, VAR_6,
      VAR_0);
 if (VAR_7) {
  FUNC_6(&VAR_4->lock);
  return VAR_7;
 }

 FUNC_3(VAR_5->slice_id, VAR_4->bitmap);
 FUNC_6(&VAR_4->lock);

 return VAR_7;
}
