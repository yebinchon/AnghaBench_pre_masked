
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_device {int dummy; } ;
struct se_cmd {struct se_device* se_dev; } ;


 scalar_t__ FUNC_0 (struct se_device*) ;

__attribute__((used)) static int FUNC_1(struct se_cmd *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 struct se_device *VAR_3 = VAR_0->se_dev;

 VAR_2[0] = 0x08;
 VAR_2[1] = 0x12;


 if (VAR_1 == 1)
  goto out;

 if (FUNC_0(VAR_3))
  VAR_2[2] = 0x04;
 VAR_2[12] = 0x20;

out:
 return 20;
}
