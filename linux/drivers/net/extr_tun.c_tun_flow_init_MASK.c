
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {scalar_t__ ageing_time; int flow_gc_timer; int * flows; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct tun_struct *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(&VAR_4->flows[VAR_5]);

 VAR_4->ageing_time = VAR_0;
 FUNC_3(&VAR_4->flow_gc_timer, VAR_3, 0);
 FUNC_1(&VAR_4->flow_gc_timer,
    FUNC_2(VAR_2 + VAR_4->ageing_time));
}
