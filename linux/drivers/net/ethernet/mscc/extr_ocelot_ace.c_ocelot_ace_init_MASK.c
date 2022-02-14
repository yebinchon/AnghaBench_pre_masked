
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcap_data {int dummy; } ;
struct ocelot {int dummy; } ;
typedef int data ;
struct TYPE_2__ {int action_count; int entry_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct vcap_data*,int ,int) ;
 int FUNC_1 (struct ocelot*) ;
 int FUNC_2 (struct ocelot*,int ,int ) ;
 int FUNC_3 (struct ocelot*,int,int ,int ) ;
 int FUNC_4 (struct ocelot*,struct vcap_data*) ;
 int FUNC_5 (struct ocelot*,int ,int ,int) ;
 int FUNC_6 (struct ocelot*,struct vcap_data*) ;
 TYPE_1__ VAR_12 ;

int FUNC_7(struct ocelot *VAR_13)
{
 struct vcap_data VAR_14;

 FUNC_0(&VAR_14, 0, sizeof(VAR_14));
 FUNC_6(VAR_13, &VAR_14);
 FUNC_2(VAR_13, VAR_12, VAR_6);
 FUNC_5(VAR_13, 0, VAR_7, VAR_10);

 FUNC_4(VAR_13, &VAR_14);
 FUNC_2(VAR_13, VAR_12, VAR_6);
 FUNC_5(VAR_13, 0, VAR_7,
   VAR_8 | VAR_9);





 FUNC_3(VAR_13, 0x299, VAR_2,
    VAR_5);
 FUNC_3(VAR_13, 0x1, VAR_3,
    VAR_5);
 FUNC_3(VAR_13, 0x3fffff, VAR_4,
    VAR_5);
 FUNC_3(VAR_13, 0x0, VAR_0,
    VAR_5);
 FUNC_3(VAR_13, 0x3fffff, VAR_1,
    VAR_5);

 VAR_11 = FUNC_1(VAR_13);

 return 0;
}
