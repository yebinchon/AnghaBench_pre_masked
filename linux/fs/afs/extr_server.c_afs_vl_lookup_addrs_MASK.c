
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct key {int dummy; } ;
struct afs_vl_cursor {TYPE_1__* server; } ;
struct afs_cell {int dummy; } ;
struct afs_addr_list {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct afs_addr_list* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct afs_vl_cursor*,struct afs_cell*,struct key*) ;
 int FUNC_2 (struct afs_vl_cursor*) ;
 scalar_t__ FUNC_3 (struct afs_vl_cursor*) ;
 struct afs_addr_list* FUNC_4 (struct afs_vl_cursor*,int const*) ;
 struct afs_addr_list* FUNC_5 (struct afs_vl_cursor*,int const*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static struct afs_addr_list *FUNC_7(struct afs_cell *VAR_2,
       struct key *VAR_3, const uuid_t *VAR_4)
{
 struct afs_vl_cursor VAR_5;
 struct afs_addr_list *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_7 = -VAR_1;
 if (FUNC_1(&VAR_5, VAR_2, VAR_3)) {
  while (FUNC_3(&VAR_5)) {
   if (FUNC_6(VAR_0, &VAR_5.server->flags))
    VAR_6 = FUNC_5(&VAR_5, VAR_4);
   else
    VAR_6 = FUNC_4(&VAR_5, VAR_4);
  }

  VAR_7 = FUNC_2(&VAR_5);
 }

 return VAR_7 < 0 ? FUNC_0(VAR_7) : VAR_6;
}
