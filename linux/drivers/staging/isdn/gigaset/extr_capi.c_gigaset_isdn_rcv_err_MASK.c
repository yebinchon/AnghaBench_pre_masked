
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bc_state {int corrupted; scalar_t__ ignore; } ;



void FUNC_0(struct bc_state *VAR_0)
{

 if (VAR_0->ignore) {
  VAR_0->ignore--;
  return;
 }


 VAR_0->corrupted++;


}
