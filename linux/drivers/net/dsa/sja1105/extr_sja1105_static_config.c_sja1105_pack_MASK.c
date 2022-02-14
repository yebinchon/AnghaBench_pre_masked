
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,int *,int,int,size_t,int ,int ) ;
 int FUNC_3 (char*,int,int,...) ;

void FUNC_4(void *VAR_4, const u64 *VAR_5, int VAR_6, int VAR_7, size_t VAR_8)
{
 int VAR_9 = FUNC_2(VAR_4, (u64 *)VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_2, VAR_3);

 if (FUNC_1(!VAR_9))
  return;

 if (VAR_9 == -VAR_0) {
  FUNC_3("Start bit (%d) expected to be larger than end (%d)\n",
         VAR_6, VAR_7);
 } else if (VAR_9 == -VAR_1) {
  if ((VAR_6 - VAR_7 + 1) > 64)
   FUNC_3("Field %d-%d too large for 64 bits!\n",
          VAR_6, VAR_7);
  else
   FUNC_3("Cannot store %llx inside bits %d-%d (would truncate)\n",
          *VAR_5, VAR_6, VAR_7);
 }
 FUNC_0();
}
