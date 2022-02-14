
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int ctrl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct musb *VAR_6)
{





 FUNC_2(VAR_6->ctrl_base, VAR_1,
     VAR_4
   | VAR_3
   | VAR_2);
 FUNC_2(VAR_6->ctrl_base, VAR_0, 0);

 if (FUNC_1() && !VAR_5)
  FUNC_0("dma still active\n");
}
