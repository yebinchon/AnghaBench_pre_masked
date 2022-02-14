
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct radio_isa_card {int freq; TYPE_2__* drv; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* s_frequency ) (struct radio_isa_card*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct radio_isa_card*,int ) ;
 struct radio_isa_card* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
    const struct v4l2_frequency *VAR_6)
{
 struct radio_isa_card *VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8 = VAR_6->frequency;
 int VAR_9;

 if (VAR_6->tuner != 0 || VAR_6->type != VAR_3)
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_8, VAR_2, VAR_1);
 VAR_9 = VAR_7->drv->ops->s_frequency(VAR_7, VAR_8);
 if (VAR_9 == 0)
  VAR_7->freq = VAR_8;
 return VAR_9;
}
