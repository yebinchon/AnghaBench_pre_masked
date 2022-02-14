
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int expo_change_state; } ;
struct gspca_dev {int last_packet_type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct sd *VAR_5 = (struct sd *)VAR_2;

 switch (VAR_5->expo_change_state) {
 case 130:


  VAR_5->expo_change_state = 129;
  break;
 case 129:


  VAR_2->last_packet_type = VAR_0;
  VAR_5->expo_change_state = 128;
  break;
 case 128:
  break;
 }
 FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4);
}
