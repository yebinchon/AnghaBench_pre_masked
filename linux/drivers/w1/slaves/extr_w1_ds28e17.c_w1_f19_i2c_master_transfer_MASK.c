
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; } ;
struct i2c_msg {scalar_t__ addr; int flags; scalar_t__ len; scalar_t__* buf; } ;
struct i2c_adapter {scalar_t__ algo_data; } ;
struct TYPE_2__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct w1_slave*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct w1_slave*,scalar_t__,scalar_t__*,scalar_t__,int) ;
 int FUNC_4 (struct w1_slave*,scalar_t__,scalar_t__*,scalar_t__,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct w1_slave*) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_4,
 struct i2c_msg *VAR_5, int VAR_6)
{
 struct w1_slave *VAR_7 = (struct w1_slave *) VAR_4->algo_data;
 int VAR_8 = 0;
 int VAR_9 = 0;


 FUNC_0(&VAR_7->master->bus_mutex);


 if (FUNC_6(VAR_7)) {
  VAR_8 = -VAR_0;
  goto error;
 }


 while (VAR_8 < VAR_6) {




  if (VAR_8 < (VAR_6-1)
   && VAR_5[VAR_8].addr == VAR_5[VAR_8+1].addr
   && !(VAR_5[VAR_8].flags & VAR_1)
   && (VAR_5[VAR_8+1].flags & VAR_1)
   && (VAR_5[VAR_8].len <= VAR_3)) {




   VAR_9 = FUNC_4(VAR_7, VAR_5[VAR_8].addr,
    VAR_5[VAR_8].buf, VAR_5[VAR_8].len,
    VAR_5[VAR_8+1].buf, VAR_5[VAR_8+1].len);
   if (VAR_9 < 0) {
    VAR_8 = VAR_9;
    goto error;
   }







   if (VAR_5[VAR_8+1].flags & VAR_2) {
    VAR_9 = FUNC_2(VAR_7, VAR_5[VAR_8+1].addr,
     &(VAR_5[VAR_8+1].buf[1]), VAR_5[VAR_8+1].buf[0]);
    if (VAR_9 < 0) {
     VAR_8 = VAR_9;
     goto error;
    }
   }


   VAR_8++;
  } else if (VAR_5[VAR_8].flags & VAR_1) {

   VAR_9 = FUNC_2(VAR_7, VAR_5[VAR_8].addr,
    VAR_5[VAR_8].buf, VAR_5[VAR_8].len);
   if (VAR_9 < 0) {
    VAR_8 = VAR_9;
    goto error;
   }







   if (VAR_5[VAR_8].flags & VAR_2) {
    VAR_9 = FUNC_2(VAR_7,
     VAR_5[VAR_8].addr,
     &(VAR_5[VAR_8].buf[1]),
     VAR_5[VAR_8].buf[0]);
    if (VAR_9 < 0) {
     VAR_8 = VAR_9;
     goto error;
    }
   }
  } else {





   VAR_9 = FUNC_3(VAR_7,
    VAR_5[VAR_8].addr,
    VAR_5[VAR_8].buf,
    VAR_5[VAR_8].len,
    VAR_8 == (VAR_6-1));
   if (VAR_9 < 0) {
    VAR_8 = VAR_9;
    goto error;
   }
  }


  VAR_8++;


  if (VAR_8 < VAR_6) {

   if (FUNC_5(VAR_7->master)) {
    VAR_8 = -VAR_0;
    goto error;
   }
  }
 }

error:

 FUNC_1(&VAR_7->master->bus_mutex);


 return VAR_8;
}
