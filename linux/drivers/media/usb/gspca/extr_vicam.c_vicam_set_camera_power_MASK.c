
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x50, VAR_1, 0, ((void*)0), 0);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_1)
  VAR_2 = FUNC_0(VAR_0, 0x55, 1, 0, ((void*)0), 0);

 return VAR_2;
}
