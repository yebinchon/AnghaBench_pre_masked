
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sky2_hw {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sky2_hw const*,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(const struct sky2_hw *VAR_5, int VAR_6, u16 VAR_7)
{
 unsigned long VAR_8 = VAR_4;

 while ( (FUNC_2(VAR_5, VAR_6 + VAR_2) & VAR_3) == VAR_7) {

  if (FUNC_3(VAR_4, VAR_8 + VAR_1/4)) {
   FUNC_0(&VAR_5->pdev->dev, "VPD cycle timed out\n");
   return -VAR_0;
  }
  FUNC_1(1);
 }

 return 0;
}
