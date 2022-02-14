
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpe_fmt {scalar_t__ fourcc; } ;
struct vpe_ctx {TYPE_2__* dev; TYPE_1__* q_data; } ;
struct TYPE_4__ {int vpdma; } ;
struct TYPE_3__ {struct vpe_fmt* fmt; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct vpe_ctx *VAR_10)
{
 struct vpe_fmt *VAR_11 = VAR_10->q_data[VAR_0].fmt;
 int VAR_12 = 1;

 if (VAR_11->fourcc == VAR_1)
  VAR_12 = 0;


 FUNC_1(VAR_10->dev->vpdma, VAR_12, VAR_3);
 FUNC_1(VAR_10->dev->vpdma, VAR_12, VAR_4);
 FUNC_1(VAR_10->dev->vpdma, VAR_12, VAR_5);


 FUNC_0(VAR_10->dev->vpdma, VAR_2,
  VAR_6);
 FUNC_0(VAR_10->dev->vpdma, VAR_2,
  VAR_7);
 FUNC_0(VAR_10->dev->vpdma, VAR_2,
  VAR_8);


 FUNC_0(VAR_10->dev->vpdma, VAR_2,
  VAR_3);
 FUNC_0(VAR_10->dev->vpdma, VAR_2,
  VAR_4);
 FUNC_0(VAR_10->dev->vpdma, VAR_2,
  VAR_5);


 FUNC_0(VAR_10->dev->vpdma, VAR_2,
  VAR_9);
}
