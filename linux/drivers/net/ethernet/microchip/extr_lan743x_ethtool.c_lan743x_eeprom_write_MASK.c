
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
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lan743x_adapter*,int ,scalar_t__) ;
 int FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (struct lan743x_adapter*) ;

__attribute__((used)) static int FUNC_3(struct lan743x_adapter *VAR_8,
    u32 VAR_9, u32 VAR_10, u8 *VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 int VAR_14;

 if (VAR_9 + VAR_10 > VAR_7)
  return -VAR_6;

 VAR_12 = FUNC_1(VAR_8);
 if (VAR_12)
  return VAR_12;


 VAR_13 = VAR_2 | VAR_3;
 FUNC_0(VAR_8, VAR_0, VAR_13);

 VAR_12 = FUNC_2(VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {

  VAR_13 = VAR_11[VAR_14];
  FUNC_0(VAR_8, VAR_5, VAR_13);


  VAR_13 = VAR_2 | VAR_4;
  VAR_13 |= (VAR_9 & VAR_1);
  FUNC_0(VAR_8, VAR_0, VAR_13);

  VAR_12 = FUNC_2(VAR_8);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_9++;
 }

 return 0;
}
