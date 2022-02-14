
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_vibrator_device {int connection; int minor; int dev; int delayed_work; } ;
struct gb_bundle {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gb_bundle*) ;
 int FUNC_5 (struct gb_bundle*) ;
 struct gb_vibrator_device* FUNC_6 (struct gb_bundle*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct gb_vibrator_device*) ;
 int VAR_0 ;
 int FUNC_9 (struct gb_vibrator_device*) ;

__attribute__((used)) static void FUNC_10(struct gb_bundle *VAR_1)
{
 struct gb_vibrator_device *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  FUNC_4(VAR_1);

 if (FUNC_0(&VAR_2->delayed_work))
  FUNC_9(VAR_2);

 FUNC_1(VAR_2->dev);
 FUNC_7(&VAR_0, VAR_2->minor);
 FUNC_3(VAR_2->connection);
 FUNC_2(VAR_2->connection);
 FUNC_8(VAR_2);
}
