
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cudbg_init {int compress_buff_size; scalar_t__ compress_buff; int * workspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct cudbg_init *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0();
 VAR_2->compress_buff = FUNC_1(VAR_0 +
        VAR_3);
 if (!VAR_2->compress_buff)
  return -VAR_1;

 VAR_2->compress_buff_size = VAR_0;
 VAR_2->workspace = (u8 *)VAR_2->compress_buff +
          VAR_0 - VAR_3;
 return 0;
}
