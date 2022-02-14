
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int fmode; int lock; } ;
struct ddb_link {int nr; TYPE_1__ lnb; } ;
struct ddb {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ddb*,int,int,scalar_t__,int,int) ;
 int FUNC_2 (struct ddb*,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;

int FUNC_5(struct ddb *VAR_4, struct ddb_link *VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_5->nr;

 if (VAR_5->lnb.fmode == VAR_6)
  return 0;
 FUNC_0(VAR_4->dev, "Set fmode link %u = %u\n", VAR_7, VAR_6);
 FUNC_3(&VAR_5->lnb.lock);
 if (VAR_6 == 2 || VAR_6 == 1) {
  if (VAR_2 >= 0) {
   FUNC_1(VAR_4, VAR_7, 0, VAR_2, 0, 0);
   if (VAR_3) {
    FUNC_1(VAR_4, VAR_7, 1, VAR_2, 0, 1);
    FUNC_1(VAR_4, VAR_7, 2, VAR_2, 1, 0);
   } else {
    FUNC_1(VAR_4, VAR_7, 1, VAR_2, 1, 0);
    FUNC_1(VAR_4, VAR_7, 2, VAR_2, 0, 1);
   }
   FUNC_1(VAR_4, VAR_7, 3, VAR_2, 1, 1);
  }
  FUNC_2(VAR_4, VAR_7, 0, VAR_0);
  if (VAR_3) {
   FUNC_2(VAR_4, VAR_7, 1, VAR_0);
   FUNC_2(VAR_4, VAR_7, 2, VAR_1);
  } else {
   FUNC_2(VAR_4, VAR_7, 1, VAR_1);
   FUNC_2(VAR_4, VAR_7, 2, VAR_0);
  }
  FUNC_2(VAR_4, VAR_7, 3, VAR_1);
 }
 VAR_5->lnb.fmode = VAR_6;
 FUNC_4(&VAR_5->lnb.lock);
 return 0;
}
