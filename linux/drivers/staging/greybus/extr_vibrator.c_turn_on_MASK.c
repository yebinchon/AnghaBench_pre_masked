
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct gb_vibrator_device {int delayed_work; TYPE_1__* connection; } ;
struct gb_bundle {int dummy; } ;
struct TYPE_2__ {struct gb_bundle* bundle; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int ,int *,int ) ;
 int FUNC_2 (struct gb_bundle*) ;
 int FUNC_3 (struct gb_bundle*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct gb_vibrator_device*) ;

__attribute__((used)) static int FUNC_7(struct gb_vibrator_device *VAR_1, u16 VAR_2)
{
 struct gb_bundle *VAR_3 = VAR_1->connection->bundle;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;


 if (FUNC_0(&VAR_1->delayed_work))
  FUNC_6(VAR_1);

 VAR_4 = FUNC_1(VAR_1->connection, VAR_0,
    ((void*)0), 0, ((void*)0), 0);
 if (VAR_4) {
  FUNC_3(VAR_3);
  return VAR_4;
 }

 FUNC_5(&VAR_1->delayed_work, FUNC_4(VAR_2));

 return 0;
}
