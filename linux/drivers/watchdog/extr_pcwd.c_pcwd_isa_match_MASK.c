
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_4 ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = VAR_4[VAR_6];
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_3 >= VAR_0)
  FUNC_2("pcwd_isa_match id=%d\n", VAR_6);

 if (!FUNC_5(VAR_7, 4, "PCWD")) {
  FUNC_3("Port 0x%04x unavailable\n", VAR_7);
  return 0;
 }

 VAR_13 = 0;

 VAR_8 = FUNC_0(VAR_7);
 VAR_10 = FUNC_0(VAR_7 + 1);
 if (VAR_8 != 0xff || VAR_10 != 0xff) {

  for (VAR_12 = 0; VAR_12 < 4; ++VAR_12) {

   FUNC_1(500);

   VAR_9 = VAR_8;
   VAR_11 = VAR_10;

   VAR_8 = FUNC_0(VAR_7);
   VAR_10 = FUNC_0(VAR_7 + 1);


   if ((VAR_8 ^ VAR_9) & VAR_1 ||
       (VAR_10 ^ VAR_11) & VAR_2) {
    VAR_13 = 1;
    break;
   }
  }
 }
 FUNC_4(VAR_7, 4);

 return VAR_13;
}
