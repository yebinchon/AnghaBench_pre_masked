
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int * skelqh; } ;
typedef int __hc32 ;


 int FUNC_0 (struct uhci_hcd*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static __hc32 FUNC_2(struct uhci_hcd *VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_3 = 8 - (int) FUNC_1(VAR_2 | VAR_0);
 if (VAR_3 <= 1)
  VAR_3 = 9;
 return FUNC_0(VAR_1, VAR_1->skelqh[VAR_3]);
}
