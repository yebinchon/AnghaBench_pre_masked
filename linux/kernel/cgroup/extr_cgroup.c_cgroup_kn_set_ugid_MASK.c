
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct kernfs_node*,struct iattr*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct kernfs_node *VAR_4)
{
 struct iattr VAR_5 = { .ia_valid = VAR_1 | VAR_0,
          .ia_uid = FUNC_1(),
          .ia_gid = FUNC_0(), };

 if (FUNC_4(VAR_5.ia_uid, VAR_3) &&
     FUNC_2(VAR_5.ia_gid, VAR_2))
  return 0;

 return FUNC_3(VAR_4, &VAR_5);
}
