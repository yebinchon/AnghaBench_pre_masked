
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker {int cmd_ring; int event_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct rocker*) ;
 int FUNC_1 (struct rocker*,int *,int ) ;
 int FUNC_2 (struct rocker*,int *) ;

__attribute__((used)) static void FUNC_3(struct rocker *VAR_1)
{
 FUNC_1(VAR_1, &VAR_1->event_ring,
      VAR_0);
 FUNC_2(VAR_1, &VAR_1->event_ring);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, &VAR_1->cmd_ring,
      VAR_0);
 FUNC_2(VAR_1, &VAR_1->cmd_ring);
}
