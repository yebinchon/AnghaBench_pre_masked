
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct nvmf_disc_rsp_page_hdr {struct nvmf_disc_rsp_page_entry* entries; } ;
struct TYPE_4__ {int common; } ;
struct nvmf_disc_rsp_page_entry {int subnqn; TYPE_1__ tsas; int traddr; int trsvcid; int subtype; void* asqsz; void* cntlid; int portid; int treq; int adrfam; int trtype; } ;
struct TYPE_5__ {char* common; } ;
struct TYPE_6__ {char* trsvcid; TYPE_2__ tsas; int portid; int treq; int adrfam; int trtype; } ;
struct nvmet_port {TYPE_3__ disc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct nvmf_disc_rsp_page_hdr *VAR_6,
  struct nvmet_port *VAR_7, char *VAR_8, char *VAR_9,
  u8 VAR_10, u32 VAR_11)
{
 struct nvmf_disc_rsp_page_entry *VAR_12 = &VAR_6->entries[VAR_11];

 VAR_12->trtype = VAR_7->disc_addr.trtype;
 VAR_12->adrfam = VAR_7->disc_addr.adrfam;
 VAR_12->treq = VAR_7->disc_addr.treq;
 VAR_12->portid = VAR_7->disc_addr.portid;

 VAR_12->cntlid = FUNC_0(VAR_1);
 VAR_12->asqsz = FUNC_0(VAR_0);
 VAR_12->subtype = VAR_10;
 FUNC_1(VAR_12->trsvcid, VAR_7->disc_addr.trsvcid, VAR_4);
 FUNC_1(VAR_12->traddr, VAR_9, VAR_3);
 FUNC_1(VAR_12->tsas.common, VAR_7->disc_addr.tsas.common, VAR_5);
 FUNC_2(VAR_12->subnqn, VAR_8, VAR_2);
}
