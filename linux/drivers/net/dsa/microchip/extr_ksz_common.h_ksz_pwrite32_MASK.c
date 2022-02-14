
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ksz_device {TYPE_1__* dev_ops; } ;
struct TYPE_2__ {int (* get_port_addr ) (int,int) ;} ;


 int FUNC_0 (struct ksz_device*,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(struct ksz_device *VAR_0, int VAR_1, int VAR_2,
    u32 VAR_3)
{
 FUNC_0(VAR_0, VAR_0->dev_ops->get_port_addr(VAR_1, VAR_2), VAR_3);
}
