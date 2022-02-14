
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_rpipe {int wa; } ;


 int FUNC_0 (struct wa_rpipe*,int*) ;
 int FUNC_1 (int ,struct wa_rpipe*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct wa_rpipe *VAR_0)
{
 int VAR_1;
 int VAR_2 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_1)
  FUNC_1(VAR_0->wa, VAR_0);
 else if (VAR_2)
  FUNC_2(VAR_0->wa);
}
