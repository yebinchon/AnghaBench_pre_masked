
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smssdio_device {TYPE_1__* func; } ;
struct sms_msg_data {int dummy; } ;
struct TYPE_4__ {size_t cur_blksize; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,void*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct sms_msg_data*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 struct smssdio_device *VAR_5;

 VAR_5 = VAR_1;

 FUNC_0(VAR_5->func);

 FUNC_3((struct sms_msg_data *) VAR_2);
 while (VAR_3 >= VAR_5->func->cur_blksize) {
  VAR_4 = FUNC_1(VAR_5->func, VAR_0,
     VAR_2, VAR_5->func->cur_blksize);
  if (VAR_4)
   goto out;

  VAR_2 += VAR_5->func->cur_blksize;
  VAR_3 -= VAR_5->func->cur_blksize;
 }

 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_5->func, VAR_0,
     VAR_2, VAR_3);
 }

out:
 FUNC_2(VAR_5->func);

 return VAR_4;
}
