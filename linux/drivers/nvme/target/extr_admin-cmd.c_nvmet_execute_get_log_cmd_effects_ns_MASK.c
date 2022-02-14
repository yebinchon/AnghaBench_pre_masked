
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvmet_req {int dummy; } ;
struct nvme_effects_log {void** iocs; void** acs; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct nvme_effects_log*) ;
 struct nvme_effects_log* FUNC_2 (int,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_3 (struct nvmet_req*,int ,struct nvme_effects_log*,int) ;
 int FUNC_4 (struct nvmet_req*,int ) ;

__attribute__((used)) static void FUNC_5(struct nvmet_req *VAR_14)
{
 u16 VAR_15 = VAR_1;
 struct nvme_effects_log *VAR_16;

 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_0);
 if (!VAR_16)
  goto out;

 VAR_16->acs[VAR_5] = FUNC_0(1 << 0);
 VAR_16->acs[VAR_6] = FUNC_0(1 << 0);
 VAR_16->acs[VAR_2] = FUNC_0(1 << 0);
 VAR_16->acs[VAR_8] = FUNC_0(1 << 0);
 VAR_16->acs[VAR_4] = FUNC_0(1 << 0);
 VAR_16->acs[VAR_3] = FUNC_0(1 << 0);
 VAR_16->acs[VAR_7] = FUNC_0(1 << 0);

 VAR_16->iocs[VAR_11] = FUNC_0(1 << 0);
 VAR_16->iocs[VAR_12] = FUNC_0(1 << 0);
 VAR_16->iocs[VAR_10] = FUNC_0(1 << 0);
 VAR_16->iocs[VAR_9] = FUNC_0(1 << 0);
 VAR_16->iocs[VAR_13] = FUNC_0(1 << 0);

 VAR_15 = FUNC_3(VAR_14, 0, VAR_16, sizeof(*VAR_16));

 FUNC_1(VAR_16);
out:
 FUNC_4(VAR_14, VAR_15);
}
