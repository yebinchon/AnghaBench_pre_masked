
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,scalar_t__) ;
 int FUNC_2 (struct lan743x_adapter*) ;
 int FUNC_3 (struct lan743x_adapter*) ;

__attribute__((used)) static int FUNC_4(struct lan743x_adapter *VAR_7,
          u32 VAR_8, u32 VAR_9, u8 *VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 int VAR_13;

 if (VAR_8 + VAR_9 > VAR_6)
  return -VAR_5;

 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11)
  return VAR_11;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_12 = VAR_2 | VAR_3;
  VAR_12 |= (VAR_8 & VAR_1);
  FUNC_1(VAR_7, VAR_0, VAR_12);

  VAR_11 = FUNC_3(VAR_7);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_12 = FUNC_0(VAR_7, VAR_4);
  VAR_10[VAR_13] = VAR_12 & 0xFF;
  VAR_8++;
 }

 return 0;
}
