
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_inode {int i_rw_mutex; int * i_qadata; int i_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct gfs2_inode *VAR_4)
{
 int VAR_5 = 0;
 struct gfs2_sbd *VAR_6 = FUNC_0(&VAR_4->i_inode);

 if (VAR_6->sd_args.ar_quota == VAR_2)
  return 0;

 FUNC_1(&VAR_4->i_rw_mutex);
 if (VAR_4->i_qadata == ((void*)0)) {
  VAR_4->i_qadata = FUNC_2(VAR_3, VAR_1);
  if (!VAR_4->i_qadata)
   VAR_5 = -VAR_0;
 }
 FUNC_3(&VAR_4->i_rw_mutex);
 return VAR_5;
}
