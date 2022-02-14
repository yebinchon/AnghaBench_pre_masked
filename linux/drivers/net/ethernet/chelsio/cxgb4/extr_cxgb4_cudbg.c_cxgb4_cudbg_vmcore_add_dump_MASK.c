
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmcoredd_data {int size; int vmcoredd_callback; int dump_name; } ;
struct cudbg_hdr {int dummy; } ;
struct cudbg_entity_hdr {int dummy; } ;
struct adapter {char* name; struct vmcoredd_data vmcoredd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,int,char*,char*,char*) ;
 int FUNC_1 (struct vmcoredd_data*) ;

int FUNC_2(struct adapter *VAR_4)
{
 struct vmcoredd_data *VAR_5 = &VAR_4->vmcoredd;
 u32 VAR_6;

 VAR_6 = sizeof(struct cudbg_hdr) +
       sizeof(struct cudbg_entity_hdr) * VAR_1;
 VAR_6 += VAR_0;

 VAR_5->size = VAR_6;
 FUNC_0(VAR_5->dump_name, sizeof(VAR_5->dump_name), "%s_%s",
   VAR_3, VAR_4->name);
 VAR_5->vmcoredd_callback = VAR_2;

 return FUNC_1(VAR_5);
}
