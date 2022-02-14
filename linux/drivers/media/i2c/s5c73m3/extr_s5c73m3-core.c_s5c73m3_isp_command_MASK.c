
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5c73m3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s5c73m3*,int ) ;
 int FUNC_1 (struct s5c73m3*,int,int) ;

int FUNC_2(struct s5c73m3 *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, 0x00095000, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, 0x00095002, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_2, VAR_0, 0x0001);
}
