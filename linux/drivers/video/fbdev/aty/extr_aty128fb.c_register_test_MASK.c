
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aty128fb_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(const struct aty128fb_par *VAR_1)
{
 u32 VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, 0x55555555);
 if (FUNC_0(VAR_0) == 0x55555555) {
  FUNC_1(VAR_0, 0xAAAAAAAA);

  if (FUNC_0(VAR_0) == 0xAAAAAAAA)
   VAR_3 = 1;
 }

 FUNC_1(VAR_0, VAR_2);
 return VAR_3;
}
