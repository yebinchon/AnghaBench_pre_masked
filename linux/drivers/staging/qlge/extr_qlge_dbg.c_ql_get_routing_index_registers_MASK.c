
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ql_adapter*,int ) ;
 int FUNC_1 (struct ql_adapter*,int ) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_7, u32 *VAR_8)
{
 int VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 VAR_9 = FUNC_1(VAR_7, VAR_6);
 if (VAR_9)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  if (VAR_10 < 2)
   VAR_12 = 8;
  else
   VAR_12 = 16;
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   VAR_15 = VAR_4
    | (VAR_10 << VAR_5)
    | (VAR_11 << VAR_2);
   FUNC_3(VAR_7, VAR_1, VAR_15);
   VAR_13 = 0;
   while ((VAR_13 & VAR_3) == 0)
    VAR_13 = FUNC_0(VAR_7, VAR_1);
   VAR_14 = FUNC_0(VAR_7, VAR_0);
   *VAR_8 = VAR_10;
   VAR_8++;
   *VAR_8 = VAR_11;
   VAR_8++;
   *VAR_8 = VAR_13;
   VAR_8++;
   *VAR_8 = VAR_14;
   VAR_8++;
  }
 }
 FUNC_2(VAR_7, VAR_6);
 return VAR_9;
}
