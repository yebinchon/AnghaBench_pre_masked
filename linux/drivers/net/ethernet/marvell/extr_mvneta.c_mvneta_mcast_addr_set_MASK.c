
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_port {int * mcast_count; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,char*,int) ;
 unsigned char FUNC_1 (unsigned char*) ;
 int FUNC_2 (struct mvneta_port*,unsigned char,int) ;
 int FUNC_3 (struct mvneta_port*,unsigned char,int) ;
 int FUNC_4 (int ,char*,unsigned char,...) ;

__attribute__((used)) static int FUNC_5(struct mvneta_port *VAR_1, unsigned char *VAR_2,
     int VAR_3)
{
 unsigned char VAR_4 = 0;

 if (FUNC_0(VAR_2, "\x01\x00\x5e\x00\x00", 5) == 0) {
  FUNC_3(VAR_1, VAR_2[5], VAR_3);
  return 0;
 }

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_3 == -1) {
  if (VAR_1->mcast_count[VAR_4] == 0) {
   FUNC_4(VAR_1->dev, "No valid Mcast for crc8=0x%02x\n",
        VAR_4);
   return -VAR_0;
  }

  VAR_1->mcast_count[VAR_4]--;
  if (VAR_1->mcast_count[VAR_4] != 0) {
   FUNC_4(VAR_1->dev,
        "After delete there are %d valid Mcast for crc8=0x%02x\n",
        VAR_1->mcast_count[VAR_4], VAR_4);
   return -VAR_0;
  }
 } else
  VAR_1->mcast_count[VAR_4]++;

 FUNC_2(VAR_1, VAR_4, VAR_3);

 return 0;
}
