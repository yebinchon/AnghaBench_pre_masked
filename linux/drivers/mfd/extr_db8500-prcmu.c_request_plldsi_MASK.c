
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
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(bool VAR_10)
{
 int VAR_11 = 0;
 u32 VAR_12;

 FUNC_3((VAR_5 |
  VAR_6), (VAR_10 ?
  VAR_4 : VAR_7));

 VAR_12 = FUNC_1(VAR_8);
 if (VAR_10)
  VAR_12 |= VAR_9;
 else
  VAR_12 &= ~VAR_9;
 FUNC_3(VAR_12, VAR_8);

 if (VAR_10) {
  unsigned int VAR_13;
  bool VAR_14 = FUNC_0();

  for (VAR_13 = 10; !VAR_14 && (VAR_13 > 0); --VAR_13) {
   FUNC_2(100);
   VAR_14 = FUNC_0();
  }
  if (VAR_14) {
   FUNC_3(VAR_2,
    VAR_3);
  } else {
   FUNC_3((VAR_5 |
    VAR_6),
    VAR_7);
   VAR_12 &= ~VAR_9;
   FUNC_3(VAR_12, VAR_8);
   VAR_11 = -VAR_0;
  }
 } else {
  FUNC_3(VAR_2, VAR_1);
 }
 return VAR_11;
}
