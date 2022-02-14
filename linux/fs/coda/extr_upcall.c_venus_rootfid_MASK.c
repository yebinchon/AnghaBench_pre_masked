
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CodaFid {int dummy; } ;
struct TYPE_2__ {struct CodaFid VFid; } ;
union outputArgs {TYPE_1__ coda_root; } ;
typedef union inputArgs {int dummy; } inputArgs ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int*,union inputArgs*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (union inputArgs*) ;
 int VAR_1 ;

int FUNC_5(struct super_block *VAR_2, struct CodaFid *VAR_3)
{
        union inputArgs *VAR_4;
        union outputArgs *VAR_5;
        int VAR_6, VAR_7, VAR_8;

        VAR_6 = FUNC_0(VAR_1);
        FUNC_1(VAR_0);

 VAR_8 = FUNC_2(FUNC_3(VAR_2), VAR_6, &VAR_7, VAR_4);
 if (!VAR_8)
  *VAR_3 = VAR_5->coda_root.VFid;

 FUNC_4(VAR_4);
 return VAR_8;
}
