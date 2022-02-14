
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sm_oob {scalar_t__ lba_copy2; scalar_t__ lba_copy1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sm_oob*,int const*,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sm_oob *VAR_1)
{
 static const uint32_t VAR_2[4] = {
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF };

 uint16_t VAR_3;
 int VAR_4;


 if (!FUNC_1(VAR_1, VAR_2, VAR_0))
  return -1;


 VAR_3 = *(uint16_t *)VAR_1->lba_copy1 ^ *(uint16_t*)VAR_1->lba_copy2;
 if (VAR_3 && !FUNC_0(VAR_3))
  return -2;


 VAR_4 = FUNC_2(VAR_1->lba_copy1);

 if (VAR_4 == -2)
  VAR_4 = FUNC_2(VAR_1->lba_copy2);

 return VAR_4;
}
