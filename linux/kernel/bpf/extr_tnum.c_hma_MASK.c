
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tnum {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct tnum FUNC_1 (struct tnum,int ) ;

__attribute__((used)) static struct tnum FUNC_2(struct tnum VAR_0, u64 VAR_1, u64 VAR_2)
{
 while (VAR_2) {
  if (VAR_2 & 1)
   VAR_0 = FUNC_1(VAR_0, FUNC_0(0, VAR_1));
  VAR_2 >>= 1;
  VAR_1 <<= 1;
 }
 return VAR_0;
}
