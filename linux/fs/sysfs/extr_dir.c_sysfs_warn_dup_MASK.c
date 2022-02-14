
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kernfs_node*,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*,char const*) ;

void FUNC_5(struct kernfs_node *VAR_2, const char *VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (VAR_4)
  FUNC_1(VAR_2, VAR_4, VAR_1);

 FUNC_4("cannot create duplicate filename '%s/%s'\n", VAR_4, VAR_3);
 FUNC_0();

 FUNC_2(VAR_4);
}
