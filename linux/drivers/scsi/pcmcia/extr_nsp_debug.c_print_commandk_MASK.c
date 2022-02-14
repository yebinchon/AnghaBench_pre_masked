
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 char* VAR_0 ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3 (unsigned char *VAR_1)
{
 int VAR_2, VAR_3;
 FUNC_2(VAR_0);
 FUNC_1(VAR_1[0]);

 if ((VAR_1[0] >> 5) == 6 ||
     (VAR_1[0] >> 5) == 7 ) {
  VAR_3 = 12;
 } else {
  VAR_3 = FUNC_0(VAR_1[0]);
 }
 for ( VAR_2 = 1; VAR_2 < VAR_3; ++VAR_2) {
  FUNC_2("%02x ", VAR_1[VAR_2]);
 }

 switch (VAR_3) {
 case 6:
  FUNC_2("LBA=%d len=%d",
         (((unsigned int)VAR_1[1] & 0x0f) << 16) |
         ( (unsigned int)VAR_1[2] << 8) |
         ( (unsigned int)VAR_1[3] ),
         (unsigned int)VAR_1[4]
   );
  break;
 case 10:
  FUNC_2("LBA=%d len=%d",
         ((unsigned int)VAR_1[2] << 24) |
         ((unsigned int)VAR_1[3] << 16) |
         ((unsigned int)VAR_1[4] << 8) |
         ((unsigned int)VAR_1[5] ),
         ((unsigned int)VAR_1[7] << 8) |
         ((unsigned int)VAR_1[8] )
         );
  break;
 case 12:
  FUNC_2("LBA=%d len=%d",
         ((unsigned int)VAR_1[2] << 24) |
         ((unsigned int)VAR_1[3] << 16) |
         ((unsigned int)VAR_1[4] << 8) |
         ((unsigned int)VAR_1[5] ),
         ((unsigned int)VAR_1[6] << 24) |
         ((unsigned int)VAR_1[7] << 16) |
         ((unsigned int)VAR_1[8] << 8) |
         ((unsigned int)VAR_1[9] )
         );
  break;
 default:
  break;
 }
 FUNC_2("\n");
}
