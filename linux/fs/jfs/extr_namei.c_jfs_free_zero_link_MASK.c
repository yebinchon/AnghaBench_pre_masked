
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pxd_lock {int pxd; void* flag; } ;
struct maplock {int index; } ;
struct inode {int i_mode; scalar_t__ i_size; } ;
typedef int s64 ;
struct TYPE_5__ {int flag; } ;
struct TYPE_6__ {TYPE_1__ acl; TYPE_1__ ea; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

 int VAR_3 ;

 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*,TYPE_1__) ;
 int FUNC_5 (char*,struct inode*) ;
 int FUNC_6 (TYPE_1__*) ;
 void* VAR_4 ;
 int FUNC_7 (struct inode*,struct pxd_lock*,int *,int ) ;
 int FUNC_8 (int ,struct inode*,int ,int ) ;

void FUNC_9(struct inode *VAR_5)
{
 int VAR_6;

 FUNC_5("jfs_free_zero_link: ip = 0x%p", VAR_5);




 VAR_6 = VAR_5->i_mode & VAR_3;

 switch (VAR_6) {
 case 128:
  break;
 case 129:

  if (VAR_5->i_size < VAR_2)
   return;
  break;
 default:
  return;
 }




 if (FUNC_0(VAR_5)->ea.flag & VAR_1) {
  s64 VAR_7 = FUNC_3(&FUNC_0(VAR_5)->ea);
  int VAR_8 = FUNC_6(&FUNC_0(VAR_5)->ea);
  struct maplock VAR_9;
  struct pxd_lock *VAR_10;


  FUNC_4(VAR_5, FUNC_0(VAR_5)->ea);


  VAR_9.index = 1;
  VAR_10 = (struct pxd_lock *) & VAR_9;
  VAR_10->flag = VAR_4;
  FUNC_1(&VAR_10->pxd, VAR_7);
  FUNC_2(&VAR_10->pxd, VAR_8);
  FUNC_7(VAR_5, VAR_10, ((void*)0), VAR_0);
 }




 if (FUNC_0(VAR_5)->acl.flag & VAR_1) {
  s64 VAR_11 = FUNC_3(&FUNC_0(VAR_5)->acl);
  int VAR_12 = FUNC_6(&FUNC_0(VAR_5)->acl);
  struct maplock VAR_13;
  struct pxd_lock *VAR_14;

  FUNC_4(VAR_5, FUNC_0(VAR_5)->acl);


  VAR_13.index = 1;
  VAR_14 = (struct pxd_lock *) & VAR_13;
  VAR_14->flag = VAR_4;
  FUNC_1(&VAR_14->pxd, VAR_11);
  FUNC_2(&VAR_14->pxd, VAR_12);
  FUNC_7(VAR_5, VAR_14, ((void*)0), VAR_0);
 }






 if (VAR_5->i_size)
  FUNC_8(0, VAR_5, 0, VAR_0);
}
