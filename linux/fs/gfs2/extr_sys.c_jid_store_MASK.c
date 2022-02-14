
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ls_jid; TYPE_1__* ls_ops; } ;
struct TYPE_5__ {scalar_t__ ar_spectator; } ;
struct gfs2_sbd {int sd_jindex_spin; int sd_flags; TYPE_3__ sd_lockstruct; TYPE_2__ sd_args; int sd_locking_init; } ;
typedef int ssize_t ;
struct TYPE_4__ {int * lm_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,int*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct gfs2_sbd *VAR_3, const char *VAR_4, size_t VAR_5)
{
        int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_4, "%d", &VAR_6);
 if (VAR_7 != 1)
  return -VAR_1;
 VAR_7 = FUNC_6(&VAR_3->sd_locking_init);
 if (VAR_7)
  return VAR_7;
 FUNC_2(&VAR_3->sd_jindex_spin);
 VAR_7 = -VAR_1;
 if (VAR_3->sd_lockstruct.ls_ops->lm_mount == ((void*)0))
  goto out;
 VAR_7 = -VAR_0;
 if (FUNC_5(VAR_2, &VAR_3->sd_flags) == 0)
  goto out;
 VAR_7 = 0;
 if (VAR_3->sd_args.ar_spectator && VAR_6 > 0)
  VAR_7 = VAR_6 = -VAR_1;
 VAR_3->sd_lockstruct.ls_jid = VAR_6;
 FUNC_0(VAR_2, &VAR_3->sd_flags);
 FUNC_1();
 FUNC_7(&VAR_3->sd_flags, VAR_2);
out:
 FUNC_3(&VAR_3->sd_jindex_spin);
 return VAR_7 ? VAR_7 : VAR_5;
}
