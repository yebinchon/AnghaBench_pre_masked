
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_media_fim {scalar_t__ num_skip; int sd; int icap_first_event; int enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned long FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct imx_media_fim *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1->enabled || VAR_1->num_skip > 0)
  return;

 VAR_2 = FUNC_2(
  &VAR_1->icap_first_event,
  FUNC_0(VAR_0));
 if (VAR_2 == 0)
  FUNC_1(VAR_1->sd, "wait first icap event timeout\n");
}
