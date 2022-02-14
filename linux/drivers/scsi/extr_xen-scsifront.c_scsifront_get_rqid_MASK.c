
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsifrnt_info {int shadow_lock; int shadow_free_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct vscsifrnt_info *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1->shadow_lock, VAR_2);

 VAR_3 = FUNC_1(VAR_1->shadow_free_bitmap, VAR_0);
 FUNC_0(VAR_3, VAR_1->shadow_free_bitmap);

 FUNC_3(&VAR_1->shadow_lock, VAR_2);

 return VAR_3;
}
