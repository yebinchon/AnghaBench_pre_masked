
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int *) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*,int *) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_0, u8 *VAR_1)
{
 int VAR_2, VAR_3;
 __u8 VAR_4[4];

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = -1;
 for (VAR_2 = 0; VAR_2 < 256 && VAR_3 < 2; VAR_2++)
  VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 < 0) {
  FUNC_1("long command status read error %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_0(VAR_4, 0, 4);
 VAR_3 = FUNC_4(VAR_0, VAR_4);
 if (VAR_3 < 0)
  return VAR_3;



 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
