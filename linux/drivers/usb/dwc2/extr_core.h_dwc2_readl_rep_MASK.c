
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (struct dwc2_hsotg*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct dwc2_hsotg *VAR_0, u32 VAR_1,
      void *VAR_2, unsigned int VAR_3)
{
 if (VAR_3) {
  u32 *VAR_4 = VAR_2;

  do {
   u32 VAR_5 = FUNC_0(VAR_0, VAR_1);
   *VAR_4++ = VAR_5;
  } while (--VAR_3);
 }
}
