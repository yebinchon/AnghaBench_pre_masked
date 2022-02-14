
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,unsigned char*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (struct net_device*,unsigned char*,int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned char*,unsigned char,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_7, unsigned char VAR_8)
{
 unsigned char *VAR_9 = FUNC_4(VAR_1, VAR_0);
 int VAR_10,VAR_11 = 0;
 int VAR_12 = 4;
 int VAR_13 = -1;

 if (!VAR_9)
  return 1;

 FUNC_5(VAR_9, VAR_8, VAR_1);
 FUNC_1(VAR_7, VAR_6, 0);
 FUNC_2(VAR_7, VAR_9, VAR_4);
 FUNC_1(VAR_7, VAR_6, VAR_3);
 FUNC_2(VAR_7, VAR_9 + VAR_3, VAR_2);
 FUNC_5(VAR_9, VAR_8 ^ 0xff, VAR_1);
 FUNC_1(VAR_7, VAR_5, 0);
 FUNC_0(VAR_7, VAR_9, VAR_4);
 FUNC_1(VAR_7, VAR_5, VAR_3);
 FUNC_0(VAR_7, VAR_9 + VAR_3, VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_9[VAR_10] != VAR_8) {
   if (VAR_12 > 0 && VAR_13 != VAR_9[VAR_10]) {
    FUNC_6("%s: RAM failed with (%02X instead of %02X) at 0x%04X",
           VAR_7->name, VAR_9[VAR_10], VAR_8, VAR_10);
    VAR_11 = 2;
    VAR_12--;
    VAR_13 = VAR_10;
   }
  } else {
   if (VAR_13 != -1) {
    if (VAR_13 != VAR_10 - 1)
     FUNC_6(" - 0x%04X\n", VAR_10 - 1);
    FUNC_6("\n");
    VAR_13 = -1;
   }
  }
 }
 if (VAR_13 != -1)
  FUNC_6(" - 0xffff\n");
 FUNC_3(VAR_9);

 return VAR_11;
}
