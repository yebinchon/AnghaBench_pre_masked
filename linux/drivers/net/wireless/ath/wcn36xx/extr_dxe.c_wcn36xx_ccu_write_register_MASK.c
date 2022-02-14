
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {scalar_t__ ccu_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct wcn36xx *VAR_1, int VAR_2, int VAR_3)
{
 FUNC_0(VAR_0,
      "wcn36xx_ccu_write_register: addr=%x, data=%x\n",
      VAR_2, VAR_3);

 FUNC_1(VAR_3, VAR_1->ccu_base + VAR_2);
}
