
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsp_identify {int sensor_mask; int nsp; int secondary; int primary; int br_nsp; int br_secondary; int br_primary; int flags; int version; } ;
struct nfp_nsp_identify {char* version; int sensor_mask; void* nsp; void* secondary; void* primary; int br_nsp; int br_secondary; int br_primary; int flags; } ;
struct nfp_nsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nsp_identify*) ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct nfp_nsp*) ;
 int FUNC_7 (struct nfp_nsp*) ;
 int FUNC_8 (struct nfp_nsp*,struct nsp_identify*,int) ;

struct nfp_nsp_identify *FUNC_9(struct nfp_nsp *VAR_1)
{
 struct nfp_nsp_identify *VAR_2 = ((void*)0);
 struct nsp_identify *VAR_3;
 int VAR_4;

 if (FUNC_7(VAR_1) < 15)
  return ((void*)0);

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_8(VAR_1, VAR_3, sizeof(*VAR_3));
 if (VAR_4 < 0) {
  FUNC_5(FUNC_6(VAR_1), "reading bsp version failed %d\n",
   VAR_4);
  goto exit_free;
 }

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  goto exit_free;

 FUNC_4(VAR_2->version, VAR_3->version, sizeof(VAR_2->version));
 VAR_2->version[sizeof(VAR_2->version) - 1] = '\0';
 VAR_2->flags = VAR_3->flags;
 VAR_2->br_primary = VAR_3->br_primary;
 VAR_2->br_secondary = VAR_3->br_secondary;
 VAR_2->br_nsp = VAR_3->br_nsp;
 VAR_2->primary = FUNC_2(VAR_3->primary);
 VAR_2->secondary = FUNC_2(VAR_3->secondary);
 VAR_2->nsp = FUNC_2(VAR_3->nsp);
 VAR_2->sensor_mask = FUNC_3(VAR_3->sensor_mask);

exit_free:
 FUNC_0(VAR_3);
 return VAR_2;
}
