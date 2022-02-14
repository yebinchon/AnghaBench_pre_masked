
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (struct lan743x_adapter*) ;
 int FUNC_3 (struct lan743x_adapter*) ;
 int FUNC_4 (struct lan743x_adapter*,scalar_t__) ;
 int FUNC_5 (struct lan743x_adapter*) ;

__attribute__((used)) static int FUNC_6(struct lan743x_adapter *VAR_3, u32 VAR_4,
       u32 VAR_5, u8 *VAR_6)
{
 int VAR_7;
 int VAR_8;

 if (VAR_4 + VAR_5 > VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_4(VAR_3, VAR_4 + VAR_8);

  FUNC_3(VAR_3);
  VAR_7 = FUNC_5(VAR_3);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_6[VAR_8] = FUNC_0(VAR_3, VAR_2);
 }

 FUNC_1(VAR_3);

 return 0;
}
