
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int bmap; } ;
struct rvu_pfvf {int sso; int ssow; int timlfs; int cptlfs; TYPE_2__ msix; } ;
struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;
struct msix_offset_rsp {int sso; int ssow; int timlfs; int cptlfs; void** cptlf_msixoff; void** timlf_msixoff; void** ssow_msixoff; void** sso_msixoff; void* nix_msixoff; void* npa_msixoff; } ;
struct TYPE_3__ {int pcifunc; } ;
struct msg_req {TYPE_1__ hdr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct rvu*,int *,int ,int) ;
 void* FUNC_1 (struct rvu*,struct rvu_pfvf*,size_t,int) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;

__attribute__((used)) static int FUNC_3(struct rvu *VAR_6, struct msg_req *VAR_7,
     struct msix_offset_rsp *VAR_8)
{
 struct rvu_hwinfo *VAR_9 = VAR_6->hw;
 u16 VAR_10 = VAR_7->hdr.pcifunc;
 struct rvu_pfvf *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_2(VAR_6, VAR_10);
 if (!VAR_11->msix.bmap)
  return 0;


 VAR_12 = FUNC_0(VAR_6, &VAR_9->block[VAR_2], VAR_10, 0);
 VAR_8->npa_msixoff = FUNC_1(VAR_6, VAR_11, VAR_2, VAR_12);

 VAR_12 = FUNC_0(VAR_6, &VAR_9->block[VAR_1], VAR_10, 0);
 VAR_8->nix_msixoff = FUNC_1(VAR_6, VAR_11, VAR_1, VAR_12);

 VAR_8->sso = VAR_11->sso;
 for (VAR_13 = 0; VAR_13 < VAR_8->sso; VAR_13++) {
  VAR_12 = FUNC_0(VAR_6, &VAR_9->block[VAR_3], VAR_10, VAR_13);
  VAR_8->sso_msixoff[VAR_13] =
   FUNC_1(VAR_6, VAR_11, VAR_3, VAR_12);
 }

 VAR_8->ssow = VAR_11->ssow;
 for (VAR_13 = 0; VAR_13 < VAR_8->ssow; VAR_13++) {
  VAR_12 = FUNC_0(VAR_6, &VAR_9->block[VAR_4], VAR_10, VAR_13);
  VAR_8->ssow_msixoff[VAR_13] =
   FUNC_1(VAR_6, VAR_11, VAR_4, VAR_12);
 }

 VAR_8->timlfs = VAR_11->timlfs;
 for (VAR_13 = 0; VAR_13 < VAR_8->timlfs; VAR_13++) {
  VAR_12 = FUNC_0(VAR_6, &VAR_9->block[VAR_5], VAR_10, VAR_13);
  VAR_8->timlf_msixoff[VAR_13] =
   FUNC_1(VAR_6, VAR_11, VAR_5, VAR_12);
 }

 VAR_8->cptlfs = VAR_11->cptlfs;
 for (VAR_13 = 0; VAR_13 < VAR_8->cptlfs; VAR_13++) {
  VAR_12 = FUNC_0(VAR_6, &VAR_9->block[VAR_0], VAR_10, VAR_13);
  VAR_8->cptlf_msixoff[VAR_13] =
   FUNC_1(VAR_6, VAR_11, VAR_0, VAR_12);
 }
 return 0;
}
