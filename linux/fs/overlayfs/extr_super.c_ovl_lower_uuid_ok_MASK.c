
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_4__ {scalar_t__ index; int nfs_export; } ;
struct ovl_fs {unsigned int numlowerfs; TYPE_3__* lower_fs; scalar_t__ upper_mnt; TYPE_1__ config; } ;
struct TYPE_6__ {TYPE_2__* sb; } ;
struct TYPE_5__ {int s_uuid; } ;


 scalar_t__ FUNC_0 (int *,int const*) ;

__attribute__((used)) static bool FUNC_1(struct ovl_fs *VAR_0, const uuid_t *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_0->config.nfs_export && !(VAR_0->config.index && VAR_0->upper_mnt))
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->numlowerfs; VAR_2++) {





  if (FUNC_0(&VAR_0->lower_fs[VAR_2].sb->s_uuid, VAR_1))
   return 0;
 }
 return 1;
}
