
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mdio_device {TYPE_1__* bus; } ;
struct TYPE_2__ {int (* write ) (TYPE_1__*,int ,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mdio_device *VAR_0, int VAR_1, u16 VAR_2)
{
 VAR_0->bus->write(VAR_0->bus, FUNC_0(VAR_1), FUNC_1(VAR_1), VAR_2);
}
