
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef size_t u32 ;
struct nfp_bar {int bitsize; } ;
struct nfp6000_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (struct nfp_bar const*) ;
 int FUNC_6 (struct nfp_bar const*) ;

__attribute__((used)) static int
FUNC_7(const struct nfp6000_pcie *VAR_8, const struct nfp_bar *VAR_9,
     u32 *VAR_10, u64 *VAR_11,
     int VAR_12, int VAR_13, int VAR_14, u64 VAR_15, size_t VAR_16, int VAR_17)
{
 int VAR_18;
 u32 VAR_19;

 if (VAR_12 >= VAR_2)
  return -VAR_0;

 switch (VAR_17) {
 case 8:
  VAR_19 = FUNC_1(
   VAR_5);
  break;
 case 4:
  VAR_19 = FUNC_1(
   VAR_4);
  break;
 case 0:
  VAR_19 = FUNC_1(
   VAR_3);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13 != VAR_1 && VAR_13 != 0) {

  u64 VAR_20 = ~(FUNC_6(VAR_9) - 1);

  VAR_19 |= FUNC_2(
     VAR_7);
  VAR_19 |= FUNC_3(VAR_12);
  VAR_19 |= FUNC_0(VAR_13);
  VAR_19 |= FUNC_4(VAR_14);

  if ((VAR_15 & VAR_20) != ((VAR_15 + VAR_16 - 1) & VAR_20))
   return -VAR_0;
  VAR_15 &= VAR_20;

  VAR_18 = 40 - 16;
 } else {
  u64 VAR_21 = ~(FUNC_5(VAR_9) - 1);


  VAR_19 |= FUNC_2(
   VAR_6);
  VAR_19 |= FUNC_3(VAR_12);
  VAR_19 |= FUNC_4(VAR_14);

  if ((VAR_15 & VAR_21) != ((VAR_15 + VAR_16 - 1) & VAR_21))
   return -VAR_0;

  VAR_15 &= VAR_21;

  VAR_18 = 40 - 21;
 }

 if (VAR_9->bitsize < VAR_18)
  return -VAR_0;

 VAR_19 |= VAR_15 >> VAR_18;

 if (VAR_11)
  *VAR_11 = VAR_15;

 if (VAR_10)
  *VAR_10 = VAR_19;

 return 0;
}
