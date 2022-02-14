
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_line {int dummy; } ;
struct vfe_device {int stream_count; int stream_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* bus_enable_wr_if ) (struct vfe_device*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vfe_device*,int ) ;
 struct vfe_device* FUNC_3 (struct vfe_line*) ;
 int FUNC_4 (struct vfe_line*) ;
 int FUNC_5 (struct vfe_line*) ;

__attribute__((used)) static int FUNC_6(struct vfe_line *VAR_0)
{
 struct vfe_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0);

 FUNC_5(VAR_0);

 FUNC_0(&VAR_1->stream_lock);

 if (VAR_1->stream_count == 1)
  VAR_1->ops->bus_enable_wr_if(VAR_1, 0);

 VAR_1->stream_count--;

 FUNC_1(&VAR_1->stream_lock);

 return 0;
}
