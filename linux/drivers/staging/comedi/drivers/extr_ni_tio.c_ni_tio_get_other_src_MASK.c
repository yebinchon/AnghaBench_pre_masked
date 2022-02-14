
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {scalar_t__ variant; } ;
struct ni_gpct {unsigned int counter_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_4 (struct ni_gpct*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ni_gpct *VAR_5, unsigned int VAR_6,
    unsigned int *VAR_7)
{
 struct ni_gpct_device *VAR_8 = VAR_5->counter_dev;
 unsigned int VAR_9 = VAR_5->counter_index;
 unsigned int VAR_10, VAR_11, VAR_12;

 if (VAR_8->variant != VAR_4)

  return -VAR_0;

 VAR_10 = FUNC_0(VAR_9);


 if (VAR_6 == VAR_1 ||
     (VAR_6 >= FUNC_1(0) && VAR_6 <= FUNC_1(-1))) {
  VAR_11 = 10;
 } else if (VAR_6 == VAR_2 ||
     (VAR_6 >= FUNC_2(0) && VAR_6 <= FUNC_2(-1))) {
  VAR_11 = 5;
 } else if (VAR_6 == VAR_3 ||
     (VAR_6 >= FUNC_3(0) && VAR_6 <= FUNC_3(-1))) {
  VAR_11 = 0;
 } else {
  return -VAR_0;
 }

 VAR_12 = 0x1f;

 *VAR_7 = (FUNC_4(VAR_5, VAR_10) >> VAR_11) & VAR_12;
 return 0;
}
