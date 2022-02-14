
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lynx_accel {scalar_t__ (* de_wait ) () ;} ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 unsigned int FUNC_0 (struct lynx_accel*) ;
 int FUNC_1 (unsigned char*,char const*,unsigned int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct lynx_accel*,unsigned int) ;
 int FUNC_4 (struct lynx_accel*,int ,unsigned int) ;

int FUNC_5(struct lynx_accel *VAR_29,
   const char *VAR_30,
   u32 VAR_31,
   u32 VAR_32,
   u32 VAR_33,
   u32 VAR_34,
   u32 VAR_35,
   u32 VAR_36,
   u32 VAR_37,
   u32 VAR_38,
   u32 VAR_39,
   u32 VAR_40,
   u32 VAR_41,
   u32 VAR_42)
{
 unsigned int VAR_43;
 unsigned int VAR_44;
 unsigned int VAR_45;
 unsigned int VAR_46 = 0;
 unsigned char VAR_47[4];
 int VAR_48, VAR_49;

 VAR_32 &= 7;
 VAR_43 = (VAR_38 + VAR_32 + 7) / 8;
 VAR_44 = VAR_43 & ~3;
 VAR_45 = VAR_43 & 3;

 if (VAR_29->de_wait() != 0)
  return -1;





 FUNC_4(VAR_29, VAR_24, 0);





 FUNC_4(VAR_29, VAR_23, VAR_33);






 FUNC_4(VAR_29, VAR_16,
    ((VAR_34 / VAR_35 << VAR_18) &
     VAR_17) |
    (VAR_34 / VAR_35 & VAR_19));






 FUNC_4(VAR_29, VAR_25,
    ((VAR_34 / VAR_35 << VAR_27) &
     VAR_26) |
    (VAR_34 / VAR_35 & VAR_28));






 FUNC_4(VAR_29, VAR_20,
    (VAR_32 << VAR_22) &
    VAR_21);

 FUNC_4(VAR_29, VAR_7,
    ((VAR_36 << VAR_9) & VAR_8) |
    (VAR_37 & VAR_10));

 FUNC_4(VAR_29, VAR_11,
    ((VAR_38 << VAR_13) & VAR_12) |
    (VAR_39 & VAR_14));

 FUNC_4(VAR_29, VAR_15, VAR_40);
 FUNC_4(VAR_29, VAR_0, VAR_41);

 VAR_46 = (VAR_42 & VAR_4) |
  VAR_5 | VAR_2 |
  VAR_3 | VAR_6;

 FUNC_4(VAR_29, VAR_1, VAR_46 | FUNC_0(VAR_29));


 for (VAR_48 = 0; VAR_48 < VAR_39; VAR_48++) {

  for (VAR_49 = 0; VAR_49 < (VAR_44 / 4); VAR_49++)
   FUNC_3(VAR_29, *(unsigned int *)(VAR_30 + (VAR_49 * 4)));

  if (VAR_45) {
   FUNC_1(VAR_47, VAR_30 + VAR_44,
          VAR_45);
   FUNC_3(VAR_29, *(unsigned int *)VAR_47);
  }

  VAR_30 += VAR_31;
 }

 return 0;
}
