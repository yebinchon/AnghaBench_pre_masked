
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;




 VAR_4 = FUNC_0(1ul, VAR_0 / VAR_2);
 VAR_3 = FUNC_2(VAR_1, VAR_4);

 if (VAR_1 != VAR_3)
  FUNC_1("Rounding down aligned max_sectors from %u to %u\n",
   VAR_1, VAR_3);

 return VAR_3;
}
