
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
typedef int s32 ;
typedef enum shf_sc { ____Placeholder_shf_sc } shf_sc ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct nfp_prog*,int ,unsigned int,int ,int,int) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct nfp_prog *VAR_5, u8 VAR_6, u8 VAR_7, s32 VAR_8,
        unsigned int VAR_9, bool VAR_10, bool VAR_11, bool VAR_12, bool VAR_13,
        bool VAR_14)
{
 bool VAR_15 = VAR_14 && VAR_11 && !VAR_12;
 u32 VAR_16, VAR_17;
 enum shf_sc VAR_18;
 swreg VAR_19;
 int VAR_20;
 u8 VAR_21;

 if (FUNC_0(VAR_7 + VAR_9 > 4 || VAR_8 % 4 + VAR_9 > 4))
  return -VAR_0;

 VAR_16 = VAR_8 / 4;


 if (VAR_9 == 4) {
  FUNC_8(VAR_5,
   VAR_15 ? FUNC_6(3) : FUNC_5(VAR_13 ? 3 : 0, VAR_16),
   FUNC_4(VAR_6));
  return 0;
 }

 if (FUNC_0(VAR_13 && VAR_16 > VAR_1))
  return -VAR_0;

 VAR_17 = VAR_8 % 4;

 VAR_21 = (1 << VAR_9) - 1;
 VAR_21 <<= VAR_17;

 if (FUNC_0(VAR_21 > 0xf))
  return -VAR_0;

 VAR_20 = FUNC_1(VAR_7 - VAR_17) * 8;
 if (VAR_7 == VAR_17) {
  VAR_18 = VAR_3;
 } else if (VAR_7 < VAR_17) {
  VAR_20 = 32 - VAR_20;
  VAR_18 = VAR_2;
 } else {
  VAR_18 = VAR_4;
 }




 if (VAR_16 <= VAR_1) {
  VAR_19 = FUNC_5(VAR_13 ? 3 : 0, VAR_16);
 } else {
  VAR_19 = FUNC_3(VAR_5);



  if (VAR_10 || VAR_12)
   FUNC_8(VAR_5, VAR_19, FUNC_5(0, VAR_16));
 }

 FUNC_2(VAR_5, VAR_19, VAR_21, FUNC_4(VAR_6), VAR_18, VAR_20);

 if (VAR_11 || VAR_12) {
  if (VAR_16 > VAR_1)
   FUNC_8(VAR_5, FUNC_5(0, VAR_16), VAR_19);
  if (VAR_15)
   FUNC_8(VAR_5, FUNC_7(), FUNC_6(3));
 }

 return 0;
}
