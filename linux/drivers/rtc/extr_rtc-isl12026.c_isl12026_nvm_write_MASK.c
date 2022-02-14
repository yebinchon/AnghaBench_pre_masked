
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct isl12026 {TYPE_2__* rtc; TYPE_1__* nvm_client; } ;
struct i2c_msg {unsigned int* buf; size_t len; int flags; int addr; } ;
struct TYPE_4__ {int ops_lock; } ;
struct TYPE_3__ {int dev; int adapter; int addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (unsigned int*,unsigned int*,size_t) ;
 size_t FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_3, unsigned int VAR_4,
         void *VAR_5, size_t VAR_6)
{
 struct isl12026 *VAR_7 = VAR_3;
 int VAR_8;
 u8 *VAR_9 = VAR_5;
 size_t VAR_10, VAR_11;
 u8 VAR_12[VAR_2 + 2];
 struct i2c_msg VAR_13[] = {
  {
   .addr = VAR_7->nvm_client->addr,
   .flags = 0,
   .buf = VAR_12
  }
 };





 VAR_8 = FUNC_6(&VAR_7->rtc->ops_lock);
 if (VAR_8)
  return VAR_8;

 VAR_11 = 0;
 while (VAR_6) {
  VAR_10 = FUNC_8(VAR_4, VAR_2) +
   VAR_2 - VAR_4;
  VAR_10 = FUNC_4(VAR_6, VAR_10);




  FUNC_3(VAR_12 + 2, VAR_9 + VAR_11, VAR_10);
  VAR_12[0] = VAR_4 >> 8;
  VAR_12[1] = VAR_4;
  VAR_13[0].len = VAR_10 + 2;
  VAR_8 = FUNC_2(VAR_7->nvm_client->adapter,
       VAR_13, FUNC_0(VAR_13));
  if (VAR_8 != FUNC_0(VAR_13)) {
   FUNC_1(&VAR_7->nvm_client->dev,
    "nvmem write error, ret=%d\n", VAR_8);
   VAR_8 = VAR_8 < 0 ? VAR_8 : -VAR_0;
   break;
  }
  VAR_8 = 0;
  VAR_6 -= VAR_10;
  VAR_4 += VAR_10;
  VAR_11 += VAR_10;
  FUNC_5(VAR_1);
 }

 FUNC_7(&VAR_7->rtc->ops_lock);

 return VAR_8;
}
