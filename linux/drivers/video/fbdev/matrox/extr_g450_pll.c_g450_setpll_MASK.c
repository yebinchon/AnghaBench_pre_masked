
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;





 int FUNC_0 (struct matrox_fb_info const*,int ,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct matrox_fb_info *VAR_18,
           unsigned int VAR_19, unsigned int VAR_20)
{
 switch (VAR_20) {
  case 132:
   FUNC_0(VAR_18, VAR_4, VAR_19 >> 16);
   FUNC_0(VAR_18, VAR_5, VAR_19 >> 8);
   FUNC_0(VAR_18, VAR_6, VAR_19);
   return VAR_13;

  case 131:
   FUNC_0(VAR_18, VAR_7, VAR_19 >> 16);
   FUNC_0(VAR_18, VAR_8, VAR_19 >> 8);
   FUNC_0(VAR_18, VAR_9, VAR_19);
   return VAR_13;

  case 130:
   FUNC_0(VAR_18, VAR_10, VAR_19 >> 16);
   FUNC_0(VAR_18, VAR_11, VAR_19 >> 8);
   FUNC_0(VAR_18, VAR_12, VAR_19);
   return VAR_13;

  case 129:
   FUNC_0(VAR_18, VAR_0, VAR_19 >> 16);
   FUNC_0(VAR_18, VAR_1, VAR_19 >> 8);
   FUNC_0(VAR_18, VAR_2, VAR_19);
   return VAR_3;

  case 128:
   FUNC_0(VAR_18, VAR_14, VAR_19 >> 16);
   FUNC_0(VAR_18, VAR_15, VAR_19 >> 8);
   FUNC_0(VAR_18, VAR_16, VAR_19);
   return VAR_17;
 }
 return 0;
}
