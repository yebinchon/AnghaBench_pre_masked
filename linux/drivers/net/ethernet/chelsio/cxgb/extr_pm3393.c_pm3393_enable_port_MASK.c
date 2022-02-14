
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmac_statistics {int dummy; } ;
struct cmac {int adapter; int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct cmac*,int) ;
 int FUNC_2 (struct cmac*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cmac *VAR_2, int VAR_3)
{

 FUNC_2(VAR_2, VAR_1,
  VAR_0);
 FUNC_4(2);
 FUNC_0(&VAR_2->stats, 0, sizeof(struct cmac_statistics));

 FUNC_1(VAR_2, VAR_3);






 FUNC_3(VAR_2->adapter, 0);
 return 0;
}
