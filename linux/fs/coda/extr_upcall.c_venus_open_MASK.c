
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct file* fh; } ;
union outputArgs {TYPE_1__ coda_open_by_fd; } ;
struct CodaFid {int dummy; } ;
struct TYPE_4__ {int flags; struct CodaFid VFid; } ;
union inputArgs {TYPE_2__ coda_open_by_fd; } ;
struct super_block {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int*,union inputArgs*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (union inputArgs*) ;
 int VAR_1 ;

int FUNC_5(struct super_block *VAR_2, struct CodaFid *VAR_3,
    int VAR_4, struct file **VAR_5)
{
        union inputArgs *VAR_6;
        union outputArgs *VAR_7;
        int VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_1);
 FUNC_1(VAR_0);

 VAR_6->coda_open_by_fd.VFid = *VAR_3;
 VAR_6->coda_open_by_fd.flags = VAR_4;

 VAR_10 = FUNC_2(FUNC_3(VAR_2), VAR_8, &VAR_9, VAR_6);
 if (!VAR_10)
  *VAR_5 = VAR_7->coda_open_by_fd.fh;

 FUNC_4(VAR_6);
 return VAR_10;
}
