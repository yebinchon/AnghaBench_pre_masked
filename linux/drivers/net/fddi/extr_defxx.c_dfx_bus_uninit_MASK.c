
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {unsigned long base_addr; } ;
struct TYPE_5__ {struct device* bus_dev; } ;
typedef TYPE_1__ DFX_board_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,scalar_t__) ;
 TYPE_2__* FUNC_7 (struct device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5)
{
 DFX_board_t *VAR_6 = FUNC_5(VAR_5);
 struct device *VAR_7 = VAR_6->bus_dev;
 int VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = FUNC_1(VAR_7);
 u8 VAR_10;

 FUNC_0("In dfx_bus_uninit...\n");



 if (VAR_9) {
  unsigned long VAR_11 = FUNC_7(VAR_7)->base_addr;


  VAR_10 = FUNC_4(VAR_11 + VAR_3);
  VAR_10 &= ~VAR_1;
  FUNC_6(VAR_10, VAR_11 + VAR_3);


  FUNC_6(0, VAR_11 + VAR_4);


  FUNC_6(0, VAR_11 + VAR_2);
 }
 if (VAR_8) {

  FUNC_3(VAR_6, VAR_0, 0);
 }
}
