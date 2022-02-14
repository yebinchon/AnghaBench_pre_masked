
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union outputArgs {int dummy; } outputArgs ;
struct CodaFid {int dummy; } ;
struct TYPE_4__ {int flags; struct CodaFid VFid; } ;
struct TYPE_3__ {int uid; } ;
union inputArgs {TYPE_2__ coda_close; TYPE_1__ ih; } ;
struct super_block {int dummy; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int*,union inputArgs*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (union inputArgs*) ;
 int VAR_2 ;

int FUNC_6(struct super_block *VAR_3, struct CodaFid *VAR_4, int VAR_5,
  kuid_t VAR_6)
{
 union inputArgs *VAR_7;
 union outputArgs *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_2);
 FUNC_1(VAR_0);

 VAR_7->ih.uid = FUNC_4(&VAR_1, VAR_6);
        VAR_7->coda_close.VFid = *VAR_4;
        VAR_7->coda_close.flags = VAR_5;

 VAR_11 = FUNC_2(FUNC_3(VAR_3), VAR_9, &VAR_10, VAR_7);

 FUNC_5(VAR_7);
        return VAR_11;
}
