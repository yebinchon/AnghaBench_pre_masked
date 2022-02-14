
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {char* name; struct kernfs_node* parent; } ;
struct TYPE_2__ {struct kernfs_node* kn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct kernfs_node* FUNC_1 (struct kernfs_node*,struct kernfs_node*) ;
 size_t FUNC_2 (struct kernfs_node*,struct kernfs_node*) ;
 TYPE_1__* FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_5(struct kernfs_node *VAR_1,
     struct kernfs_node *VAR_2,
     char *VAR_3, size_t VAR_4)
{
 struct kernfs_node *VAR_5, *VAR_6;
 const char VAR_7[] = "/..";
 size_t VAR_8, VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12;

 if (!VAR_1)
  return FUNC_4(VAR_3, "(null)", VAR_4);

 if (!VAR_2)
  VAR_2 = FUNC_3(VAR_1)->kn;

 if (VAR_2 == VAR_1)
  return FUNC_4(VAR_3, "/", VAR_4);

 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_1);
 if (FUNC_0(!VAR_6))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_6, VAR_1);
 VAR_8 = FUNC_2(VAR_6, VAR_2);

 VAR_3[0] = '\0';

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  VAR_10 += FUNC_4(VAR_3 + VAR_10, VAR_7,
          VAR_10 < VAR_4 ? VAR_4 - VAR_10 : 0);


 for (VAR_11 = VAR_9 - 1; VAR_11 >= 0; VAR_11--) {
  for (VAR_5 = VAR_1, VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   VAR_5 = VAR_5->parent;
  VAR_10 += FUNC_4(VAR_3 + VAR_10, "/",
          VAR_10 < VAR_4 ? VAR_4 - VAR_10 : 0);
  VAR_10 += FUNC_4(VAR_3 + VAR_10, VAR_5->name,
          VAR_10 < VAR_4 ? VAR_4 - VAR_10 : 0);
 }

 return VAR_10;
}
