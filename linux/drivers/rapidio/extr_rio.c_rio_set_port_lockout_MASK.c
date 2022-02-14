
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rio_dev {int dummy; } ;


 int FUNC_0 (struct rio_dev*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rio_dev*,int ,int *) ;
 int FUNC_2 (struct rio_dev*,int ,int ) ;

int FUNC_3(struct rio_dev *VAR_1, u32 VAR_2, int VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_1,
  FUNC_0(VAR_1, VAR_2),
  &VAR_4);
 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;

 FUNC_2(VAR_1,
  FUNC_0(VAR_1, VAR_2),
  VAR_4);
 return 0;
}
