
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_2__ {int error; } ;
struct afs_vl_cursor {int flags; int error; TYPE_1__ ac; struct key* key; struct afs_cell* cell; } ;
struct afs_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct afs_vl_cursor*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

bool FUNC_2(struct afs_vl_cursor *VAR_5, struct afs_cell *VAR_6,
      struct key *VAR_7)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->cell = VAR_6;
 VAR_5->key = VAR_7;
 VAR_5->error = -VAR_1;
 VAR_5->ac.error = VAR_3;

 if (FUNC_1(VAR_4)) {
  VAR_5->error = -VAR_2;
  VAR_5->flags |= VAR_0;
  return 0;
 }

 return 1;
}
