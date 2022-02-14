
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf2123_data {int map; } ;
struct device {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcf2123_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, long VAR_4)
{
 struct pcf2123_data *VAR_5 = FUNC_1(VAR_3);
 s8 VAR_6;

 if (VAR_4 > VAR_1 * 127)
  VAR_6 = 127;
 else if (VAR_4 < VAR_1 * -128)
  VAR_6 = -128;
 else
  VAR_6 = FUNC_0(VAR_4, VAR_1);


 if (VAR_6 & 1 && VAR_6 <= 63 && VAR_6 >= -64) {

  VAR_6 &= ~VAR_0;
 } else {

  VAR_6 >>= 1;
  VAR_6 |= VAR_0;
 }

 return FUNC_2(VAR_5->map, VAR_2, (unsigned int)VAR_6);
}
