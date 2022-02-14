
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct TYPE_6__ {scalar_t__ id; } ;
struct w1_slave {TYPE_2__* master; TYPE_1__ reg_num; } ;
struct w1_reg_num {scalar_t__ family; scalar_t__ id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int ack ;
struct TYPE_7__ {int bus_mutex; int pullup_duration; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_13,
 struct device_attribute *VAR_14, char *VAR_15)
{
 struct w1_slave *VAR_16 = FUNC_0(VAR_13);
 ssize_t VAR_17 = VAR_1;
 int VAR_18;
 int VAR_19;
 u8 VAR_20;
 u64 VAR_21;
 struct w1_reg_num *VAR_22;
 int VAR_23 = 0;

 FUNC_2(&VAR_16->master->bus_mutex);

 if (FUNC_7(VAR_16->master))
  goto error;
 FUNC_8(VAR_16->master, VAR_12);
 FUNC_8(VAR_16->master, VAR_2);
 FUNC_8(VAR_16->master, VAR_7);
 FUNC_8(VAR_16->master, VAR_8);
 FUNC_1(VAR_16->master->pullup_duration);


 VAR_20 = FUNC_5(VAR_16->master);
 if (VAR_20 != VAR_11)
  goto error;


 for (VAR_19 = 0; VAR_19 <= 64; VAR_19++) {
  if (FUNC_7(VAR_16->master))
   goto error;

  FUNC_8(VAR_16->master, VAR_9);
  VAR_18 = FUNC_6(VAR_16->master, (u8 *)&VAR_21, 8);
  VAR_22 = (struct w1_reg_num *) &VAR_21;
  if (VAR_22->family == VAR_10)
   break;
  if (VAR_16->reg_num.id == VAR_22->id)
   VAR_23 = VAR_19;

  FUNC_8(VAR_16->master, VAR_2);
  FUNC_8(VAR_16->master, VAR_3);
  FUNC_8(VAR_16->master, VAR_4);
  FUNC_6(VAR_16->master, &VAR_20, sizeof(VAR_20));


  VAR_20 = FUNC_5(VAR_16->master);
  if (VAR_20 != VAR_11)
   goto error;

 }


 if (FUNC_7(VAR_16->master))
  goto error;
 FUNC_8(VAR_16->master, VAR_12);
 FUNC_8(VAR_16->master, VAR_2);
 FUNC_8(VAR_16->master, VAR_5);
 FUNC_8(VAR_16->master, VAR_6);


 VAR_20 = FUNC_5(VAR_16->master);
 if (VAR_20 != VAR_11)
  goto error;
 FUNC_3(&VAR_16->master->bus_mutex);

 VAR_17 -= FUNC_4(VAR_15 + VAR_1 - VAR_17, VAR_17, "%d\n", VAR_23);
 return VAR_1 - VAR_17;
error:
 FUNC_3(&VAR_16->master->bus_mutex);
 return -VAR_0;
}
