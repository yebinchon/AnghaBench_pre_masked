
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct device {int dummy; } ;
struct axis_fifo {scalar_t__ base_addr; } ;
typedef unsigned int ssize_t ;


 struct axis_fifo* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 unsigned int FUNC_3 (char*,int,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, char *VAR_1,
     unsigned int VAR_2)
{
 struct axis_fifo *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4;
 unsigned int VAR_5;
 char VAR_6[32];

 VAR_4 = FUNC_1(VAR_3->base_addr + VAR_2);
 VAR_5 = FUNC_3(VAR_6, sizeof(VAR_6), "0x%x\n", VAR_4);
 FUNC_2(VAR_1, VAR_6, VAR_5);

 return VAR_5;
}
