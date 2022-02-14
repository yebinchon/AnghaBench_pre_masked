
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int positions ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned short*,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0,
      unsigned char *VAR_1,
      uint32_t VAR_2, uint32_t VAR_3)
{
 unsigned short VAR_4[256];
 int VAR_5 = 0;
 int VAR_6=0;

 FUNC_1(VAR_4,0,sizeof(VAR_4));

 while (VAR_5<VAR_3) {
  unsigned char VAR_7;
  int VAR_8;
  int VAR_9;

  VAR_7 = VAR_0[VAR_6++];
  VAR_1[VAR_5++] = VAR_7;
  VAR_9 = VAR_0[VAR_6++];
  VAR_8 = VAR_4[VAR_7];

  VAR_4[VAR_7]=VAR_5;
  if (VAR_9) {
   if (VAR_8 + VAR_9 >= VAR_5) {
    while(VAR_9) {
     VAR_1[VAR_5++] = VAR_1[VAR_8++];
     VAR_9--;
    }
   } else {
    FUNC_0(&VAR_1[VAR_5],&VAR_1[VAR_8],VAR_9);
    VAR_5+=VAR_9;
   }
  }
 }
 return 0;
}
