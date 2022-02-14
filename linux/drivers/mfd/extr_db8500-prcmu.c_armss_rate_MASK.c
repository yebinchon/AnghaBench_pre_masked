
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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
 unsigned long FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 u32 VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_1(VAR_3);

 if (VAR_10 & VAR_4) {


  VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_1);


  if (!(VAR_10 & VAR_5))
   VAR_11 /= 2;


  VAR_10 = FUNC_1(VAR_2);
  VAR_10 &= VAR_6;
  VAR_11 /= VAR_10;

 } else {
  VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_0);
 }

 return VAR_11;
}
