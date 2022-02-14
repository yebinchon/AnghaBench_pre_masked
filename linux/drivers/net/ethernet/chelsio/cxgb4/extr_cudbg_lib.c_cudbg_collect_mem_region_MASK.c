
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cudbg_init {int dummy; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int dummy; } ;


 unsigned long FUNC_0 (struct cudbg_init*,struct cudbg_error*,int ) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int ,unsigned long,struct cudbg_error*) ;

__attribute__((used)) static int FUNC_2(struct cudbg_init *VAR_0,
        struct cudbg_buffer *VAR_1,
        struct cudbg_error *VAR_2,
        u8 VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);

 return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4,
     VAR_2);
}
