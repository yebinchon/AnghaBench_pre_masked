
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xfs_scrub {TYPE_4__* ip; int tp; TYPE_3__* mp; TYPE_2__* sm; } ;
typedef int __u32 ;
struct TYPE_7__ {int di_flags; } ;
struct TYPE_10__ {int i_ino; TYPE_1__ i_d; } ;
struct TYPE_9__ {int m_sb; } ;
struct TYPE_8__ {int sm_flags; int sm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfs_scrub*) ;
 int FUNC_1 (struct xfs_scrub*,int ,int ,int*) ;
 int FUNC_2 (struct xfs_scrub*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,TYPE_4__*,int*) ;
 scalar_t__ FUNC_6 (int *) ;

int
FUNC_7(
 struct xfs_scrub *VAR_4)
{
 __u32 VAR_5;
 bool VAR_6;
 int VAR_7;

 if (VAR_4->sm->sm_flags & VAR_2)
  return 0;


 if (VAR_4->ip->i_d.di_flags & VAR_1) {
  FUNC_2(VAR_4, VAR_4->ip->i_ino);
  return 0;
 }


 if (FUNC_4(VAR_4->ip)) {
  FUNC_2(VAR_4, VAR_4->ip->i_ino);
  return 0;
 }


 if (FUNC_3(VAR_4->ip)) {
  FUNC_2(VAR_4, VAR_4->ip->i_ino);
  return 0;
 }


 VAR_5 = VAR_4->sm->sm_type;
 VAR_4->sm->sm_type = VAR_3;
 VAR_7 = FUNC_0(VAR_4);
 VAR_4->sm->sm_type = VAR_5;
 if (VAR_7 || (VAR_4->sm->sm_flags & VAR_2))
  return VAR_7;


 if (FUNC_6(&VAR_4->mp->m_sb)) {
  VAR_7 = FUNC_5(VAR_4->tp, VAR_4->ip,
    &VAR_6);
  if (!FUNC_1(VAR_4, VAR_0, 0,
    &VAR_7))
   return VAR_7;
  if (VAR_6)
   FUNC_2(VAR_4, VAR_4->ip->i_ino);
 }

 return VAR_7;
}
