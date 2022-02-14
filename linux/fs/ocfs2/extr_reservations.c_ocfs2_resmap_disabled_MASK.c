
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_reservation_map {TYPE_1__* m_osb; } ;
struct TYPE_2__ {scalar_t__ osb_resv_level; } ;



__attribute__((used)) static inline int FUNC_0(struct ocfs2_reservation_map *VAR_0)
{
 if (VAR_0->m_osb->osb_resv_level == 0)
  return 1;
 return 0;
}
