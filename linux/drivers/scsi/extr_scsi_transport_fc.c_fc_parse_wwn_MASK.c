
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn ;
typedef unsigned int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int*,int ,int) ;
 int FUNC_2 (unsigned int*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, u64 *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 u8 VAR_5[8];

 FUNC_1(VAR_5, 0, sizeof(VAR_5));


 for (VAR_3=0, VAR_4=0; VAR_3 < 16; VAR_3++) {
  int VAR_6;

  VAR_6 = FUNC_0(*VAR_1++);
  if (VAR_6 >= 0)
   VAR_4 = (VAR_4 << 4) | VAR_6;
  else
   return -VAR_0;
  if (VAR_3 % 2) {
   VAR_5[VAR_3/2] = VAR_4 & 0xff;
   VAR_4 = 0;
  }
 }

 *VAR_2 = FUNC_2(VAR_5);

 return 0;
}
