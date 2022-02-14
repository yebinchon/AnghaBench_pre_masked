
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union outputArgs {int dummy; } outputArgs ;
struct CodaFid {int dummy; } ;
struct TYPE_2__ {size_t count; int type; int pos; struct CodaFid VFid; } ;
union inputArgs {TYPE_1__ coda_access_intent; } ;
struct super_block {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int*,union inputArgs*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (union inputArgs*) ;

int FUNC_5(struct super_block *VAR_5, struct CodaFid *VAR_6,
   bool *VAR_7,
   size_t VAR_8, loff_t VAR_9, int VAR_10)
{
 union inputArgs *VAR_11;
 union outputArgs *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 bool VAR_16 =
  VAR_10 == VAR_1 ||
  VAR_10 == VAR_2;

 if (!*VAR_7 && !VAR_16)
  return 0;

 VAR_13 = FUNC_0(VAR_4);
 FUNC_1(VAR_0);

 VAR_11->coda_access_intent.VFid = *VAR_6;
 VAR_11->coda_access_intent.count = VAR_8;
 VAR_11->coda_access_intent.pos = VAR_9;
 VAR_11->coda_access_intent.type = VAR_10;

 VAR_15 = FUNC_2(FUNC_3(VAR_5), VAR_13,
       VAR_16 ? ((void*)0) : &VAR_14, VAR_11);






 if (!VAR_16 || VAR_15)
  FUNC_4(VAR_11);


 if (VAR_15 == -VAR_3) {
  *VAR_7 = 0;
  VAR_15 = 0;
 }
 return VAR_15;
}
