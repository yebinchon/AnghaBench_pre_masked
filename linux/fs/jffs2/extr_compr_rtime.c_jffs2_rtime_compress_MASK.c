
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int positions ;


 int FUNC_0 (unsigned short*,int ,int) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0,
    unsigned char *VAR_1,
    uint32_t *VAR_2, uint32_t *VAR_3)
{
 unsigned short VAR_4[256];
 int VAR_5 = 0;
 int VAR_6=0;

 FUNC_0(VAR_4,0,sizeof(VAR_4));

 while (VAR_6 < (*VAR_2) && VAR_5 <= (*VAR_3)-2) {
  int VAR_7, VAR_8=0;
  unsigned char VAR_9;

  VAR_9 = VAR_0[VAR_6];

  VAR_1[VAR_5++] = VAR_0[VAR_6++];

  VAR_7 = VAR_4[VAR_9];
  VAR_4[VAR_9]=VAR_6;

  while ((VAR_7 < VAR_6) && (VAR_6 < (*VAR_2)) &&
         (VAR_0[VAR_6]==VAR_0[VAR_7++]) && (VAR_8<255)) {
   VAR_6++;
   VAR_8++;
  }
  VAR_1[VAR_5++] = VAR_8;
 }

 if (VAR_5 >= VAR_6) {

  return -1;
 }


 *VAR_2 = VAR_6;
 *VAR_3 = VAR_5;
 return 0;
}
