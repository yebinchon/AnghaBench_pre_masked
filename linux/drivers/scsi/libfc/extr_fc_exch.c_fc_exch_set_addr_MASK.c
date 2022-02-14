
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct fc_exch {int esb_stat; void* did; void* sid; void* oid; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fc_exch *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 VAR_1->oid = VAR_2;
 if (VAR_1->esb_stat & VAR_0) {
  VAR_1->sid = VAR_3;
  VAR_1->did = VAR_2;
 } else {
  VAR_1->sid = VAR_2;
  VAR_1->did = VAR_3;
 }
}
