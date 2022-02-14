
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int abort_code; } ;
struct afs_vl_cursor {int error; TYPE_2__ ac; int server_list; TYPE_1__* cell; } ;
struct afs_net {int dummy; } ;
struct TYPE_3__ {struct afs_net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct afs_net*,int ) ;
 int FUNC_3 (struct afs_vl_cursor*) ;

int FUNC_4(struct afs_vl_cursor *VAR_5)
{
 struct afs_net *VAR_6 = VAR_5->cell->net;

 if (VAR_5->error == -VAR_2 ||
     VAR_5->error == -VAR_0 ||
     VAR_5->error == -VAR_4 ||
     VAR_5->error == -VAR_3)
  FUNC_3(VAR_5);

 FUNC_1(&VAR_5->ac);
 FUNC_2(VAR_6, VAR_5->server_list);

 if (VAR_5->error == -VAR_1)
  VAR_5->error = FUNC_0(VAR_5->ac.abort_code);

 return VAR_5->error;
}
