
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vnic_dev {int notify_sz; int notify_copy; int notify; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct vnic_dev *VAR_0)
{
 u32 *VAR_1;
 unsigned int VAR_2 = VAR_0->notify_sz / 4;
 unsigned int VAR_3;
 u32 VAR_4;

 if (!VAR_0->notify || !VAR_0->notify_sz)
  return 0;

 do {
  VAR_4 = 0;
  FUNC_0(&VAR_0->notify_copy, VAR_0->notify, VAR_0->notify_sz);
  VAR_1 = (u32 *)&VAR_0->notify_copy;
  for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++)
   VAR_4 += VAR_1[VAR_3];
 } while (VAR_4 != VAR_1[0]);

 return 1;
}
