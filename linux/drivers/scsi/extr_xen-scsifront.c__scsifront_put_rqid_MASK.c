
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vscsifrnt_info {scalar_t__ wait_ring_available; int ** shadow; int shadow_free_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vscsifrnt_info *VAR_1, uint32_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1->shadow_free_bitmap, VAR_0);

 FUNC_0(VAR_2, VAR_1->shadow_free_bitmap);
 VAR_1->shadow[VAR_2] = ((void*)0);

 return VAR_3 || VAR_1->wait_ring_available;
}
