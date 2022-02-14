
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm2fb_par {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int FUNC_0 (struct pm2fb_par*,int) ;
 int FUNC_1 (struct pm2fb_par*,int ) ;
 int FUNC_2 (struct pm2fb_par*,int ) ;
 int FUNC_3 (struct pm2fb_par*,int ,int) ;
 int FUNC_4 (struct pm2fb_par*,int ,int) ;
 int FUNC_5 (int,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_6 (struct pm2fb_par*,int) ;
 int FUNC_7 (struct pm2fb_par*,int,int) ;
 int FUNC_8 (int,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct pm2fb_par *VAR_11, u32 VAR_12)
{
 int VAR_13;
 unsigned char VAR_14, VAR_15, VAR_16;

 switch (VAR_11->type) {
 case 128:
  FUNC_8(VAR_12/2, &VAR_14, &VAR_15, &VAR_16);
  FUNC_0(VAR_11, 12);
  FUNC_4(VAR_11, VAR_10, VAR_6 >> 8);
  FUNC_7(VAR_11, VAR_6, 0);
  FUNC_7(VAR_11, VAR_9, VAR_14);
  FUNC_7(VAR_11, VAR_7, VAR_15);
  FUNC_7(VAR_11, VAR_8, VAR_16);
  FUNC_7(VAR_11, VAR_6, 1);
  FUNC_9();
  for (VAR_13 = 256; VAR_13; VAR_13--)
   if (FUNC_6(VAR_11, VAR_6) & 2)
    break;
  FUNC_4(VAR_11, VAR_10, 0);
  break;
 case 129:
  FUNC_5(VAR_12, &VAR_14, &VAR_15, &VAR_16);
  FUNC_0(VAR_11, 10);
  FUNC_3(VAR_11, VAR_3, 6);
  FUNC_3(VAR_11, VAR_1, VAR_14);
  FUNC_3(VAR_11, VAR_2, VAR_15);
  FUNC_3(VAR_11, VAR_3, 8|VAR_16);
  FUNC_2(VAR_11, VAR_4);
  FUNC_9();
  for (VAR_13 = 256; VAR_13; VAR_13--)
   if (FUNC_1(VAR_11, VAR_5) & VAR_0)
    break;
  break;
 }
}
