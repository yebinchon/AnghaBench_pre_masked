
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct wreg_addr {size_t size; size_t addr; size_t read_regs_count; size_t* read_regs; int presets; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {size_t size; size_t addr; int presets; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_6 (int ,size_t) ;
 size_t VAR_1 ;
 void* FUNC_7 (struct bnx2x*,size_t) ;
 scalar_t__ FUNC_8 (struct bnx2x*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct bnx2x*,struct wreg_addr const*) ;
 int FUNC_10 (struct bnx2x*,size_t*,size_t) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct wreg_addr VAR_4 ;
 struct wreg_addr VAR_5 ;
 struct wreg_addr VAR_6 ;
 struct wreg_addr VAR_7 ;
 struct wreg_addr VAR_8 ;

__attribute__((used)) static int FUNC_11(struct bnx2x *VAR_9, u32 *VAR_10, u32 VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;
 const struct wreg_addr *VAR_15 = ((void*)0);

 if (FUNC_0(VAR_9))
  VAR_15 = &VAR_4;
 else if (FUNC_1(VAR_9))
  VAR_15 = &VAR_5;
 else if (FUNC_2(VAR_9))
  VAR_15 = &VAR_6;
 else if (FUNC_4(VAR_9))
  VAR_15 = &VAR_7;
 else if (FUNC_5(VAR_9))
  VAR_15 = &VAR_8;


 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (FUNC_8(VAR_9, &VAR_2[VAR_12]) &&
      FUNC_6(VAR_2[VAR_12].presets, VAR_11)) {
   for (VAR_13 = 0; VAR_13 < VAR_2[VAR_12].size; VAR_13++)
    *VAR_10++ = FUNC_7(VAR_9, VAR_2[VAR_12].addr + VAR_13*4);
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if (FUNC_8(VAR_9, &VAR_3[VAR_12]) &&
      FUNC_6(VAR_3[VAR_12].presets, VAR_11)) {
   for (VAR_13 = 0; VAR_13 < VAR_3[VAR_12].size; VAR_13++)
    *VAR_10++ = FUNC_7(VAR_9, VAR_3[VAR_12].addr + VAR_13*4);
  }
 }


 if (FUNC_9(VAR_9, VAR_15) &&
     FUNC_6(VAR_15->presets, VAR_11)) {
  for (VAR_12 = 0; VAR_12 < VAR_15->size; VAR_12++) {
   *VAR_10++ = FUNC_7(VAR_9, VAR_15->addr + VAR_12*4);




   for (VAR_13 = 0; VAR_13 < VAR_15->read_regs_count; VAR_13++) {
    VAR_14 = *(VAR_15->read_regs);
    *VAR_10++ = FUNC_7(VAR_9, VAR_14 + VAR_13*4);
   }
  }
 }


 if (FUNC_2(VAR_9) || FUNC_3(VAR_9)) {

  FUNC_10(VAR_9, VAR_10, VAR_11);
 }

 return 0;
}
