
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct nfp_bar {scalar_t__ base; int bitsize; int barcfg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct nfp_bar *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
   u64 VAR_5, size_t VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_2(VAR_1->barcfg);
 VAR_8 = FUNC_3(VAR_1->barcfg);
 VAR_10 = FUNC_4(VAR_1->barcfg);
 VAR_9 = FUNC_0(VAR_1->barcfg);

 VAR_11 = FUNC_1(VAR_1->barcfg);
 switch (VAR_11) {
 case 132:
  VAR_11 = 4;
  break;
 case 131:
  VAR_11 = 8;
  break;
 case 133:
  VAR_11 = 0;
  break;
 default:
  VAR_11 = -1;
  break;
 }

 switch (VAR_12) {
 case 128:
  VAR_10 = -1;

 case 130:
  VAR_9 = VAR_0;
  if (VAR_3 == 0)
   VAR_3 = VAR_0;

 case 129:
  break;
 default:

  return 0;
 }


 if (VAR_11 != VAR_7)
  return 0;

 if ((VAR_8 < 0 || VAR_8 == VAR_2) &&
     (VAR_10 < 0 || VAR_10 == VAR_4) &&
     (VAR_9 == VAR_3) &&
     VAR_1->base <= VAR_5 &&
     (VAR_1->base + (1 << VAR_1->bitsize)) >= (VAR_5 + VAR_6))
  return 1;


 return 0;
}
