
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_init {scalar_t__ compress_type; } ;
struct cudbg_buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_3(struct cudbg_init *VAR_1,
     struct cudbg_buffer *VAR_2,
     struct cudbg_buffer *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->compress_type == VAR_0) {
  FUNC_2(VAR_2, VAR_3);
 } else {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4)
   goto out;
 }

out:
 FUNC_1(VAR_1, VAR_2);
 return VAR_4;
}
