
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct parport*,int,unsigned char*,int ) ;

__attribute__((used)) static unsigned char FUNC_1(struct parport *VAR_1)
{
 unsigned char VAR_2;

 if (FUNC_0(VAR_1, 1, &VAR_2, VAR_0))
  return 0;
 return VAR_2 & 0xf8;
}
