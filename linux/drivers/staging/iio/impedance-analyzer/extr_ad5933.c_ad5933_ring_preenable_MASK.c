
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int masklength; int active_scan_mask; } ;
struct ad5933_state {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad5933_state*,int ) ;
 int FUNC_1 (struct ad5933_state*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct ad5933_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3)
{
 struct ad5933_state *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 if (FUNC_2(VAR_3->active_scan_mask, VAR_3->masklength))
  return -VAR_2;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->state = VAR_0;

 return 0;
}
