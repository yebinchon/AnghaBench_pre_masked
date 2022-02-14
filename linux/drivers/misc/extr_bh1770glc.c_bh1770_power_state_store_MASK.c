
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {int lux_wait_result; int mutex; int lux_rate_index; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bh1770_chip*,int ) ;
 size_t FUNC_1 (struct bh1770_chip*,int ) ;
 int FUNC_2 (struct bh1770_chip*,int ,int ) ;
 int FUNC_3 (struct bh1770_chip*) ;
 struct bh1770_chip* FUNC_4 (struct device*) ;
 size_t FUNC_5 (char const*,int ,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct bh1770_chip *VAR_6 = FUNC_4(VAR_2);
 unsigned long VAR_7;
 ssize_t VAR_8;

 VAR_8 = FUNC_5(VAR_4, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_6(&VAR_6->mutex);
 if (VAR_7) {
  FUNC_8(VAR_2);

  VAR_8 = FUNC_1(VAR_6, VAR_6->lux_rate_index);
  if (VAR_8 < 0) {
   FUNC_9(VAR_2);
   goto leave;
  }

  VAR_8 = FUNC_0(VAR_6, VAR_0);
  if (VAR_8 < 0) {
   FUNC_9(VAR_2);
   goto leave;
  }


  FUNC_2(VAR_6, VAR_1,
     VAR_1);

  VAR_6->lux_wait_result = 1;
  FUNC_3(VAR_6);
 } else if (!FUNC_10(VAR_2)) {
  FUNC_9(VAR_2);
 }
 VAR_8 = VAR_5;
leave:
 FUNC_7(&VAR_6->mutex);
 return VAR_8;
}
