
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbtest_dev {int intf; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,unsigned int) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct scatterlist* FUNC_3 (int,int,int ) ;
 char* FUNC_4 (unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*,char*,unsigned int) ;

__attribute__((used)) static struct scatterlist *
FUNC_7(int VAR_2, int VAR_3, int VAR_4, struct usbtest_dev *VAR_5, int VAR_6)
{
 struct scatterlist *VAR_7;
 unsigned int VAR_8 = 0;
 unsigned VAR_9;
 unsigned VAR_10 = VAR_3;
 unsigned VAR_11 =
  FUNC_1(FUNC_2(VAR_5->intf), VAR_6);

 if (VAR_3 == 0)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);
 FUNC_5(VAR_7, VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  char *VAR_12;
  unsigned VAR_13;

  VAR_12 = FUNC_4(VAR_10, VAR_0);
  if (!VAR_12) {
   FUNC_0(VAR_7, VAR_9);
   return ((void*)0);
  }


  FUNC_6(&VAR_7[VAR_9], VAR_12, VAR_10);

  switch (VAR_1) {
  case 0:

   break;
  case 1:
   for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
    *VAR_12++ = (u8) (((VAR_13 + VAR_8) % VAR_11) % 63);
   VAR_8 += VAR_10;
   break;
  }

  if (VAR_4) {
   VAR_10 += VAR_4;
   VAR_10 %= VAR_3;
   if (VAR_10 == 0)
    VAR_10 = (VAR_4 < VAR_3) ? VAR_4 : VAR_3;
  }
 }

 return VAR_7;
}
