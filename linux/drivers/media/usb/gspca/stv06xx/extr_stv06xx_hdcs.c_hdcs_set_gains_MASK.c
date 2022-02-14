
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4[4];


 if (VAR_2 > 127)
  VAR_2 = 0x80 | (VAR_2 / 2);

 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_2;
 VAR_4[2] = VAR_2;
 VAR_4[3] = VAR_2;

 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_4, 4);
 return VAR_3;
}
