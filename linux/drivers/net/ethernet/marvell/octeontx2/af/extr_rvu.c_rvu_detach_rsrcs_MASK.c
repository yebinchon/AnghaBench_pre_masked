
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct TYPE_2__ {int bmap; } ;
struct rvu_block {int type; TYPE_1__ lf; } ;
struct rvu {int rsrc_lock; struct rvu_hwinfo* hw; } ;
struct rsrc_detach {int cptlfs; int timlfs; int ssow; int sso; int nixlf; int npalf; scalar_t__ partial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rvu *VAR_7, struct rsrc_detach *VAR_8,
       u16 VAR_9)
{
 struct rvu_hwinfo *VAR_10 = VAR_7->hw;
 bool VAR_11 = 1;
 struct rvu_block *VAR_12;
 int VAR_13;

 FUNC_0(&VAR_7->rsrc_lock);


 if (VAR_8 && VAR_8->partial)
  VAR_11 = 0;




 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_12 = &VAR_10->block[VAR_13];
  if (!VAR_12->lf.bmap)
   continue;
  if (!VAR_11 && VAR_8) {
   if (VAR_13 == VAR_2 && !VAR_8->npalf)
    continue;
   else if ((VAR_13 == VAR_1) && !VAR_8->nixlf)
    continue;
   else if ((VAR_13 == VAR_3) && !VAR_8->sso)
    continue;
   else if ((VAR_13 == VAR_4) && !VAR_8->ssow)
    continue;
   else if ((VAR_13 == VAR_5) && !VAR_8->timlfs)
    continue;
   else if ((VAR_13 == VAR_0) && !VAR_8->cptlfs)
    continue;
  }
  FUNC_2(VAR_7, VAR_9, VAR_12->type);
 }

 FUNC_1(&VAR_7->rsrc_lock);
 return 0;
}
