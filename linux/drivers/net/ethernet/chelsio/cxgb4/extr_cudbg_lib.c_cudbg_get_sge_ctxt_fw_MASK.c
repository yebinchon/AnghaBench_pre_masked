
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u32 ;
struct cudbg_init {int dummy; } ;
struct cudbg_ch_cntxt {scalar_t__ cntxt_id; void* cntxt_type; int data; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct cudbg_init*,scalar_t__,void*,int ) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void FUNC_2(struct cudbg_init *VAR_2, u32 VAR_3,
      u8 VAR_4,
      struct cudbg_ch_cntxt **VAR_5)
{
 struct cudbg_ch_cntxt *VAR_6 = *VAR_5;
 int VAR_7;
 u32 VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  FUNC_0(VAR_2, VAR_8, VAR_4, VAR_6->data);
  VAR_7 = FUNC_1(VAR_6->data, VAR_4);
  if (!VAR_7)
   continue;

  VAR_6->cntxt_type = VAR_4;
  VAR_6->cntxt_id = VAR_8;
  VAR_6++;
  if (VAR_4 == VAR_1) {
   FUNC_0(VAR_2, VAR_8, VAR_0, VAR_6->data);
   VAR_6->cntxt_type = VAR_0;
   VAR_6->cntxt_id = VAR_8;
   VAR_6++;
  }
 }

 *VAR_5 = VAR_6;
}
