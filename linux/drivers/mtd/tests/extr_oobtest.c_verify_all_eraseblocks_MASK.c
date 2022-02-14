
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2;
 unsigned int VAR_3;

 FUNC_1("verifying all eraseblocks\n");
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_0[VAR_3])
   continue;
  VAR_2 = FUNC_2(VAR_3);
  if (VAR_2)
   return VAR_2;
  if (VAR_3 % 256 == 0)
   FUNC_1("verified up to eraseblock %u\n", VAR_3);

  VAR_2 = FUNC_0();
  if (VAR_2)
   return VAR_2;
 }
 FUNC_1("verified %u eraseblocks\n", VAR_3);
 return 0;
}
