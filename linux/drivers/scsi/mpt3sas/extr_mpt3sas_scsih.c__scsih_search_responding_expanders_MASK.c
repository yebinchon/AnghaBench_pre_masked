
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int sas_expander_list; } ;
struct TYPE_7__ {int IOCStatus; } ;
struct TYPE_6__ {int SASAddress; int DevHandle; } ;
typedef TYPE_1__ Mpi2ExpanderPage0_t ;
typedef TYPE_2__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,TYPE_2__*,TYPE_1__*,int ,int) ;
 int FUNC_6 (char*,int,unsigned long long) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_3)
{
 Mpi2ExpanderPage0_t VAR_4;
 Mpi2ConfigReply_t VAR_5;
 u16 VAR_6;
 u64 VAR_7;
 u16 VAR_8;

 FUNC_1(VAR_3, "search for expanders: start\n");

 if (FUNC_4(&VAR_3->sas_expander_list))
  goto out;

 VAR_8 = 0xFFFF;
 while (!(FUNC_5(VAR_3, &VAR_5, &VAR_4,
     VAR_2, VAR_8))) {

  VAR_6 = FUNC_2(VAR_5.IOCStatus) &
      VAR_0;
  if (VAR_6 != VAR_1)
   break;

  VAR_8 = FUNC_2(VAR_4);
  VAR_7 = FUNC_3(VAR_4);
  FUNC_6("\texpander present: handle(0x%04x), sas_addr(0x%016llx)\n",
   VAR_8,
      (unsigned long long)VAR_7);
  FUNC_0(VAR_3, &VAR_4);
 }

 out:
 FUNC_1(VAR_3, "search for expanders: complete\n");
}
