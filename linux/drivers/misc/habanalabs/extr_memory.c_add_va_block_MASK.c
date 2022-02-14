
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hl_va_range {int lock; int list; } ;
struct hl_device {int dummy; } ;


 int FUNC_0 (struct hl_device*,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct hl_device *VAR_0,
  struct hl_va_range *VAR_1, u64 VAR_2, u64 VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1->lock);
 VAR_4 = FUNC_0(VAR_0, &VAR_1->list, VAR_2, VAR_3);
 FUNC_2(&VAR_1->lock);

 return VAR_4;
}
