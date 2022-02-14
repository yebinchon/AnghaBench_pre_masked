
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int last_packet_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,...) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 int VAR_8;

 VAR_8 = VAR_6[0] & 0x3f;
 VAR_7 = (int) (((VAR_6[0] & 0xc0) << 2) | VAR_6[1]);
 if (VAR_8 == 0x3f) {
  FUNC_0(VAR_5, VAR_1,
     "header packet found datalength %d !!\n", VAR_7);
  FUNC_0(VAR_5, VAR_1, "G %d R %d G %d B %d",
     VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5]);
  VAR_6 += 30;

  FUNC_1(VAR_5, VAR_4, ((void*)0), 0);
  FUNC_1(VAR_5, VAR_2, VAR_6, VAR_7);
  return;
 }
 if (VAR_7) {
  VAR_6 += 8;
  FUNC_1(VAR_5, VAR_3, VAR_6, VAR_7);
 } else {
  VAR_5->last_packet_type = VAR_0;
 }
}
