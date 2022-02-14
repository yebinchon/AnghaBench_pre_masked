
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short volatile*) ;
 int FUNC_2 (unsigned int,unsigned short volatile*) ;

__attribute__((used)) static inline unsigned short FUNC_3(unsigned long VAR_3,
          unsigned int VAR_4)
{
 volatile unsigned short *VAR_5, *VAR_6;

 VAR_5 = (unsigned short *)(VAR_3 + VAR_2 + VAR_1);
 VAR_6 = (unsigned short *)(VAR_3 + VAR_2 + VAR_0);

 FUNC_2(VAR_4, VAR_5);
 return FUNC_0(FUNC_1(VAR_6));
}
