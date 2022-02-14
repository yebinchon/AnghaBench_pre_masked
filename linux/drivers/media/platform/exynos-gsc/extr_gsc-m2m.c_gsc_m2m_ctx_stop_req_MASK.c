
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_dev; } ;
struct gsc_dev {int irq_queue; TYPE_1__ m2m; } ;
struct gsc_ctx {struct gsc_dev* gsc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct gsc_ctx*) ;
 int FUNC_1 (int ,struct gsc_ctx*) ;
 int FUNC_2 (struct gsc_dev*) ;
 struct gsc_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct gsc_ctx *VAR_3)
{
 struct gsc_ctx *VAR_4;
 struct gsc_dev *VAR_5 = VAR_3->gsc_dev;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_5->m2m.m2m_dev);
 if (!FUNC_2(VAR_5) || (VAR_4 != VAR_3))
  return 0;

 FUNC_1(VAR_1, VAR_3);
 VAR_6 = FUNC_4(VAR_5->irq_queue,
   !FUNC_0(VAR_1, VAR_3),
   VAR_2);

 return VAR_6 == 0 ? -VAR_0 : VAR_6;
}
