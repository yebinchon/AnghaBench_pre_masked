
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sizeimage; } ;
struct sd {TYPE_1__ mode; } ;
struct gspca_dev {int last_packet_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3,
   u8 *VAR_4,
   int VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;





 if (VAR_5 != VAR_6->mode.sizeimage) {
  VAR_3->last_packet_type = VAR_0;
  return;
 }




 FUNC_0(VAR_3, VAR_2, ((void*)0), 0);


 FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5);
}
