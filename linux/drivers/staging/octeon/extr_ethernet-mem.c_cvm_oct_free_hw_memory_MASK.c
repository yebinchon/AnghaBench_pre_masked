
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(int VAR_0, int VAR_1, int VAR_2)
{
 char *VAR_3;
 char *VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4) {
   VAR_2--;
   VAR_4 = (char *)FUNC_3(FUNC_1(VAR_4));
   VAR_3 = *((char **)VAR_4 - 1);
   FUNC_2(VAR_3);
  }
 } while (VAR_4);

 if (VAR_2 < 0)
  FUNC_4("Freeing of pool %u had too many buffers (%d)\n",
   VAR_0, VAR_2);
 else if (VAR_2 > 0)
  FUNC_4("Warning: Freeing of pool %u is missing %d buffers\n",
   VAR_0, VAR_2);
}
