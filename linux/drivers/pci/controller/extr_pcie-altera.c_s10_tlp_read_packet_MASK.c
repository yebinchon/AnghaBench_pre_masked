
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct altera_pcie {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (struct altera_pcie*,int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct altera_pcie *VAR_7, u32 *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11[4];
 u32 VAR_12;
 struct device *VAR_13 = &VAR_7->pdev->dev;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_9 = FUNC_3(VAR_7, VAR_5);
  if (VAR_9 & VAR_3) {

   VAR_11[0] = FUNC_3(VAR_7, VAR_4);
   break;
  }

  FUNC_5(5);
 }


 if (VAR_12 == VAR_6)
  return VAR_0;

 VAR_12 = 1;


 while (VAR_12 < FUNC_0(VAR_11)) {
  VAR_9 = FUNC_3(VAR_7, VAR_5);
  VAR_11[VAR_12++] = FUNC_3(VAR_7, VAR_4);
  if (VAR_9 & VAR_2) {
   VAR_10 = FUNC_2(VAR_11[1]);
   if (VAR_10)
    return VAR_0;

   if (VAR_8 && FUNC_1(VAR_11[1]) == sizeof(u32) &&
       VAR_12 == 4)
    *VAR_8 = VAR_11[3];

   return VAR_1;
  }
 }

 FUNC_4(VAR_13, "Malformed TLP packet\n");

 return VAR_0;
}
