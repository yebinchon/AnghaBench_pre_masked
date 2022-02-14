
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_used_elem {int dummy; } ;


 int FUNC_0 (struct vring_used_elem*,struct vring_used_elem const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct vring_used_elem *VAR_0,
          const struct vring_used_elem *VAR_1,
          unsigned int VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2 * sizeof(*VAR_0));
 return 0;
}
