
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* supported; } ;
struct bnx2x {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bnx2x*) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_2)
{
 u32 VAR_3 = VAR_2->port.supported[FUNC_0(VAR_2)];

 if (VAR_3 &
     (VAR_1 | VAR_0))
  return 20000;

 return 10000;
}
