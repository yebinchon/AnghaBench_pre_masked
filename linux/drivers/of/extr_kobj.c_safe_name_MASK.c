
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,char const*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct kobject*) ;
 char* FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,int ,char const*) ;
 struct kernfs_node* FUNC_5 (int ,char const*) ;
 int FUNC_6 (struct kernfs_node*) ;

__attribute__((used)) static const char *FUNC_7(struct kobject *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_2;
 struct kernfs_node *VAR_4;
 int VAR_5 = 0;


 while (VAR_5 < 16 && (VAR_4 = FUNC_5(VAR_1->sd, VAR_3))) {
  FUNC_6(VAR_4);
  if (VAR_3 != VAR_2)
   FUNC_1(VAR_3);
  VAR_3 = FUNC_0(VAR_0, "%s#%i", VAR_2, ++VAR_5);
 }

 if (VAR_3 == VAR_2) {
  VAR_3 = FUNC_3(VAR_2, VAR_0);
 } else {
  FUNC_4("Duplicate name in %s, renamed to \"%s\"\n",
   FUNC_2(VAR_1), VAR_3);
 }
 return VAR_3;
}
