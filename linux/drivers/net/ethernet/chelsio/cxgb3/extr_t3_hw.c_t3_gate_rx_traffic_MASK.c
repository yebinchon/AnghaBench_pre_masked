
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmac {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cmac*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct cmac *VAR_6, u32 *VAR_7,
          u32 *VAR_8, u32 *VAR_9)
{

 FUNC_1(VAR_6);


 *VAR_7 = FUNC_2(VAR_6->adapter, VAR_0);
 FUNC_3(VAR_6->adapter, VAR_0,
    VAR_5 | VAR_4 | VAR_3,
    VAR_4);

 *VAR_8 = FUNC_2(VAR_6->adapter, VAR_1);
 FUNC_4(VAR_6->adapter, VAR_1, 0);

 *VAR_9 = FUNC_2(VAR_6->adapter, VAR_2);
 FUNC_4(VAR_6->adapter, VAR_2, 0);


 FUNC_0(1);
}
