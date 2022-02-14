
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct b53_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b53_device*) ;
 int FUNC_1 (struct b53_device*,int ,int ,unsigned int*) ;
 int FUNC_2 (struct b53_device*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct b53_device *VAR_5, unsigned int VAR_6)
{
 u8 VAR_7;

 if (VAR_6 > VAR_0)
  return -VAR_4;

 FUNC_1(VAR_5, VAR_2, VAR_3, &VAR_7);
 VAR_7 |= VAR_1;
 if (VAR_6)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;
 FUNC_2(VAR_5, VAR_2, VAR_3, VAR_7);

 return FUNC_0(VAR_5);
}
