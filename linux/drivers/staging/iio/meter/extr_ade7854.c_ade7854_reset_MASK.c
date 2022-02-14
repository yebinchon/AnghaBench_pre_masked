
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ade7854_state {int (* write_reg ) (struct device*,int ,int ,int) ;int (* read_reg ) (struct device*,int ,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ade7854_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct device*,int ,int *,int) ;
 int FUNC_4 (struct device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_1);
 struct ade7854_state *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_3->read_reg(VAR_1, VAR_0, &VAR_4, 16);
 VAR_4 |= FUNC_0(7);

 return VAR_3->write_reg(VAR_1, VAR_0, VAR_4, 16);
}
