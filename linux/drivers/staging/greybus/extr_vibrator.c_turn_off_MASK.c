
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_vibrator_device {TYPE_1__* connection; } ;
struct gb_bundle {int dummy; } ;
struct TYPE_2__ {struct gb_bundle* bundle; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int ,int *,int ) ;
 int FUNC_1 (struct gb_bundle*) ;

__attribute__((used)) static int FUNC_2(struct gb_vibrator_device *VAR_1)
{
 struct gb_bundle *VAR_2 = VAR_1->connection->bundle;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->connection, VAR_0,
    ((void*)0), 0, ((void*)0), 0);

 FUNC_1(VAR_2);

 return VAR_3;
}
