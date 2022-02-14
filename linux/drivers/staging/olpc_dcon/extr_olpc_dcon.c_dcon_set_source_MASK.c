
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcon_priv {int pending_src; int curr_src; int switch_source; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dcon_priv *VAR_0, int VAR_1)
{
 if (VAR_0->pending_src == VAR_1)
  return;

 VAR_0->pending_src = VAR_1;

 if (VAR_0->curr_src != VAR_1)
  FUNC_0(&VAR_0->switch_source);
}
