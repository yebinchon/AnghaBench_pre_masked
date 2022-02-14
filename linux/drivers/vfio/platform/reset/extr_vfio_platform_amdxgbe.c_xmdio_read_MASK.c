
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int reg ;


 int VAR_0 ;
 unsigned int FUNC_0 (void*) ;
 int FUNC_1 (unsigned int,void*) ;

__attribute__((used)) static unsigned int FUNC_2(void *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_4 = (VAR_2 << 16) | ((VAR_3) & 0xffff);
 FUNC_1(VAR_4 >> 8, VAR_1 + (VAR_0 << 2));
 VAR_5 = FUNC_0(VAR_1 + ((VAR_4 & 0xff) << 2));
 return VAR_5;
}
