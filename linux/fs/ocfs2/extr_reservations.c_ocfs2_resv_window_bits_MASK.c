
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_resv_level; int osb_dir_resv_level; } ;
struct ocfs2_reservation_map {struct ocfs2_super* m_osb; } ;
struct ocfs2_alloc_reservation {int r_flags; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct ocfs2_reservation_map *VAR_1,
        struct ocfs2_alloc_reservation *VAR_2)
{
 struct ocfs2_super *VAR_3 = VAR_1->m_osb;
 unsigned int VAR_4;

 if (!(VAR_2->r_flags & VAR_0)) {

  VAR_4 = 4 << VAR_3->osb_resv_level;
 } else {
  VAR_4 = 4 << VAR_3->osb_dir_resv_level;
 }
 return VAR_4;
}
