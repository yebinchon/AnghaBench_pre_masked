
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__ alt; int iface; int dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 int VAR_1;

 if (VAR_0->alt == 0)
  return 0;
 VAR_1 = FUNC_1(VAR_0->dev, VAR_0->iface, 0);
 if (VAR_1 < 0)
  FUNC_0("set alt 0 err %d\n", VAR_1);
 return VAR_1;
}
