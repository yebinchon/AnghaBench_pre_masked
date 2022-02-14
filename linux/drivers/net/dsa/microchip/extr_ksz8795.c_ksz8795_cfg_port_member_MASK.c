
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ksz_device {int port_mask; TYPE_1__* ports; } ;
struct TYPE_2__ {int member; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_device*,int,int ,int*) ;
 int FUNC_1 (struct ksz_device*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ksz_device *VAR_2, int VAR_3,
        u8 VAR_4)
{
 u8 VAR_5;

 FUNC_0(VAR_2, VAR_3, VAR_1, &VAR_5);
 VAR_5 &= ~VAR_0;
 VAR_5 |= (VAR_4 & VAR_2->port_mask);
 FUNC_1(VAR_2, VAR_3, VAR_1, VAR_5);
 VAR_2->ports[VAR_3].member = VAR_4;
}
