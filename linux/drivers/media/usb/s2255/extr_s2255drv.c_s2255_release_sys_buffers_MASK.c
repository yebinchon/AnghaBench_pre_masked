
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* frame; } ;
struct s2255_vc {TYPE_2__ buffer; } ;
struct TYPE_3__ {int * lpvbits; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct s2255_vc *VAR_1)
{
 unsigned long VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->buffer.frame[VAR_2].lpvbits);
  VAR_1->buffer.frame[VAR_2].lpvbits = ((void*)0);
 }
 return 0;
}
