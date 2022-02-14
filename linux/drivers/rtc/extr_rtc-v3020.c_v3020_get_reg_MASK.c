
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3020 {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* read_bit ) (struct v3020*) ;int (* write_bit ) (struct v3020*,unsigned char) ;} ;


 int FUNC_0 (struct v3020*,unsigned char) ;
 scalar_t__ FUNC_1 (struct v3020*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned char FUNC_3(struct v3020 *VAR_0, unsigned char VAR_1)
{
 unsigned int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_0->ops->write_bit(VAR_0, (VAR_1 & 1));
  VAR_1 >>= 1;
  FUNC_2(1);
 }

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_2 >>= 1;
  if (VAR_0->ops->read_bit(VAR_0))
   VAR_2 |= 0x80;
  FUNC_2(1);
 }

 return VAR_2;
}
