
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_field32 {int dummy; } ;
struct rt2x00_dev {int irqmask_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct rt2x00_field32,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct rt2x00_dev *VAR_1,
         struct rt2x00_field32 VAR_2)
{
 u32 VAR_3;





 FUNC_3(&VAR_1->irqmask_lock);

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_0(&VAR_3, VAR_2, 0);
 FUNC_2(VAR_1, VAR_0, VAR_3);

 FUNC_4(&VAR_1->irqmask_lock);
}
