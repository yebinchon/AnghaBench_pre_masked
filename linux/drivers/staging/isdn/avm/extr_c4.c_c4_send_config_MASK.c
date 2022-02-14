
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
typedef int u_int ;
typedef int ******** u8 ;
typedef int u32 ;
struct TYPE_3__ {int len; unsigned char* data; scalar_t__ user; } ;
typedef TYPE_1__ capiloaddatapart ;
typedef int avmcard ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int **********,unsigned char*,int) ;
 int FUNC_1 (int **********,unsigned char*,int) ;
 int FUNC_2 (int *********,int ,int) ;
 int FUNC_3 (int *,int *********) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(avmcard *VAR_1, capiloaddatapart *VAR_2)
{
 u8 VAR_3[4];
 unsigned char *VAR_4;
 u_int VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_4(VAR_1, 1)) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_4(VAR_1, VAR_2->len)) != 0)
  return VAR_6;

 VAR_4 = VAR_2->data;
 VAR_5 = VAR_2->len;
 while (VAR_5 >= sizeof(u32)) {
  if (VAR_2->user) {
   if (FUNC_0(VAR_3, VAR_4, sizeof(VAR_3)))
    return -VAR_0;
  } else {
   FUNC_1(VAR_3, VAR_4, sizeof(VAR_3));
  }
  if ((VAR_6 = FUNC_3(VAR_1, VAR_3)) != 0)
   return VAR_6;
  VAR_5 -= sizeof(VAR_3);
  VAR_4 += sizeof(VAR_3);
 }
 if (VAR_5) {
  FUNC_2(VAR_3, 0, sizeof(VAR_3));
  if (VAR_2->user) {
   if (FUNC_0(&VAR_3, VAR_4, VAR_5))
    return -VAR_0;
  } else {
   FUNC_1(&VAR_3, VAR_4, VAR_5);
  }
  if ((VAR_6 = FUNC_3(VAR_1, VAR_3)) != 0)
   return VAR_6;
 }

 return 0;
}
