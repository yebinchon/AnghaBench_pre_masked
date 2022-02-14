
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_hdr_key {int num_actions; int actions; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct mod_hdr_key *VAR_1,
       struct mod_hdr_key *VAR_2)
{
 if (VAR_1->num_actions != VAR_2->num_actions)
  return 1;

 return FUNC_0(VAR_1->actions, VAR_2->actions, VAR_1->num_actions * VAR_0);
}
