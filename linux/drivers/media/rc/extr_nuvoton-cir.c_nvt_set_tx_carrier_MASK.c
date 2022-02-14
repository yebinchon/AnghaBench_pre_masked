
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct rc_dev {struct nvt_dev* priv; } ;
struct nvt_dev {int dummy; } ;
typedef int carrier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvt_dev*,int ) ;
 int FUNC_1 (struct nvt_dev*,int,int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_3, u32 VAR_4)
{
 struct nvt_dev *VAR_5 = VAR_3->priv;
 u16 VAR_6;

 if (VAR_4 == 0)
  return -VAR_2;

 FUNC_1(VAR_5, 1, VAR_1);
 VAR_6 = 3000000 / (VAR_4) - 1;
 FUNC_1(VAR_5, VAR_6 & 0xff, VAR_0);

 FUNC_2("cp: 0x%x cc: 0x%x\n",
  FUNC_0(VAR_5, VAR_1), FUNC_0(VAR_5, VAR_0));

 return 0;
}
