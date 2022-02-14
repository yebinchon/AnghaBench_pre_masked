
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* cache; } ;
struct nand_device {TYPE_1__ bbt; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned int,int ) ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct nand_device const*) ;

int FUNC_3(const struct nand_device *VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_2);
 unsigned long *VAR_6 = VAR_3->bbt.cache +
        ((VAR_4 * VAR_5) / VAR_0);
 unsigned int VAR_7 = (VAR_4 * VAR_5) % VAR_0;
 unsigned long VAR_8;

 if (VAR_4 >= FUNC_2(VAR_3))
  return -VAR_1;

 VAR_8 = VAR_6[0] >> VAR_7;
 if (VAR_5 + VAR_7 > VAR_0)
  VAR_8 |= VAR_6[1] << (VAR_0 - VAR_7);

 return VAR_8 & FUNC_0(VAR_5 - 1, 0);
}
