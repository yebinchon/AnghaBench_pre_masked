
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_req {int queue_timeout; scalar_t__ status; struct completion* callback_data; int callback; void* sccb; int command; } ;
struct completion {int dummy; } ;
typedef int sclp_cmdw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (struct sclp_req*) ;
 struct sclp_req* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (struct sclp_req*) ;
 int VAR_5 ;
 int FUNC_5 (struct completion*) ;

int FUNC_6(sclp_cmdw_t VAR_6, void *VAR_7, int VAR_8)
{
 struct completion VAR_9;
 struct sclp_req *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 if (VAR_8)
  VAR_10->queue_timeout = VAR_8;
 VAR_10->command = VAR_6;
 VAR_10->sccb = VAR_7;
 VAR_10->status = VAR_4;
 VAR_10->callback = VAR_5;
 VAR_10->callback_data = &VAR_9;
 FUNC_0(&VAR_9);


 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  goto out;
 FUNC_5(&VAR_9);


 if (VAR_10->status != VAR_3) {
  FUNC_3("sync request failed (cmd=0x%08x, status=0x%02x)\n",
   VAR_6, VAR_10->status);
  VAR_11 = -VAR_0;
 }
out:
 FUNC_1(VAR_10);
 return VAR_11;
}
