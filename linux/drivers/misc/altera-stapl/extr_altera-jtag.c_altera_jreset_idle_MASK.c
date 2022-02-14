
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag {int jtag_state; } ;
struct altera_state {struct altera_jtag js; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct altera_state *VAR_5)
{
 struct altera_jtag *VAR_6 = &VAR_5->js;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 5; ++VAR_7)
  FUNC_0(VAR_3, VAR_2, VAR_1);


 FUNC_0(VAR_4, VAR_2, VAR_1);
 VAR_6->jtag_state = VAR_0;
}
