
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucbus_write_cmd {int member_0; int member_1; } ;
struct sd {int gspca_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sd*,int ,int) ;
 int FUNC_1 (int *,struct ucbus_write_cmd const*,int,int) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_1)
{
 static const struct ucbus_write_cmd VAR_2 = {
    0xf031, 0
 };

 FUNC_1(&VAR_1->gspca_dev, &VAR_2, 1, 1);

 FUNC_0(VAR_1, VAR_0, 0xff00);
}
