
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_entry_set {int set_list; scalar_t__ entry_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sit_entry_set* FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct sit_entry_set *FUNC_2(void)
{
 struct sit_entry_set *VAR_2 =
   FUNC_1(VAR_1, VAR_0);

 VAR_2->entry_cnt = 0;
 FUNC_0(&VAR_2->set_list);
 return VAR_2;
}
