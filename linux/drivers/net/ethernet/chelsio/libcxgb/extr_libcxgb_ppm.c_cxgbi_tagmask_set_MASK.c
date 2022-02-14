
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int,int) ;

unsigned int FUNC_2(unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 FUNC_1("ippm: ppmax %u/0x%x -> bits %u, tagmask 0x%x.\n",
  VAR_2, VAR_2, VAR_3, 1 << (VAR_3 + VAR_1));

 return 1 << (VAR_3 + VAR_1);
}
