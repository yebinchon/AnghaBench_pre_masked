
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int dummy; } ;






 int FUNC_0 (struct fw_card*,int,int,int,int,unsigned long long,void*,size_t) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct fw_card *VAR_0, int VAR_1, int VAR_2,
  int VAR_3, int VAR_4, unsigned long long VAR_5,
  void *VAR_6, size_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 for (VAR_8 = 1; VAR_8 <= 5; VAR_8++) {
  VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

  switch (VAR_9) {
  case 130:
  case 128:
  case 131:
  case 129:
   return VAR_9;

  default:
   VAR_10 = 5 * VAR_8 * VAR_8;
   FUNC_1(VAR_10, VAR_10 * 2);
  }
 }

 return VAR_9;
}
