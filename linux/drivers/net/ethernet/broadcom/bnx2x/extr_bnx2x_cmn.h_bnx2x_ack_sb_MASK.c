
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ int_block; } ;
struct bnx2x {scalar_t__ igu_dsb_id; TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_4, u8 VAR_5, u8 VAR_6,
    u16 VAR_7, u8 VAR_8, u8 VAR_9)
{
 if (VAR_4->common.int_block == VAR_3)
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 else {
  u8 VAR_10;

  if (FUNC_0(VAR_4))
   VAR_10 = VAR_6;
  else if (VAR_5 != VAR_4->igu_dsb_id)
   VAR_10 = VAR_2;
  else if (VAR_6 == VAR_0)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_2;
  FUNC_2(VAR_4, VAR_5, VAR_10, VAR_7, VAR_8, VAR_9);
 }
}
