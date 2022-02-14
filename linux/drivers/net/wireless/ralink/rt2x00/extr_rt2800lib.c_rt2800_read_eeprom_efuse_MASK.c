
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,unsigned int) ;

int FUNC_1(struct rt2x00_dev *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0 / sizeof(u16); VAR_2 += 8)
  FUNC_0(VAR_1, VAR_2);

 return 0;
}
