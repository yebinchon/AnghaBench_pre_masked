
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {int dummy; } ;
struct TYPE_2__ {int subdev; } ;
struct rcar_drif_sdr {TYPE_1__ ep; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_frequency*) ;
 struct rcar_drif_sdr* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_frequency *VAR_4)
{
 struct rcar_drif_sdr *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_5->ep.subdev, VAR_1, VAR_0, VAR_4);
}
