
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,unsigned char*,int) ;
 int FUNC_1 (struct net_device*,int ,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,unsigned int,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_1, unsigned int VAR_2)
{
 unsigned char *VAR_3 = FUNC_3 (65536, VAR_0);
 int VAR_4, VAR_5 = 0, VAR_6 = 0;

 if (!VAR_3)
  return 0;
 FUNC_4 (VAR_3, VAR_2, 65536);
 FUNC_1(VAR_1, 0, VAR_3, 65536);
 FUNC_4 (VAR_3, VAR_2 ^ 255, 65536);
 FUNC_0(VAR_1, 0, VAR_3, 65536);
 for (VAR_4 = 0; VAR_4 < 65536; VAR_4++) {
  if (VAR_3[VAR_4] != VAR_2 && !VAR_5) {
   FUNC_5 ("%s: buffer error (%02X %02X) %05X - ", VAR_1->name, VAR_2, VAR_3[VAR_4], VAR_4);
   VAR_5 = 1;
   VAR_6 ++;
  } else if (VAR_5 && VAR_3[VAR_4] == VAR_2) {
   FUNC_5 ("%05X\n", VAR_4);
   VAR_5 = 0;
  }
 }
 if (VAR_5)
  FUNC_5 ("10000\n");
 FUNC_2 (VAR_3);
 return VAR_6;
}
