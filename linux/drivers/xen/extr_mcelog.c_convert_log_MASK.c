
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct xen_mce {scalar_t__ apicid; int finished; int bank; int tsc; int addr; int status; int misc; int mcgcap; scalar_t__ cpuvendor; int extcpu; int cpu; int socketid; int mcgstatus; } ;
struct mcinfo_global {scalar_t__ mc_apicid; int mc_gstatus; } ;
struct mcinfo_common {scalar_t__ size; scalar_t__ type; } ;
struct mcinfo_bank {int mc_bank; int mc_tsc; int mc_addr; int mc_status; int mc_misc; } ;
struct mc_info {int dummy; } ;
typedef scalar_t__ __u8 ;
struct TYPE_4__ {scalar_t__ mc_apicid; TYPE_1__* mc_msrvalues; scalar_t__ mc_vendor; int mc_cpunr; int mc_chipid; } ;
struct TYPE_3__ {int value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (struct xen_mce*,int ,int) ;
 size_t VAR_7 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mcinfo_common**,struct mc_info*,scalar_t__) ;
 struct mcinfo_common* FUNC_4 (struct mcinfo_common*) ;
 int FUNC_5 (struct xen_mce*) ;

__attribute__((used)) static int FUNC_6(struct mc_info *VAR_8)
{
 struct mcinfo_common *VAR_9;
 struct mcinfo_global *VAR_10;
 struct mcinfo_bank *VAR_11;
 struct xen_mce VAR_12;
 uint32_t VAR_13;

 VAR_9 = ((void*)0);
 FUNC_3(&VAR_9, VAR_8, VAR_3);
 if (FUNC_2(!VAR_9)) {
  FUNC_1("Failed to find global error info\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_12, 0, sizeof(struct xen_mce));

 VAR_10 = (struct mcinfo_global *)VAR_9;
 VAR_12.mcgstatus = VAR_10->mc_gstatus;
 VAR_12.apicid = VAR_10->mc_apicid;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  if (VAR_6[VAR_13].mc_apicid == VAR_12.apicid)
   break;
 if (FUNC_2(VAR_13 == VAR_7)) {
  FUNC_1("Failed to match cpu with apicid %d\n", VAR_12.apicid);
  return -VAR_0;
 }

 VAR_12.socketid = VAR_6[VAR_13].mc_chipid;
 VAR_12.cpu = VAR_12.extcpu = VAR_6[VAR_13].mc_cpunr;
 VAR_12.cpuvendor = (__u8)VAR_6[VAR_13].mc_vendor;
 VAR_12.mcgcap = VAR_6[VAR_13].mc_msrvalues[VAR_5].value;

 VAR_9 = ((void*)0);
 FUNC_3(&VAR_9, VAR_8, VAR_1);
 if (FUNC_2(!VAR_9)) {
  FUNC_1("Fail to find bank error info\n");
  return -VAR_0;
 }

 do {
  if ((!VAR_9) || (VAR_9->size == 0) ||
      (VAR_9->type != VAR_3 &&
       VAR_9->type != VAR_1 &&
       VAR_9->type != VAR_2 &&
       VAR_9->type != VAR_4))
   break;

  if (VAR_9->type == VAR_1) {
   VAR_11 = (struct mcinfo_bank *)VAR_9;
   VAR_12.misc = VAR_11->mc_misc;
   VAR_12.status = VAR_11->mc_status;
   VAR_12.addr = VAR_11->mc_addr;
   VAR_12.tsc = VAR_11->mc_tsc;
   VAR_12.bank = VAR_11->mc_bank;
   VAR_12.finished = 1;

   FUNC_5(&VAR_12);
  }
  VAR_9 = FUNC_4(VAR_9);
 } while (1);

 return 0;
}
