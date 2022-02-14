
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_tid_data {int tid; int* data; } ;
struct cudbg_tcam {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct cudbg_tcam) ;

__attribute__((used)) static int FUNC_1(struct cudbg_tid_data *VAR_2,
          struct cudbg_tcam VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->tid, VAR_3);
 if (VAR_2->tid & 1)
  return 0;

 if (VAR_5 == VAR_0) {
  VAR_4 = VAR_2->data[16] & 0x8000;
 } else if (VAR_5 == VAR_1) {
  VAR_4 = VAR_2->data[16] & 0x8000;
  if (VAR_4)
   VAR_4 = VAR_2->data[9] == 0x00C00000;
 } else {
  VAR_4 = 0;
 }
 return VAR_4;
}
