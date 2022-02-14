
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct key {int dummy; } ;
struct afs_server {int usage; } ;
struct afs_cell {int net; } ;
struct afs_addr_list {int dummy; } ;


 int VAR_0 ;
 struct afs_server* FUNC_0 (struct afs_addr_list*) ;
 struct afs_server* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct afs_addr_list*) ;
 int FUNC_3 (char*,int ,int const*) ;
 int FUNC_4 (char*,struct afs_server*,int ) ;
 struct afs_server* FUNC_5 (int ,int const*,struct afs_addr_list*) ;
 struct afs_server* FUNC_6 (int ,int const*) ;
 struct afs_server* FUNC_7 (int ,struct afs_server*) ;
 int FUNC_8 (struct afs_addr_list*) ;
 struct afs_addr_list* FUNC_9 (struct afs_cell*,struct key*,int const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct afs_server*) ;

struct afs_server *FUNC_12(struct afs_cell *VAR_1, struct key *VAR_2,
         const uuid_t *VAR_3)
{
 struct afs_addr_list *VAR_4;
 struct afs_server *VAR_5, *VAR_6;

 FUNC_3("%p,%pU", VAR_1->net, VAR_3);

 VAR_5 = FUNC_6(VAR_1->net, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_9(VAR_1, VAR_2, VAR_3);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 VAR_6 = FUNC_5(VAR_1->net, VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_8(VAR_4);
  return FUNC_1(-VAR_0);
 }

 VAR_5 = FUNC_7(VAR_1->net, VAR_6);
 if (VAR_5 != VAR_6) {
  FUNC_8(VAR_4);
  FUNC_11(VAR_6);
 }

 FUNC_4(" = %p{%d}", VAR_5, FUNC_10(&VAR_5->usage));
 return VAR_5;
}
