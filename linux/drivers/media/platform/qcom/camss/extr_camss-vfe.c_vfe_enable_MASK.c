
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_line {int dummy; } ;
struct vfe_device {int stream_count; int was_streaming; int stream_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* bus_enable_wr_if ) (struct vfe_device*,int) ;int (* set_ds ) (struct vfe_device*) ;int (* set_qos ) (struct vfe_device*) ;int (* enable_irq_common ) (struct vfe_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vfe_device*) ;
 int FUNC_3 (struct vfe_device*,int) ;
 int FUNC_4 (struct vfe_device*) ;
 int FUNC_5 (struct vfe_device*) ;
 int FUNC_6 (struct vfe_device*,int) ;
 struct vfe_device* FUNC_7 (struct vfe_line*) ;
 int FUNC_8 (struct vfe_line*) ;
 int FUNC_9 (struct vfe_line*) ;
 int FUNC_10 (struct vfe_line*) ;

__attribute__((used)) static int FUNC_11(struct vfe_line *VAR_0)
{
 struct vfe_device *VAR_1 = FUNC_7(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->stream_lock);

 if (!VAR_1->stream_count) {
  VAR_1->ops->enable_irq_common(VAR_1);

  VAR_1->ops->bus_enable_wr_if(VAR_1, 1);

  VAR_1->ops->set_qos(VAR_1);

  VAR_1->ops->set_ds(VAR_1);
 }

 VAR_1->stream_count++;

 FUNC_1(&VAR_1->stream_lock);

 VAR_2 = FUNC_9(VAR_0);
 if (VAR_2 < 0)
  goto error_get_output;

 VAR_2 = FUNC_8(VAR_0);
 if (VAR_2 < 0)
  goto error_enable_output;

 VAR_1->was_streaming = 1;

 return 0;


error_enable_output:
 FUNC_10(VAR_0);

error_get_output:
 FUNC_0(&VAR_1->stream_lock);

 if (VAR_1->stream_count == 1)
  VAR_1->ops->bus_enable_wr_if(VAR_1, 0);

 VAR_1->stream_count--;

 FUNC_1(&VAR_1->stream_lock);

 return VAR_2;
}
