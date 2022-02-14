
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmac_statistics {int dummy; } ;
struct cmac {int stats; int adapter; TYPE_1__* instance; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cmac*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct cmac *VAR_2, int VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6 = VAR_2->instance->index;


 FUNC_2(VAR_2);

 FUNC_4(VAR_2->adapter, FUNC_1(VAR_6), &VAR_4);
 if (VAR_3 & VAR_0)
  VAR_4 &= ~0x2;
 if (VAR_3 & VAR_1)
  VAR_4 &= ~0x1;
 FUNC_5(VAR_2->adapter, FUNC_1(VAR_6), VAR_4);
 FUNC_4(VAR_2->adapter, FUNC_1(VAR_6), &VAR_4);


 for (VAR_5 = 0; VAR_5 <= 0x3a; ++VAR_5)
  FUNC_5(VAR_2->adapter, FUNC_0(4, VAR_6, VAR_5), 0);


 FUNC_3(&VAR_2->stats, 0, sizeof(struct cmac_statistics));

 return 0;
}
