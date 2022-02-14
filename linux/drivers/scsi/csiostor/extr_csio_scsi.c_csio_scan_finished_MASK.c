
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sm_list; } ;
struct csio_lnode {TYPE_1__ sm; int hwp; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct csio_lnode*,int ,unsigned long,int,int) ;
 int VAR_3 ;
 struct csio_lnode* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct Scsi_Host *VAR_4, unsigned long VAR_5)
{
 struct csio_lnode *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = 1;

 FUNC_3(VAR_4->host_lock);
 if (!VAR_6->hwp || FUNC_0(&VAR_6->sm.sm_list))
  goto out;

 VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_5, VAR_2 * VAR_0,
       VAR_1 * VAR_0);
out:
 FUNC_4(VAR_4->host_lock);

 return VAR_7;
}
