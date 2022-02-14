
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union outputArgs {int dummy; } outputArgs ;
struct CodaFid {int dummy; } ;
struct TYPE_2__ {int flags; struct CodaFid VFid; } ;
union inputArgs {TYPE_1__ coda_access; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int*,union inputArgs*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (union inputArgs*) ;

int FUNC_5(struct super_block *VAR_2, struct CodaFid *VAR_3, int VAR_4)
{
        union inputArgs *VAR_5;
        union outputArgs *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_1);
 FUNC_1(VAR_0);

        VAR_5->coda_access.VFid = *VAR_3;
        VAR_5->coda_access.flags = VAR_4;

 VAR_9 = FUNC_2(FUNC_3(VAR_2), VAR_7, &VAR_8, VAR_5);

 FUNC_4(VAR_5);
 return VAR_9;
}
