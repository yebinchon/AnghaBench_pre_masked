
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sisl_rht_entry_f1 {int valid; int dw; int port_sel; void* fp; int lun_id; int member_0; } ;
struct sisl_rht_entry {int dummy; } ;


 void* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sisl_rht_entry_f1*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sisl_rht_entry *VAR_0, u64 VAR_1, u32 VAR_2,
   u32 VAR_3)
{





 struct sisl_rht_entry_f1 VAR_4 = { 0 };
 struct sisl_rht_entry_f1 *VAR_5 = (struct sisl_rht_entry_f1 *)VAR_0;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->fp = FUNC_0(1U, 0);
 FUNC_1();

 VAR_5->lun_id = VAR_1;
 FUNC_1();






 VAR_4.valid = 0x80;
 VAR_4.fp = FUNC_0(1U, VAR_2);
 VAR_4.port_sel = VAR_3;
 VAR_5->dw = VAR_4.dw;

 FUNC_1();
}
