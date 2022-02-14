
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_sste {void* esid_data; void* vsid_data; } ;
struct cxl_context {int sstp; int sste_lock; } ;
struct copro_slb {int esid; int vsid; } ;


 void* FUNC_0 (int ) ;
 struct cxl_sste* FUNC_1 (struct cxl_context*,struct copro_slb*) ;
 int FUNC_2 (char*,struct cxl_sste*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct cxl_context*,struct cxl_sste*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct cxl_context *VAR_0, struct copro_slb *VAR_1)
{

 struct cxl_sste *VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_0->sste_lock, VAR_3);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  goto out_unlock;

 FUNC_2("CXL Populating SST[%li]: %#llx %#llx\n",
   VAR_2 - VAR_0->sstp, VAR_1->vsid, VAR_1->esid);
 FUNC_5(VAR_0, VAR_2 - VAR_0->sstp, VAR_1->esid, VAR_1->vsid);

 VAR_2->vsid_data = FUNC_0(VAR_1->vsid);
 VAR_2->esid_data = FUNC_0(VAR_1->esid);
out_unlock:
 FUNC_4(&VAR_0->sste_lock, VAR_3);
}
