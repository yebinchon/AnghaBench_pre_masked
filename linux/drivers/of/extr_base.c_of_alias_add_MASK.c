
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct alias_prop {int id; scalar_t__* stem; int alias; int link; struct device_node* np; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,scalar_t__*,int,struct device_node*) ;
 int FUNC_2 (scalar_t__*,char const*,int) ;

__attribute__((used)) static void FUNC_3(struct alias_prop *VAR_1, struct device_node *VAR_2,
    int VAR_3, const char *VAR_4, int VAR_5)
{
 VAR_1->np = VAR_2;
 VAR_1->id = VAR_3;
 FUNC_2(VAR_1->stem, VAR_4, VAR_5);
 VAR_1->stem[VAR_5] = 0;
 FUNC_0(&VAR_1->link, &VAR_0);
 FUNC_1("adding DT alias:%s: stem=%s id=%i node=%pOF\n",
   VAR_1->alias, VAR_1->stem, VAR_1->id, VAR_2);
}
