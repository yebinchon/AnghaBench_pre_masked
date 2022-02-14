
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct pnp_dev*,int,int) ;
 int FUNC_3 (struct pnp_dev*,int,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct pnp_dev*) ;
 int FUNC_6 (struct pnp_dev*,int,int) ;
 int FUNC_7 (struct pnp_dev*,int,int) ;

__attribute__((used)) static unsigned char *FUNC_8(struct pnp_dev *VAR_2,
           unsigned char *VAR_3,
           unsigned char *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (!VAR_3)
  return ((void*)0);

 FUNC_4(&VAR_2->dev, "parse allocated resources\n");

 FUNC_5(VAR_2);

 while ((char *)VAR_3 < (char *)VAR_4) {


  if (VAR_3[0] & VAR_1) {
   VAR_5 = (VAR_3[2] << 8) | VAR_3[1];
   VAR_6 = VAR_3[0];
  } else {
   VAR_5 = VAR_3[0] & 0x07;
   VAR_6 = ((VAR_3[0] >> 3) & 0x0f);
  }

  switch (VAR_6) {

  case 136:
   if (VAR_5 != 9)
    goto len_err;
   VAR_7 = *(short *)&VAR_3[4];
   VAR_8 = *(short *)&VAR_3[10];
   FUNC_7(VAR_2, VAR_7, VAR_8);
   break;

  case 138:

   break;

  case 134:

   break;

  case 135:
   if (VAR_5 != 17)
    goto len_err;
   VAR_7 = *(int *)&VAR_3[4];
   VAR_8 = *(int *)&VAR_3[16];
   FUNC_7(VAR_2, VAR_7, VAR_8);
   break;

  case 137:
   if (VAR_5 != 9)
    goto len_err;
   VAR_7 = *(int *)&VAR_3[4];
   VAR_8 = *(int *)&VAR_3[8];
   FUNC_7(VAR_2, VAR_7, VAR_8);
   break;

  case 130:
   if (VAR_5 < 2 || VAR_5 > 3)
    goto len_err;
   VAR_11 = 0;
   VAR_7 = -1;
   VAR_9 = VAR_3[1] + VAR_3[2] * 256;
   for (VAR_10 = 0; VAR_10 < 16; VAR_10++, VAR_9 = VAR_9 >> 1)
    if (VAR_9 & 0x01)
     VAR_7 = VAR_10;
   if (VAR_7 != -1)
    FUNC_1(VAR_7, 1);
   else
    VAR_11 = VAR_0;
   FUNC_3(VAR_2, VAR_7, VAR_11);
   break;

  case 133:
   if (VAR_5 != 2)
    goto len_err;
   VAR_11 = 0;
   VAR_7 = -1;
   VAR_9 = VAR_3[1];
   for (VAR_10 = 0; VAR_10 < 8; VAR_10++, VAR_9 = VAR_9 >> 1)
    if (VAR_9 & 0x01)
     VAR_7 = VAR_10;
   if (VAR_7 == -1)
    VAR_11 = VAR_0;
   FUNC_2(VAR_2, VAR_7, VAR_11);
   break;

  case 129:
   if (VAR_5 != 7)
    goto len_err;
   VAR_7 = VAR_3[2] + VAR_3[3] * 256;
   VAR_8 = VAR_3[7];
   FUNC_6(VAR_2, VAR_7, VAR_8);
   break;

  case 128:

   break;

  case 131:
   if (VAR_5 != 3)
    goto len_err;
   VAR_7 = VAR_3[1] + VAR_3[2] * 256;
   VAR_8 = VAR_3[3];
   FUNC_6(VAR_2, VAR_7, VAR_8);
   break;

  case 132:
   VAR_3 = VAR_3 + 2;
   return (unsigned char *)VAR_3;
   break;

  default:
len_err:
   FUNC_0(&VAR_2->dev, "unknown tag %#x length %d\n",
    VAR_6, VAR_5);
   break;
  }


  if (VAR_3[0] & VAR_1)
   VAR_3 += VAR_5 + 3;
  else
   VAR_3 += VAR_5 + 1;
 }

 FUNC_0(&VAR_2->dev, "no end tag in resource structure\n");

 return ((void*)0);
}
