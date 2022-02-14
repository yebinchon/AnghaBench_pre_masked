
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vscsifrnt_info {int shadow_lock; } ;


 int FUNC_0 (struct vscsifrnt_info*,int ) ;
 int FUNC_1 (struct vscsifrnt_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct vscsifrnt_info *VAR_0, uint32_t VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->shadow_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_0->shadow_lock, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_0);
}
