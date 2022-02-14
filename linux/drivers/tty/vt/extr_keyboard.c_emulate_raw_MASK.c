
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 int FUNC_0 (struct vc_data*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_0, unsigned int VAR_1, unsigned char VAR_2)
{
 if (VAR_1 > 127)
  return -1;

 FUNC_0(VAR_0, VAR_1 | VAR_2);
 return 0;
}
