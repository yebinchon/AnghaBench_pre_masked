
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct ubi_device {TYPE_1__* mtd; } ;
struct TYPE_4__ {int size; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static int FUNC_4(const struct ubi_device *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 uint64_t VAR_4;

 if (!VAR_1) {





  VAR_2 = FUNC_2(VAR_0->mtd, 0, VAR_0->mtd->size);
  if (VAR_2 < 0)
   return 0;
  return VAR_2;
 }
 VAR_4 = FUNC_1(VAR_0->mtd);
 VAR_3 = FUNC_0(VAR_4, VAR_0->mtd);
 VAR_2 = FUNC_3(VAR_3, VAR_1, 1024);


 if (FUNC_3(VAR_2, 1024, VAR_1) < VAR_3)
  VAR_2 += 1;

 return VAR_2;
}
