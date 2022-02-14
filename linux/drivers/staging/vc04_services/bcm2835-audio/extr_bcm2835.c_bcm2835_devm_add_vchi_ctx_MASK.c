
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bcm2835_vchi_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct bcm2835_vchi_ctx*) ;
 int FUNC_1 (struct device*,struct bcm2835_vchi_ctx*) ;
 struct bcm2835_vchi_ctx* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct bcm2835_vchi_ctx*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 struct bcm2835_vchi_ctx *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, sizeof(*VAR_4),
    VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return VAR_5;
 }

 FUNC_1(VAR_3, VAR_4);

 return 0;
}
