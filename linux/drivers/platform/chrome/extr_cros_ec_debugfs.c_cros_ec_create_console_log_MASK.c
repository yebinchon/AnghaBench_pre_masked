
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ec_params_console_read_v1 {int dummy; } ;
struct cros_ec_dev {scalar_t__ cmd_offset; int dev; TYPE_1__* ec_dev; } ;
struct TYPE_6__ {char* buf; scalar_t__ tail; scalar_t__ head; } ;
struct cros_ec_debugfs {int log_poll_work; int dir; int log_wq; int log_mutex; TYPE_3__ log_buffer; TYPE_2__* read_msg; struct cros_ec_dev* ec; } ;
struct TYPE_5__ {int version; int outsize; int insize; scalar_t__ command; } ;
struct TYPE_4__ {int max_response; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int ,struct cros_ec_debugfs*,int *) ;
 void* FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct cros_ec_dev*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct cros_ec_debugfs *VAR_7)
{
 struct cros_ec_dev *VAR_8 = VAR_7->ec;
 char *VAR_9;
 int VAR_10;
 int VAR_11;





 if (!FUNC_3(VAR_8))
  return 0;

 VAR_9 = FUNC_2(VAR_8->dev, VAR_3, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = sizeof(struct ec_params_console_read_v1);
 VAR_11 = VAR_8->ec_dev->max_response;
 VAR_7->read_msg = FUNC_2(VAR_8->dev,
  sizeof(*VAR_7->read_msg) +
   FUNC_5(VAR_10, VAR_11), VAR_2);
 if (!VAR_7->read_msg)
  return -VAR_1;

 VAR_7->read_msg->version = 1;
 VAR_7->read_msg->command = VAR_0 + VAR_8->cmd_offset;
 VAR_7->read_msg->outsize = VAR_10;
 VAR_7->read_msg->insize = VAR_11;

 VAR_7->log_buffer.buf = VAR_9;
 VAR_7->log_buffer.head = 0;
 VAR_7->log_buffer.tail = 0;

 FUNC_6(&VAR_7->log_mutex);
 FUNC_4(&VAR_7->log_wq);

 FUNC_1("console_log", VAR_4 | 0444, VAR_7->dir,
       VAR_7, &VAR_5);

 FUNC_0(&VAR_7->log_poll_work,
     VAR_6);
 FUNC_7(&VAR_7->log_poll_work, 0);

 return 0;
}
