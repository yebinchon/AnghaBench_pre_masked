
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_private {int sifs; scalar_t__ top_ofdm_basic_rate; int preamble_type; scalar_t__ top_cck_basic_rate; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static u32 FUNC_1(struct vnt_private *VAR_1, u8 VAR_2,
      u32 VAR_3, u16 VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_1->preamble_type, VAR_2,
           VAR_3, VAR_4);

 if (VAR_2 == VAR_0)
  VAR_7 = FUNC_0(VAR_1->preamble_type, VAR_2,
           14, (u16)VAR_1->top_cck_basic_rate);
 else
  VAR_7 = FUNC_0(VAR_1->preamble_type, VAR_2,
           14, (u16)VAR_1->top_ofdm_basic_rate);

 if (VAR_5)
  return VAR_6 + VAR_1->sifs + VAR_7;

 return VAR_6;
}
