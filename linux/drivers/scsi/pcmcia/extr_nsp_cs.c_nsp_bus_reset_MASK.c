
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int BaseAddress; } ;
typedef TYPE_1__ nsp_hw_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ,int ) ;
 int FUNC_3 (unsigned int,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(nsp_hw_data *VAR_7)
{
 unsigned int VAR_8 = VAR_7->BaseAddress;
 int VAR_9;

 FUNC_3(VAR_8, VAR_0, VAR_2);

 FUNC_2(VAR_8, VAR_4, VAR_5);
 FUNC_0(100);
 FUNC_2(VAR_8, VAR_4, 0);
 for(VAR_9 = 0; VAR_9 < 5; VAR_9++) {
  FUNC_1(VAR_8, VAR_3);
 }

 FUNC_4(VAR_7);

 FUNC_3(VAR_8, VAR_0, VAR_1);

 return VAR_6;
}
