
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csio_hw {TYPE_1__* chip_ops; } ;
struct TYPE_2__ {int (* chip_memory_rw ) (struct csio_hw*,int ,int,int ,int ,int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*,int ,int,int ,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct csio_hw *VAR_1, int VAR_2, u32 VAR_3, u32 VAR_4, u32 *VAR_5)
{
 return VAR_1->chip_ops->chip_memory_rw(VAR_1, VAR_0, VAR_2,
         VAR_3, VAR_4, VAR_5, 0);
}
