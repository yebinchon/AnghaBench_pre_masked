
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_11, u32 VAR_12, u32 VAR_13,
       u32 VAR_14)
{
 int VAR_15, VAR_16, VAR_17;


 VAR_14 |= VAR_5 | VAR_7;


 FUNC_3(VAR_11, VAR_9, VAR_6);


 FUNC_3(VAR_11, VAR_10, VAR_13);


 FUNC_3(VAR_11, VAR_8,
        (VAR_12 & VAR_4));


 FUNC_3(VAR_11, VAR_9, VAR_14);


 VAR_15 = VAR_2;
 if (FUNC_0(VAR_11))
  VAR_15 *= 100;


 VAR_17 = -VAR_3;
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  FUNC_4(5);
  VAR_13 = FUNC_2(VAR_11, VAR_9);
  if (VAR_13 & VAR_6) {
   VAR_17 = 0;
   break;
  }
 }

 if (VAR_17 == -VAR_3)
  FUNC_1(VAR_0 | VAR_1,
     "nvram write timeout expired\n");
 return VAR_17;
}
