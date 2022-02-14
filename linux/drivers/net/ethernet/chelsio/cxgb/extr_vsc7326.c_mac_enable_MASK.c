
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmac {int adapter; TYPE_1__* instance; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct cmac *VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6 = VAR_3->instance->index;


 FUNC_3(VAR_3->adapter, FUNC_0(1,VAR_6), VAR_2);

 FUNC_2(VAR_3->adapter, FUNC_1(VAR_6), &VAR_5);
 if (VAR_4 & VAR_0)
  VAR_5 |= 0x2;
 if (VAR_4 & VAR_1)
  VAR_5 |= 1;
 FUNC_3(VAR_3->adapter, FUNC_1(VAR_6), VAR_5);
 return 0;
}
