
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct TYPE_4__ {int i_gid; int i_uid; } ;
struct gfs2_inode {TYPE_2__ i_inode; } ;
struct gfs2_alloc_parms {int allowed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct gfs2_inode*,int ,int ,struct gfs2_alloc_parms*) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ) ;
 int FUNC_3 (struct gfs2_inode*) ;

__attribute__((used)) static inline int FUNC_4(struct gfs2_inode *VAR_5,
     struct gfs2_alloc_parms *VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_0(&VAR_5->i_inode);
 int VAR_8;

 VAR_6->allowed = VAR_4;
 if (VAR_7->sd_args.ar_quota == VAR_0)
  return 0;
 VAR_8 = FUNC_2(VAR_5, VAR_3, VAR_2);
 if (VAR_8)
  return VAR_8;
 if (VAR_7->sd_args.ar_quota != VAR_1)
  return 0;
 VAR_8 = FUNC_1(VAR_5, VAR_5->i_inode.i_uid, VAR_5->i_inode.i_gid, VAR_6);
 if (VAR_8)
  FUNC_3(VAR_5);
 return VAR_8;
}
