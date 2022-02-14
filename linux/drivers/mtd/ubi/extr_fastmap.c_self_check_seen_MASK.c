
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; scalar_t__* lookuptbl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (struct ubi_device*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ubi_device *VAR_1, unsigned long *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if (!FUNC_1(VAR_1) || !VAR_2)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->peb_count; VAR_3++) {
  if (FUNC_0(VAR_3, VAR_2) && VAR_1->lookuptbl[VAR_3]) {
   FUNC_2(VAR_1, "self-check failed for PEB %d, fastmap didn't see it", VAR_3);
   VAR_4 = -VAR_0;
  }
 }

 return VAR_4;
}
