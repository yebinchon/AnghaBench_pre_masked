
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (struct sd*,int,int) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_0, s16 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x143d, VAR_1 & 0xff);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_0, 0x143e, VAR_1 >> 8);
}
