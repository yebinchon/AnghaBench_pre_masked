
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_dev {int dummy; } ;
struct budget {struct saa7146_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct saa7146_dev*,int ) ;
 int FUNC_1 (struct saa7146_dev*,int) ;
 int FUNC_2 (struct saa7146_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct budget *VAR_5, u32 VAR_6,
  int VAR_7, int VAR_8, int VAR_9)
{
 struct saa7146_dev *VAR_10 = VAR_5->dev;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_2(VAR_10, VAR_1, (VAR_8 << 17) | 0x10000 | (VAR_7 & 0xffff));
 FUNC_2(VAR_10, VAR_2, VAR_6);
 FUNC_2(VAR_10, VAR_3, 0);
 FUNC_2(VAR_10, VAR_4, (2 << 16) | 2);

 VAR_11 = FUNC_1(VAR_10, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_10, VAR_0);
 VAR_11 &= (0xffffffffUL >> ((4 - VAR_8) * 8));
 return VAR_11;
}
