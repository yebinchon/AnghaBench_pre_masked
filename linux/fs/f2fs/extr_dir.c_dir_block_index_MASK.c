
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (unsigned long,int) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned int VAR_0,
    int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_4 += FUNC_1(VAR_3, VAR_1) * FUNC_0(VAR_3);
 VAR_4 += VAR_2 * FUNC_0(VAR_0);
 return VAR_4;
}
