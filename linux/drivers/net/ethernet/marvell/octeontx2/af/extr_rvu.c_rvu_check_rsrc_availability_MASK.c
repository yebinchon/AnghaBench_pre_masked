
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rvu_pfvf {int dummy; } ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct TYPE_4__ {int max; } ;
struct rvu_block {int name; TYPE_2__ lf; int type; } ;
struct rvu {int dev; TYPE_1__* pdev; struct rvu_hwinfo* hw; } ;
struct rsrc_attach {int sso; int ssow; int timlfs; int cptlfs; scalar_t__ nixlf; scalar_t__ npalf; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int ,char*,int ) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;
 int FUNC_3 (struct rvu_pfvf*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct rvu *VAR_10,
           struct rsrc_attach *VAR_11, u16 VAR_12)
{
 struct rvu_pfvf *VAR_13 = FUNC_2(VAR_10, VAR_12);
 struct rvu_hwinfo *VAR_14 = VAR_10->hw;
 struct rvu_block *VAR_15;
 int VAR_16, VAR_17;


 if (VAR_11->npalf && !FUNC_3(VAR_13, VAR_7)) {
  VAR_15 = &VAR_14->block[VAR_2];
  VAR_16 = FUNC_4(&VAR_15->lf);
  if (!VAR_16)
   goto fail;
 } else if (VAR_11->npalf) {
  FUNC_0(&VAR_10->pdev->dev,
   "Func 0x%x: Invalid req, already has NPA\n",
    VAR_12);
  return -VAR_8;
 }


 if (VAR_11->nixlf && !FUNC_3(VAR_13, VAR_6)) {
  VAR_15 = &VAR_14->block[VAR_1];
  VAR_16 = FUNC_4(&VAR_15->lf);
  if (!VAR_16)
   goto fail;
 } else if (VAR_11->nixlf) {
  FUNC_0(&VAR_10->pdev->dev,
   "Func 0x%x: Invalid req, already has NIX\n",
   VAR_12);
  return -VAR_8;
 }

 if (VAR_11->sso) {
  VAR_15 = &VAR_14->block[VAR_3];

  if (VAR_11->sso > VAR_15->lf.max) {
   FUNC_0(&VAR_10->pdev->dev,
    "Func 0x%x: Invalid SSO req, %d > max %d\n",
     VAR_12, VAR_11->sso, VAR_15->lf.max);
   return -VAR_8;
  }
  VAR_17 = FUNC_3(VAR_13, VAR_15->type);
  VAR_16 = FUNC_4(&VAR_15->lf);

  if (VAR_11->sso > VAR_17 &&
      ((VAR_11->sso - VAR_17) > VAR_16))
   goto fail;
 }

 if (VAR_11->ssow) {
  VAR_15 = &VAR_14->block[VAR_4];
  if (VAR_11->ssow > VAR_15->lf.max) {
   FUNC_0(&VAR_10->pdev->dev,
    "Func 0x%x: Invalid SSOW req, %d > max %d\n",
     VAR_12, VAR_11->sso, VAR_15->lf.max);
   return -VAR_8;
  }
  VAR_17 = FUNC_3(VAR_13, VAR_15->type);
  VAR_16 = FUNC_4(&VAR_15->lf);
  if (VAR_11->ssow > VAR_17 &&
      ((VAR_11->ssow - VAR_17) > VAR_16))
   goto fail;
 }

 if (VAR_11->timlfs) {
  VAR_15 = &VAR_14->block[VAR_5];
  if (VAR_11->timlfs > VAR_15->lf.max) {
   FUNC_0(&VAR_10->pdev->dev,
    "Func 0x%x: Invalid TIMLF req, %d > max %d\n",
     VAR_12, VAR_11->timlfs, VAR_15->lf.max);
   return -VAR_8;
  }
  VAR_17 = FUNC_3(VAR_13, VAR_15->type);
  VAR_16 = FUNC_4(&VAR_15->lf);
  if (VAR_11->timlfs > VAR_17 &&
      ((VAR_11->timlfs - VAR_17) > VAR_16))
   goto fail;
 }

 if (VAR_11->cptlfs) {
  VAR_15 = &VAR_14->block[VAR_0];
  if (VAR_11->cptlfs > VAR_15->lf.max) {
   FUNC_0(&VAR_10->pdev->dev,
    "Func 0x%x: Invalid CPTLF req, %d > max %d\n",
     VAR_12, VAR_11->cptlfs, VAR_15->lf.max);
   return -VAR_8;
  }
  VAR_17 = FUNC_3(VAR_13, VAR_15->type);
  VAR_16 = FUNC_4(&VAR_15->lf);
  if (VAR_11->cptlfs > VAR_17 &&
      ((VAR_11->cptlfs - VAR_17) > VAR_16))
   goto fail;
 }

 return 0;

fail:
 FUNC_1(VAR_10->dev, "Request for %s failed\n", VAR_15->name);
 return -VAR_9;
}
