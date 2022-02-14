
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rt2x00_dev {TYPE_1__* ops; } ;
struct rt2800_ops {int (* drv_write_firmware ) (struct rt2x00_dev*,int const*,size_t const) ;} ;
struct TYPE_2__ {struct rt2800_ops* drv; } ;


 int FUNC_0 (struct rt2x00_dev*,int const*,size_t const) ;

__attribute__((used)) static inline int FUNC_1(struct rt2x00_dev *VAR_0,
         const u8 *VAR_1, const size_t VAR_2)
{
 const struct rt2800_ops *VAR_3 = VAR_0->ops->drv;

 return VAR_3->drv_write_firmware(VAR_0, VAR_1, VAR_2);
}
