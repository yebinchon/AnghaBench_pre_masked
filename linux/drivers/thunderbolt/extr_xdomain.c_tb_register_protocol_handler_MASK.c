
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_protocol_handler {int list; int uuid; int callback; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_3 ;

int FUNC_4(struct tb_protocol_handler *VAR_4)
{
 if (!VAR_4->uuid || !VAR_4->callback)
  return -VAR_0;
 if (FUNC_3(VAR_4->uuid, &VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_3);
 FUNC_0(&VAR_4->list, &VAR_1);
 FUNC_2(&VAR_3);

 return 0;
}
