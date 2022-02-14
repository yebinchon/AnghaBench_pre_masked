
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ) ;
 int FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (struct lan743x_adapter*) ;
 int FUNC_3 (struct lan743x_adapter*,scalar_t__) ;
 int FUNC_4 (struct lan743x_adapter*) ;

__attribute__((used)) static int FUNC_5(struct lan743x_adapter *VAR_9, u32 VAR_10,
        u32 VAR_11, u8 *VAR_12)
{
 int VAR_13;
 int VAR_14;

 if (VAR_10 + VAR_11 > VAR_1)
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_9);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_0(VAR_9, VAR_5, VAR_6);

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  FUNC_3(VAR_9, VAR_10 + VAR_14);

  FUNC_0(VAR_9, VAR_4, VAR_12[VAR_14]);
  FUNC_0(VAR_9, VAR_7, VAR_8);
  FUNC_0(VAR_9, VAR_2, VAR_3);

  VAR_13 = FUNC_4(VAR_9);
  if (VAR_13 < 0)
   return VAR_13;
 }

 FUNC_1(VAR_9);

 return 0;
}
