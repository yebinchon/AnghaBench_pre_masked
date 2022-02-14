
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fotg210_ep {TYPE_1__* fotg210; scalar_t__ epnum; scalar_t__ dir_in; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fotg210_ep *VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_1->fotg210->reg + VAR_0);

 if (VAR_1->dir_in)
  VAR_2 |= FUNC_0(VAR_1->epnum - 1);
 else
  VAR_2 |= FUNC_1(VAR_1->epnum - 1);
 FUNC_3(VAR_2, VAR_1->fotg210->reg + VAR_0);
}
