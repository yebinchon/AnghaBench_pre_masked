
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xenfb_info {TYPE_1__* page; } ;
struct TYPE_2__ {scalar_t__ out_prod; scalar_t__ out_cons; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct xenfb_info *VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_3 = VAR_1->page->out_prod;
 VAR_2 = VAR_1->page->out_cons;
 return VAR_3 - VAR_2 == VAR_0;
}
