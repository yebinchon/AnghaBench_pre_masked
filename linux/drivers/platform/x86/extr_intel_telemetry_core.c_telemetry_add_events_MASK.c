
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* telem_ops; } ;
struct TYPE_3__ {int (* add_events ) (int ,int ,int *,int *) ;} ;


 int FUNC_0 (int ,int ,int *,int *) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(u8 VAR_1, u8 VAR_2,
    u32 *VAR_3, u32 *VAR_4)
{
 return VAR_0.telem_ops->add_events(VAR_1,
          VAR_2, VAR_3,
          VAR_4);
}
