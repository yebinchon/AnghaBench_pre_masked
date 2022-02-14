
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe_q_data {unsigned int nplanes; unsigned int* sizeimage; } ;
struct vpe_ctx {int dev; } ;
struct vb2_queue {int type; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct vpe_q_data* FUNC_0 (struct vpe_ctx*,int ) ;
 struct vpe_ctx* FUNC_1 (struct vb2_queue*) ;
 int FUNC_2 (int ,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_2,
      unsigned int *VAR_3, unsigned int *VAR_4,
      unsigned int VAR_5[], struct device *VAR_6[])
{
 int VAR_7;
 struct vpe_ctx *VAR_8 = FUNC_1(VAR_2);
 struct vpe_q_data *VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_2->type);

 *VAR_4 = VAR_9->nplanes;

 for (VAR_7 = 0; VAR_7 < *VAR_4; VAR_7++)
  VAR_5[VAR_7] = VAR_9->sizeimage[VAR_7];

 FUNC_2(VAR_8->dev, "get %d buffer(s) of size %d", *VAR_3,
  VAR_5[VAR_1]);
 if (VAR_9->nplanes == 2)
  FUNC_2(VAR_8->dev, " and %d\n", VAR_5[VAR_0]);

 return 0;
}
