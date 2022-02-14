
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmc_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mmc_card*,scalar_t__*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_3, u32 *VAR_4,
           u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0;

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 do {
  VAR_6 = FUNC_2(VAR_3, VAR_4, 5);
  if (VAR_6)
   break;

  if (!FUNC_1(*VAR_4) &&
    (FUNC_0(*VAR_4) != VAR_2))
   break;






  FUNC_3(1000, 5000);
 } while (++VAR_7 < VAR_5);

 if (VAR_7 == VAR_5)
  VAR_6 = -VAR_1;

 return VAR_6;
}
