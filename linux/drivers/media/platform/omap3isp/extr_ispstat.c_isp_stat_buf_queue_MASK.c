
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct ispstat {TYPE_3__* active_buf; int frame_number; int config_counter; TYPE_2__ subdev; TYPE_1__* isp; int buf_size; } ;
struct TYPE_6__ {scalar_t__ empty; int frame_number; int config_counter; int buf_size; int ts; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct ispstat*,TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ispstat *VAR_2)
{
 if (!VAR_2->active_buf)
  return VAR_1;

 FUNC_2(&VAR_2->active_buf->ts);

 VAR_2->active_buf->buf_size = VAR_2->buf_size;
 if (FUNC_1(VAR_2, VAR_2->active_buf)) {
  FUNC_0(VAR_2->isp->dev, "%s: data wasn't properly written.\n",
   VAR_2->subdev.name);
  return VAR_1;
 }
 VAR_2->active_buf->config_counter = VAR_2->config_counter;
 VAR_2->active_buf->frame_number = VAR_2->frame_number;
 VAR_2->active_buf->empty = 0;
 VAR_2->active_buf = ((void*)0);

 return VAR_0;
}
