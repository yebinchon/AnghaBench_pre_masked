
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_field32 {int dummy; } ;
struct rt2x00_dev {TYPE_1__* ops; } ;
struct rt2800_ops {int (* regbusy_read ) (struct rt2x00_dev*,unsigned int const,struct rt2x00_field32 const,int *) ;} ;
struct TYPE_2__ {struct rt2800_ops* drv; } ;


 int FUNC_0 (struct rt2x00_dev*,unsigned int const,struct rt2x00_field32 const,int *) ;

__attribute__((used)) static inline int FUNC_1(struct rt2x00_dev *VAR_0,
          const unsigned int VAR_1,
          const struct rt2x00_field32 VAR_2,
          u32 *VAR_3)
{
 const struct rt2800_ops *VAR_4 = VAR_0->ops->drv;

 return VAR_4->regbusy_read(VAR_0, VAR_1, VAR_2, VAR_3);
}
