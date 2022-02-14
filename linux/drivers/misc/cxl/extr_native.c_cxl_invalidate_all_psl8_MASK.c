
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl {int dev; } ;
struct TYPE_2__ {int (* link_ok ) (struct cxl*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (struct cxl*,int ) ;
 int FUNC_2 (struct cxl*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 unsigned long VAR_11 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct cxl*,int *) ;
 int FUNC_6 (struct cxl*,int *) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct cxl *VAR_12)
{
 unsigned long VAR_13 = VAR_11 + (VAR_9 * VAR_4);

 FUNC_4("CXL adapter wide TLBIA & SLBIA\n");

 FUNC_2(VAR_12, VAR_0, VAR_1);

 FUNC_2(VAR_12, VAR_3, VAR_5);
 while (FUNC_1(VAR_12, VAR_3) & VAR_6) {
  if (FUNC_7(VAR_11, VAR_13)) {
   FUNC_3(&VAR_12->dev, "WARNING: CXL adapter wide TLBIA timed out!\n");
   return -VAR_7;
  }
  if (!VAR_10->link_ok(VAR_12, ((void*)0)))
   return -VAR_8;
  FUNC_0();
 }

 FUNC_2(VAR_12, VAR_2, VAR_5);
 while (FUNC_1(VAR_12, VAR_2) & VAR_6) {
  if (FUNC_7(VAR_11, VAR_13)) {
   FUNC_3(&VAR_12->dev, "WARNING: CXL adapter wide SLBIA timed out!\n");
   return -VAR_7;
  }
  if (!VAR_10->link_ok(VAR_12, ((void*)0)))
   return -VAR_8;
  FUNC_0();
 }
 return 0;
}
