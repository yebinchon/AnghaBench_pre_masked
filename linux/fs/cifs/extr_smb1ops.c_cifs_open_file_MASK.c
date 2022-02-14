
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cifs_open_parms {TYPE_3__* cifs_sb; TYPE_1__* fid; int create_options; int desired_access; int disposition; int path; TYPE_4__* tcon; } ;
typedef int __u32 ;
struct TYPE_8__ {TYPE_2__* ses; } ;
struct TYPE_7__ {int local_nls; } ;
struct TYPE_6__ {int capabilities; } ;
struct TYPE_5__ {int netfid; } ;
typedef int FILE_ALL_INFO ;


 int VAR_0 ;
 int FUNC_0 (unsigned int const,struct cifs_open_parms*,int *,int *) ;
 int FUNC_1 (unsigned int const,TYPE_4__*,int ,int ,int ,int ,int *,int *,int *,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(const unsigned int VAR_1, struct cifs_open_parms *VAR_2,
        __u32 *VAR_3, FILE_ALL_INFO *VAR_4)
{
 if (!(VAR_2->tcon->ses->capabilities & VAR_0))
  return FUNC_1(VAR_1, VAR_2->tcon, VAR_2->path,
         VAR_2->disposition,
         VAR_2->desired_access,
         VAR_2->create_options,
         &VAR_2->fid->netfid, VAR_3, VAR_4,
         VAR_2->cifs_sb->local_nls,
         FUNC_2(VAR_2->cifs_sb));
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
