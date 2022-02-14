
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int * fip; } ;
struct TYPE_3__ {int * fip; } ;
struct ch_filter_specification {TYPE_2__ mask; TYPE_1__ val; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline int FUNC_1(struct ch_filter_specification *VAR_0,
       u32 VAR_1, u32 VAR_2)
{
 FUNC_0(&VAR_0->val.fip[4], &VAR_1, sizeof(u32));
 FUNC_0(&VAR_0->mask.fip[4], &VAR_2, sizeof(u32));

 return 0;
}
