
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;


 int FUNC_0 (struct se_device*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct se_device *VAR_0, unsigned char *VAR_1)
{
 int VAR_2 = 0;

 VAR_1[VAR_2++] = (0x6 << 4);
 VAR_1[VAR_2++] = 0x01;
 VAR_1[VAR_2++] = 0x40;
 VAR_1[VAR_2] = (0x5 << 4);

 FUNC_0(VAR_0, &VAR_1[VAR_2]);
 return 0;
}
