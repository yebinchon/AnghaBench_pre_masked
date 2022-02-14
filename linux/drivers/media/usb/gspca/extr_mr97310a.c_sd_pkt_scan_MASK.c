
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct sd {int sof_read; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,unsigned char*,int) ;
 unsigned char* FUNC_1 (struct gspca_dev*,int *,unsigned char*,int) ;
 unsigned char* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;
 unsigned char *VAR_8;

 VAR_8 = FUNC_1(VAR_4, &VAR_7->sof_read, VAR_5, VAR_6);
 if (VAR_8) {
  int VAR_9;


  VAR_9 = VAR_8 - VAR_5;
  if (VAR_9 > sizeof VAR_3)
   VAR_9 -= sizeof VAR_3;
  else
   VAR_9 = 0;
  FUNC_0(VAR_4, VAR_2,
     VAR_5, VAR_9);

  FUNC_0(VAR_4, VAR_0,
   VAR_3, sizeof VAR_3);
  VAR_6 -= VAR_8 - VAR_5;
  VAR_5 = VAR_8;
 }
 FUNC_0(VAR_4, VAR_1, VAR_5, VAR_6);
}
