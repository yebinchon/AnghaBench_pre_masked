
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct t1_rx_mode {int dummy; } ;
struct cmac {int adapter; TYPE_1__* instance; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct t1_rx_mode*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cmac *VAR_1, struct t1_rx_mode *VAR_2)
{
 u32 VAR_3;
 int VAR_4 = VAR_1->instance->index;

 FUNC_1(VAR_1->adapter, VAR_0, &VAR_3);
 VAR_3 |= 1 << 12;

 if (FUNC_0(VAR_2))
  VAR_3 &= ~(1 << (VAR_4 + 16));
 else
  VAR_3 |= 1 << (VAR_4 + 16);

 FUNC_2(VAR_1->adapter, VAR_0, VAR_3);
 return 0;
}
