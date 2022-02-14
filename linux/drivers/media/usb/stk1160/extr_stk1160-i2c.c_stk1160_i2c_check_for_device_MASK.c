
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk1160 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stk1160*,int) ;
 int FUNC_1 (struct stk1160*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct stk1160 *VAR_4,
  unsigned char VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_4, VAR_1, 0x00);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_4, VAR_2, 0x20);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, 0x01);
 if (VAR_6 < 0)
  return -VAR_0;

 return 0;
}
