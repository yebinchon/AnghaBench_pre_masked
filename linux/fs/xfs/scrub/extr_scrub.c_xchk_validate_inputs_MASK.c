
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_scrub_metadata {int sm_flags; size_t sm_type; int sm_ino; int sm_gen; int sm_agno; int sm_reserved; } ;
struct TYPE_3__ {int sb_agcount; } ;
struct xfs_mount {int m_flags; TYPE_1__ m_sb; } ;
struct xchk_meta_ops {int type; int (* has ) (TYPE_1__*) ;int * scrub; int * setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 struct xchk_meta_ops* VAR_9 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(
 struct xfs_mount *VAR_10,
 struct xfs_scrub_metadata *VAR_11)
{
 int VAR_12;
 const struct xchk_meta_ops *VAR_13;

 VAR_12 = -VAR_0;

 VAR_11->sm_flags &= ~VAR_6;
 if (VAR_11->sm_flags & ~VAR_5)
  goto out;

 if (FUNC_0(VAR_11->sm_reserved, 0, sizeof(VAR_11->sm_reserved)))
  goto out;

 VAR_12 = -VAR_1;

 if (VAR_11->sm_type >= VAR_8)
  goto out;
 VAR_13 = &VAR_9[VAR_11->sm_type];
 if (VAR_13->setup == ((void*)0) || VAR_13->scrub == ((void*)0))
  goto out;

 if (VAR_13->has && !VAR_13->has(&VAR_10->m_sb))
  goto out;

 VAR_12 = -VAR_0;

 switch (VAR_13->type) {
 case 129:
 case 131:
  if (VAR_11->sm_ino || VAR_11->sm_gen || VAR_11->sm_agno)
   goto out;
  break;
 case 128:
  if (VAR_11->sm_ino || VAR_11->sm_gen ||
      VAR_11->sm_agno >= VAR_10->m_sb.sb_agcount)
   goto out;
  break;
 case 130:
  if (VAR_11->sm_agno || (VAR_11->sm_gen && !VAR_11->sm_ino))
   goto out;
  break;
 default:
  goto out;
 }







 if (VAR_11->sm_flags & VAR_7) {
  VAR_12 = -VAR_2;
  if (!FUNC_2(&VAR_10->m_sb))
   goto out;

  VAR_12 = -VAR_3;
  if (VAR_10->m_flags & VAR_4)
   goto out;
 }

 VAR_12 = 0;
out:
 return VAR_12;
}
