
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
struct bh1770_chip {int mutex; int lux_threshold_lo; int lux_threshold_hi; int lux_wait_result; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bh1770_chip*,int ,int ) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct bh1770_chip *VAR_2, u16 *VAR_3,
    const char *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 > VAR_0)
  return -VAR_1;

 FUNC_2(&VAR_2->mutex);
 *VAR_3 = VAR_5;




 if (!VAR_2->lux_wait_result)
  VAR_6 = FUNC_0(VAR_2,
      VAR_2->lux_threshold_hi,
      VAR_2->lux_threshold_lo);
 FUNC_3(&VAR_2->mutex);
 return VAR_6;

}
