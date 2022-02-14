
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
typedef int xfs_agblock_t ;
typedef int uint64_t ;
struct xfs_rmap_irec {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; } ;
struct xchk_bmap_info {scalar_t__ whichfork; TYPE_2__* sc; scalar_t__ is_shared; } ;
struct TYPE_4__ {int rmap_cur; } ;
struct TYPE_5__ {TYPE_1__ sa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int*,int *) ;
 int FUNC_2 (int ,struct xfs_rmap_irec*,int*) ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__,unsigned int,int*) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,unsigned int,struct xfs_rmap_irec*,int*) ;

__attribute__((used)) static inline bool
FUNC_5(
 struct xchk_bmap_info *VAR_3,
 struct xfs_bmbt_irec *VAR_4,
 xfs_agblock_t VAR_5,
 uint64_t VAR_6,
 struct xfs_rmap_irec *VAR_7)
{
 xfs_fileoff_t VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 if (VAR_3->whichfork == VAR_0)
  VAR_9 |= VAR_2;





 if (VAR_3->whichfork == VAR_1)
  VAR_8 = 0;
 else
  VAR_8 = VAR_4->br_startoff;






 if (VAR_3->is_shared) {
  VAR_11 = FUNC_4(VAR_3->sc->sa.rmap_cur, VAR_5,
    VAR_6, VAR_8, VAR_9, VAR_7, &VAR_10);
  if (!FUNC_1(VAR_3->sc, &VAR_11,
    &VAR_3->sc->sa.rmap_cur))
   return 0;
  goto out;
 }




 VAR_11 = FUNC_3(VAR_3->sc->sa.rmap_cur, VAR_5, 0, VAR_6,
   VAR_8, VAR_9, &VAR_10);
 if (!FUNC_1(VAR_3->sc, &VAR_11,
   &VAR_3->sc->sa.rmap_cur))
  return 0;
 if (!VAR_10)
  goto out;

 VAR_11 = FUNC_2(VAR_3->sc->sa.rmap_cur, VAR_7, &VAR_10);
 if (!FUNC_1(VAR_3->sc, &VAR_11,
   &VAR_3->sc->sa.rmap_cur))
  return 0;

out:
 if (!VAR_10)
  FUNC_0(VAR_3->sc, VAR_3->whichfork,
   VAR_4->br_startoff);
 return VAR_10;
}
