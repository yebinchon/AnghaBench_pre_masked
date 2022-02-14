
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_hcd {int lock; int ed_bulktail; int ed_controltail; } ;
struct debug_buffer {scalar_t__ page; struct ohci_hcd* ohci; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct ohci_hcd*,scalar_t__,size_t,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct debug_buffer *VAR_1)
{
 struct ohci_hcd *VAR_2;
 size_t VAR_3, VAR_4;
 unsigned long VAR_5;

 VAR_2 = VAR_1->ohci;
 VAR_4 = VAR_0;


 FUNC_1 (&VAR_2->lock, VAR_5);
 VAR_3 = FUNC_0(VAR_2, VAR_1->page, VAR_4, VAR_2->ed_controltail);
 VAR_3 += FUNC_0(VAR_2, VAR_1->page + VAR_3, VAR_4 - VAR_3,
     VAR_2->ed_bulktail);
 FUNC_2 (&VAR_2->lock, VAR_5);

 return VAR_3;
}
