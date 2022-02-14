
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dwc2_hsotg {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (struct dwc2_hsotg*,unsigned int) ;

__attribute__((used)) static u32 FUNC_3(struct dwc2_hsotg *VAR_5,
       unsigned int VAR_6, int VAR_7)
{
 u32 VAR_8 = VAR_7 ? VAR_1 : VAR_3;
 u32 VAR_9 = VAR_7 ? FUNC_0(VAR_6) : FUNC_1(VAR_6);
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_2(VAR_5, VAR_8);
 VAR_12 = FUNC_2(VAR_5, VAR_0);
 VAR_11 |= ((VAR_12 >> VAR_6) & 0x1) ? VAR_2 : 0;
 VAR_11 |= VAR_4;

 VAR_10 = FUNC_2(VAR_5, VAR_9);
 VAR_10 &= VAR_11;
 return VAR_10;
}
