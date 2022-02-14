
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


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
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(void)
{
 u8 VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;

 FUNC_4(&VAR_14, VAR_19);





 VAR_16 = FUNC_2(VAR_5);
 FUNC_3(VAR_5, 0);



 VAR_17 = FUNC_2(VAR_5) & 0x0f;
 FUNC_3(VAR_5, 0x0f);



 VAR_18 = FUNC_2(VAR_5) & 0x0f;
 FUNC_3(VAR_5, VAR_16);
 if (VAR_17 != 0 || VAR_18 != 0x0f) {

  FUNC_5(&VAR_14, VAR_19);
  FUNC_1("port existence test failed, cannot continue\n");
  return -VAR_0;
 }


 FUNC_0(0, VAR_15 + VAR_10);
 FUNC_0(0, VAR_15 + VAR_5);


 FUNC_0(VAR_8 | VAR_9, VAR_15 + VAR_7);
 FUNC_0(1, VAR_15 + VAR_1); FUNC_0(0, VAR_15 + VAR_2);

 FUNC_0(VAR_9, VAR_15 + VAR_7);

 FUNC_0(VAR_4, VAR_15 + VAR_3);


 FUNC_0(VAR_6, VAR_15 + VAR_5);

 FUNC_0(VAR_11 | VAR_13 | VAR_12, VAR_15 + VAR_10);
 FUNC_5(&VAR_14, VAR_19);

 return 0;
}
