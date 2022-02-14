
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vringh {int dummy; } ;
struct vring_used_elem {void* len; void* id; } ;


 int FUNC_0 (struct vringh*,struct vring_used_elem*,int,int ,int ) ;
 void* FUNC_1 (struct vringh*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct vringh *VAR_2, u16 VAR_3, u32 VAR_4)
{
 struct vring_used_elem VAR_5;

 VAR_5.id = FUNC_1(VAR_2, VAR_3);
 VAR_5.len = FUNC_1(VAR_2, VAR_4);

 return FUNC_0(VAR_2, &VAR_5, 1, VAR_0, VAR_1);
}
