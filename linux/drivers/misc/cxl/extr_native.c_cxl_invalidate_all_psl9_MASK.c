
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl {int dev; } ;
struct TYPE_2__ {int (* link_ok ) (struct cxl*,int *) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (struct cxl*,int ) ;
 int FUNC_2 (struct cxl*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 unsigned long VAR_9 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct cxl*,int *) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct cxl *VAR_10)
{
 unsigned long VAR_11 = VAR_9 + (VAR_7 * VAR_0);
 u64 VAR_12;

 FUNC_4("CXL adapter - invalidation of all ERAT entries\n");


 VAR_12 = VAR_2;
 if (FUNC_5())
  VAR_12 |= VAR_4;
 FUNC_2(VAR_10, VAR_1, VAR_12);

 while (FUNC_1(VAR_10, VAR_1) & VAR_3) {
  if (FUNC_7(VAR_9, VAR_11)) {
   FUNC_3(&VAR_10->dev,
   "WARNING: CXL adapter invalidation of all ERAT entries timed out!\n");
   return -VAR_5;
  }
  if (!VAR_8->link_ok(VAR_10, ((void*)0)))
   return -VAR_6;
  FUNC_0();
 }
 return 0;
}
