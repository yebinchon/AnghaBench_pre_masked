
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad5933_state {int work; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad5933_state*,int ) ;
 int FUNC_1 (int *) ;
 struct ad5933_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1)
{
 struct ad5933_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->work);
 return FUNC_0(VAR_2, VAR_0);
}
