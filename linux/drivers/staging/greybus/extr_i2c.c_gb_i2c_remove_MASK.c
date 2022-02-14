
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbphy_device {int dummy; } ;
struct gb_i2c_device {int adapter; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;


 int FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 struct gb_i2c_device* FUNC_2 (struct gbphy_device*) ;
 int FUNC_3 (struct gbphy_device*) ;
 int FUNC_4 (struct gbphy_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gb_i2c_device*) ;

__attribute__((used)) static void FUNC_7(struct gbphy_device *VAR_0)
{
 struct gb_i2c_device *VAR_1 = FUNC_2(VAR_0);
 struct gb_connection *VAR_2 = VAR_1->connection;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3)
  FUNC_3(VAR_0);

 FUNC_5(&VAR_1->adapter);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_6(VAR_1);
}
