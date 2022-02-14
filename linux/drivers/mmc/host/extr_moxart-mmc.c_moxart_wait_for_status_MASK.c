
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct moxart_host {int mmc; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct moxart_host *VAR_4,
      u32 VAR_5, u32 *VAR_6)
{
 int VAR_7 = -VAR_0;
 u32 VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  *VAR_6 = FUNC_2(VAR_4->base + VAR_3);
  if (!(*VAR_6 & VAR_5)) {
   FUNC_3(5);
   continue;
  }
  FUNC_4(*VAR_6 & VAR_5, VAR_4->base + VAR_2);
  VAR_7 = 0;
  break;
 }

 if (VAR_7)
  FUNC_0(FUNC_1(VAR_4->mmc), "timed out waiting for status\n");

 return VAR_7;
}
