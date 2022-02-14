
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct saa7164_port {TYPE_1__ list_buf_used; int v4l_reader_count; scalar_t__ last_poll_msecs_diff; int poll_interval; scalar_t__ last_poll_msecs; } ;
struct saa7164_encoder_fh {int v4l_reading; struct saa7164_port* port; } ;
struct file {scalar_t__ private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct saa7164_port*) ;
 int FUNC_7 (struct saa7164_port*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (struct file*,int *) ;

__attribute__((used)) static __poll_t FUNC_10(struct file *VAR_4, poll_table *VAR_5)
{
 __poll_t VAR_6 = FUNC_5(VAR_5);
 struct saa7164_encoder_fh *VAR_7 =
  (struct saa7164_encoder_fh *)VAR_4->private_data;
 struct saa7164_port *VAR_8 = VAR_7->port;
 __poll_t VAR_9 = FUNC_9(VAR_4, VAR_5);

 VAR_8->last_poll_msecs_diff = VAR_8->last_poll_msecs;
 VAR_8->last_poll_msecs = FUNC_2(VAR_3);
 VAR_8->last_poll_msecs_diff = VAR_8->last_poll_msecs -
  VAR_8->last_poll_msecs_diff;

 FUNC_8(&VAR_8->poll_interval,
  VAR_8->last_poll_msecs_diff);

 if (!(VAR_6 & (VAR_1 | VAR_2)))
  return VAR_9;

 if (FUNC_0(&VAR_7->v4l_reading, 0, 1) == 0) {
  if (FUNC_1(&VAR_8->v4l_reader_count) == 1) {
   if (FUNC_6(VAR_8) < 0)
    return VAR_9 | VAR_0;
   FUNC_7(VAR_8);
   FUNC_4(200);
  }
 }


 if (!FUNC_3(&VAR_8->list_buf_used.list))
  VAR_9 |= VAR_1 | VAR_2;

 return VAR_9;
}
