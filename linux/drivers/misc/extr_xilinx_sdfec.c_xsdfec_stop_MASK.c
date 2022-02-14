
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xsdfec_dev {scalar_t__ state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct xsdfec_dev*,int ) ;
 int FUNC_2 (struct xsdfec_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct xsdfec_dev *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->state != VAR_2)
  FUNC_0(VAR_4->dev, "Device not started correctly");

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_5 &= (~VAR_1);
 FUNC_2(VAR_4, VAR_0, VAR_5);

 VAR_4->state = VAR_3;
 return 0;
}
