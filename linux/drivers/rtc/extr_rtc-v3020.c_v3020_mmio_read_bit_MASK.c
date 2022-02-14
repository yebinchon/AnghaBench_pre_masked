
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3020 {int leftshift; int ioaddress; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned char FUNC_1(struct v3020 *VAR_0)
{
 return !!(FUNC_0(VAR_0->ioaddress) & (1 << VAR_0->leftshift));
}
