
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcmu_dev {int cmdr_lock; int name; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 struct page* FUNC_4 (struct tcmu_dev*,int ) ;

__attribute__((used)) static struct page *FUNC_5(struct tcmu_dev *VAR_0, uint32_t VAR_1)
{
 struct page *VAR_2;

 FUNC_1(&VAR_0->cmdr_lock);
 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_2(&VAR_0->cmdr_lock);
  return VAR_2;
 }





 FUNC_3("Invalid addr to data block mapping  (dbi %u) on device %s\n",
        VAR_1, VAR_0->name);
 VAR_2 = ((void*)0);
 FUNC_2(&VAR_0->cmdr_lock);

 return VAR_2;
}
