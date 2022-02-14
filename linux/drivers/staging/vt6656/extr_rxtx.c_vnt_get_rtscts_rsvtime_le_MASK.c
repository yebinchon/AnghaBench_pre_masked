
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_private {int sifs; int top_ofdm_basic_rate; int preamble_type; int top_cck_basic_rate; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static __le16 FUNC_2(struct vnt_private *VAR_0, u8 VAR_1,
     u8 VAR_2, u32 VAR_3,
     u16 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = 0;
 VAR_6 = 0;
 VAR_7 = 0;
 VAR_8 = 0;

 VAR_9 = FUNC_1(VAR_0->preamble_type, VAR_2,
           VAR_3, VAR_4);

 if (VAR_1 == 0) {
  VAR_6 = FUNC_1(VAR_0->preamble_type, VAR_2,
           20, VAR_0->top_cck_basic_rate);
  VAR_8 = FUNC_1(VAR_0->preamble_type,
           VAR_2, 14,
           VAR_0->top_cck_basic_rate);
  VAR_7 = VAR_8;

 } else if (VAR_1 == 1) {
  VAR_6 = FUNC_1(VAR_0->preamble_type, VAR_2,
           20, VAR_0->top_cck_basic_rate);
  VAR_7 = FUNC_1(VAR_0->preamble_type, VAR_2,
           14, VAR_0->top_cck_basic_rate);
  VAR_8 = FUNC_1(VAR_0->preamble_type, VAR_2,
           14, VAR_0->top_ofdm_basic_rate);
 } else if (VAR_1 == 2) {
  VAR_6 = FUNC_1(VAR_0->preamble_type, VAR_2,
           20, VAR_0->top_ofdm_basic_rate);
  VAR_8 = FUNC_1(VAR_0->preamble_type,
           VAR_2, 14,
           VAR_0->top_ofdm_basic_rate);
  VAR_7 = VAR_8;

 } else if (VAR_1 == 3) {
  VAR_7 = FUNC_1(VAR_0->preamble_type, VAR_2,
           14, VAR_0->top_cck_basic_rate);
  VAR_8 = FUNC_1(VAR_0->preamble_type, VAR_2,
           14, VAR_0->top_ofdm_basic_rate);

  VAR_5 = VAR_7 + VAR_8 + VAR_9 + 2 * VAR_0->sifs;

  return FUNC_0((u16)VAR_5);
 }

 VAR_5 = VAR_6 + VAR_7 + VAR_8 + VAR_9 + 3 * VAR_0->sifs;

 return FUNC_0((u16)VAR_5);
}
