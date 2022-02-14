
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct cmac {int adapter; TYPE_1__* instance; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct cmac *VAR_0, u8 VAR_1[6])
{
 u32 VAR_2, VAR_3;
 int VAR_4 = VAR_0->instance->index;

 FUNC_2(VAR_0->adapter, FUNC_1(VAR_4), &VAR_2);
 FUNC_2(VAR_0->adapter, FUNC_0(VAR_4), &VAR_3);

 VAR_1[0] = (u8) (VAR_3 >> 16);
 VAR_1[1] = (u8) (VAR_3 >> 8);
 VAR_1[2] = (u8) VAR_3;
 VAR_1[3] = (u8) (VAR_2 >> 16);
 VAR_1[4] = (u8) (VAR_2 >> 8);
 VAR_1[5] = (u8) VAR_2;
 return 0;
}
