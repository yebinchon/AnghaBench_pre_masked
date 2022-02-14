
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stw481x {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct stw481x *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = (VAR_4 >> 3) & 0x03;
 u8 VAR_6 = (VAR_4 << 5) & 0xe0;
 unsigned int VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3->map, VAR_1, VAR_5);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_3->map, VAR_2, VAR_6);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_3->map, VAR_1, &VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_8 = (VAR_7 & 0x03) << 3;
 VAR_9 = FUNC_0(VAR_3->map, VAR_2, &VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_8 |= ((VAR_7 >> 5) & 0x07);
 if (VAR_8 != VAR_4)
  return -VAR_0;
 return (VAR_7 >> 1) & 0x0f;
}
