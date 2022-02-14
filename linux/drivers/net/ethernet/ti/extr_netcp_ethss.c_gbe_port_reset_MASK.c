
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gbe_slave {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gbe_slave*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct gbe_slave *VAR_6)
{
 u32 VAR_7, VAR_8;


 FUNC_2(VAR_2, FUNC_0(VAR_6, VAR_4, VAR_5));


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = FUNC_1(FUNC_0(VAR_6, VAR_4, VAR_5));
  if ((VAR_8 & VAR_3) != VAR_2)
   return 0;
 }


 return VAR_1;
}
