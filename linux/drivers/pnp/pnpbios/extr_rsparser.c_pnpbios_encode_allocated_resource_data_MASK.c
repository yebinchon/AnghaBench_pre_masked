
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pnp_dev*,int ,int) ;
 int FUNC_2 (struct pnp_dev*,unsigned char*,int ) ;
 int FUNC_3 (struct pnp_dev*,unsigned char*,int ) ;
 int FUNC_4 (struct pnp_dev*,unsigned char*,int ) ;
 int FUNC_5 (struct pnp_dev*,unsigned char*,int ) ;
 int FUNC_6 (struct pnp_dev*,unsigned char*,int ) ;
 int FUNC_7 (struct pnp_dev*,unsigned char*,int ) ;
 int FUNC_8 (struct pnp_dev*,unsigned char*,int ) ;

__attribute__((used)) static unsigned char *FUNC_9(struct pnp_dev
        *VAR_5,
            unsigned char *VAR_6,
            unsigned char *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

 if (!VAR_6)
  return ((void*)0);

 while ((char *)VAR_6 < (char *)VAR_7) {


  if (VAR_6[0] & VAR_4) {
   VAR_8 = (VAR_6[2] << 8) | VAR_6[1];
   VAR_9 = VAR_6[0];
  } else {
   VAR_8 = VAR_6[0] & 0x07;
   VAR_9 = ((VAR_6[0] >> 3) & 0x0f);
  }

  switch (VAR_9) {

  case 135:
   if (VAR_8 != 9)
    goto len_err;
   FUNC_6(VAR_5, VAR_6,
    FUNC_1(VAR_5, VAR_3, VAR_13));
   VAR_13++;
   break;

  case 134:
   if (VAR_8 != 17)
    goto len_err;
   FUNC_7(VAR_5, VAR_6,
    FUNC_1(VAR_5, VAR_3, VAR_13));
   VAR_13++;
   break;

  case 136:
   if (VAR_8 != 9)
    goto len_err;
   FUNC_3(VAR_5, VAR_6,
    FUNC_1(VAR_5, VAR_3, VAR_13));
   VAR_13++;
   break;

  case 130:
   if (VAR_8 < 2 || VAR_8 > 3)
    goto len_err;
   FUNC_5(VAR_5, VAR_6,
    FUNC_1(VAR_5, VAR_2, VAR_11));
   VAR_11++;
   break;

  case 133:
   if (VAR_8 != 2)
    goto len_err;
   FUNC_2(VAR_5, VAR_6,
    FUNC_1(VAR_5, VAR_0, VAR_12));
   VAR_12++;
   break;

  case 129:
   if (VAR_8 != 7)
    goto len_err;
   FUNC_8(VAR_5, VAR_6,
    FUNC_1(VAR_5, VAR_1, VAR_10));
   VAR_10++;
   break;

  case 128:

   break;

  case 131:
   if (VAR_8 != 3)
    goto len_err;
   FUNC_4(VAR_5, VAR_6,
    FUNC_1(VAR_5, VAR_1, VAR_10));
   VAR_10++;
   break;

  case 132:
   VAR_6 = VAR_6 + 2;
   return (unsigned char *)VAR_6;
   break;

  default:
len_err:
   FUNC_0(&VAR_5->dev, "unknown tag %#x length %d\n",
    VAR_9, VAR_8);
   break;
  }


  if (VAR_6[0] & VAR_4)
   VAR_6 += VAR_8 + 3;
  else
   VAR_6 += VAR_8 + 1;
 }

 FUNC_0(&VAR_5->dev, "no end tag in resource structure\n");

 return ((void*)0);
}
