
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ is_em2800; } ;
struct em28xx {int * i2c_client; TYPE_1__ board; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *,int*,int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_1, unsigned int VAR_2, u16 VAR_3,
     bool VAR_4, u16 VAR_5, u8 *VAR_6)
{
 int VAR_7 = VAR_5, VAR_8, VAR_9, VAR_10;
 u8 VAR_11[2];


 if (VAR_3 + VAR_7 > (VAR_4 * 0xff00 + 0xff + 1))
  return -VAR_0;

 VAR_11[0] = VAR_3 >> 8;
 VAR_11[1] = VAR_3 & 0xff;
 VAR_10 = FUNC_1(&VAR_1->i2c_client[VAR_2],
         VAR_11 + !VAR_4, 1 + VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_1->board.is_em2800)
  VAR_9 = 4;
 else
  VAR_9 = 64;
 while (VAR_7 > 0) {
  if (VAR_7 > VAR_9)
   VAR_8 = VAR_9;
  else
   VAR_8 = VAR_7;

  VAR_10 = FUNC_0(&VAR_1->i2c_client[VAR_2], VAR_6, VAR_8);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_7 -= VAR_8;
  VAR_6 += VAR_8;
 }

 return VAR_5;
}
