
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slot {int wq; } ;
struct event_info {int work; struct slot* p_slot; int event_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct event_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct slot *VAR_3, u32 VAR_4)
{
 struct event_info *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->event_type = VAR_4;
 VAR_5->p_slot = VAR_3;
 FUNC_0(&VAR_5->work, VAR_2);

 FUNC_2(VAR_3->wq, &VAR_5->work);

 return 0;
}
