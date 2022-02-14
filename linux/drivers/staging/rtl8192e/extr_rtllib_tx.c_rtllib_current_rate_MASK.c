
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_device {int mode; int rate; int HTCurrentOperaRate; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct rtllib_device *VAR_1)
{
 if (VAR_1->mode & VAR_0)
  return VAR_1->rate;

 if (VAR_1->HTCurrentOperaRate)
  return VAR_1->HTCurrentOperaRate;
 else
  return VAR_1->rate & 0x7F;
}
