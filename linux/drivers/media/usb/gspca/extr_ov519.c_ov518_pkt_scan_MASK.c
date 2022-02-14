
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int packet_nr; } ;
struct gspca_dev {scalar_t__ last_packet_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,char*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;



 if ((!(VAR_5[0] | VAR_5[1] | VAR_5[2] | VAR_5[3] | VAR_5[5])) && VAR_5[6]) {
  FUNC_2(VAR_4, (VAR_5[6] >> 1) & 1);
  FUNC_1(VAR_4, VAR_3, ((void*)0), 0);
  FUNC_1(VAR_4, VAR_1, ((void*)0), 0);
  VAR_7->packet_nr = 0;
 }

 if (VAR_4->last_packet_type == VAR_0)
  return;


 if (VAR_6 & 7) {
  VAR_6--;
  if (VAR_7->packet_nr == VAR_5[VAR_6])
   VAR_7->packet_nr++;



  else if (VAR_7->packet_nr == 0 || VAR_5[VAR_6]) {
   FUNC_0(VAR_4, "Invalid packet nr: %d (expect: %d)\n",
      (int)VAR_5[VAR_6], (int)VAR_7->packet_nr);
   VAR_4->last_packet_type = VAR_0;
   return;
  }
 }


 FUNC_1(VAR_4, VAR_2, VAR_5, VAR_6);
}
