
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct vnt_private {scalar_t__ sifs; int top_ofdm_basic_rate; int preamble_type; int top_cck_basic_rate; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static __le16 FUNC_2(struct vnt_private *VAR_1, u8 VAR_2,
      int VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_3) {
  if (VAR_2 == VAR_0)
   VAR_4 = FUNC_1(VAR_1->preamble_type,
            VAR_2, 14,
            VAR_1->top_cck_basic_rate);
  else
   VAR_4 = FUNC_1(VAR_1->preamble_type,
            VAR_2, 14,
            VAR_1->top_ofdm_basic_rate);

  return FUNC_0((u16)(VAR_1->sifs + VAR_4));
 }

 return 0;
}
