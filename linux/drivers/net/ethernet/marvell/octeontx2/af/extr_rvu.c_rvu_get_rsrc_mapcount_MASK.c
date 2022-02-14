
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvu_pfvf {int sso; int ssow; int timlfs; int cptlfs; int nixlf; int npalf; } ;
__attribute__((used)) static u16 FUNC_0(struct rvu_pfvf *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 131:
  return VAR_0->npalf ? 1 : 0;
 case 132:
  return VAR_0->nixlf ? 1 : 0;
 case 130:
  return VAR_0->sso;
 case 129:
  return VAR_0->ssow;
 case 128:
  return VAR_0->timlfs;
 case 133:
  return VAR_0->cptlfs;
 }
 return 0;
}
