
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_cmd {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct se_cmd *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 VAR_2[0] = 0x01;
 VAR_2[1] = 0x0a;


 if (VAR_1 == 1)
  goto out;

out:
 return 12;
}
