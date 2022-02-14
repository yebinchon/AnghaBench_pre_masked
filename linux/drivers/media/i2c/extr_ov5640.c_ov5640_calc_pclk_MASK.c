
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct ov5640_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (struct ov5640_dev*,unsigned long,unsigned long*,unsigned long*,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_1(struct ov5640_dev *VAR_3,
          unsigned long VAR_4,
          u8 *VAR_5, u8 *VAR_6, u8 *VAR_7,
          u8 *VAR_8, u8 *VAR_9, u8 *VAR_10)
{
 unsigned long VAR_11 = VAR_4 * VAR_2 * VAR_0 *
    VAR_1;

 VAR_11 = FUNC_0(VAR_3, VAR_11, VAR_5, VAR_6,
        VAR_7);
 *VAR_8 = VAR_2;
 *VAR_9 = VAR_0;
 *VAR_10 = VAR_1;

 return VAR_11 / *VAR_8 / *VAR_9 / *VAR_10;
}
