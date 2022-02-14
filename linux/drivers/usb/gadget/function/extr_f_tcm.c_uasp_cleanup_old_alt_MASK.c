
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_uas {int flags; int * stream; int ep_cmd; int ep_status; int ep_out; int ep_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f_uas*,int *) ;
 int FUNC_1 (struct f_uas*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct f_uas *VAR_2)
{
 int VAR_3;

 if (!(VAR_2->flags & VAR_1))
  return;

 FUNC_2(VAR_2->ep_in);
 FUNC_2(VAR_2->ep_out);
 FUNC_2(VAR_2->ep_status);
 FUNC_2(VAR_2->ep_cmd);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, &VAR_2->stream[VAR_3]);
 FUNC_1(VAR_2);
}
