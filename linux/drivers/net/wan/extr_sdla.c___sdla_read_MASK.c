
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mem_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,void const*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, int VAR_3, void *VAR_4, short VAR_5)
{
 char *VAR_6;
 const void *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = VAR_4;
 while(VAR_5)
 {
  VAR_8 = VAR_3 & VAR_0;
  VAR_9 = VAR_8 + VAR_5 > VAR_1 ? VAR_1 - VAR_8 : VAR_5;
  VAR_7 = (const void *) (VAR_2->mem_start + VAR_8);

  FUNC_0(VAR_2, VAR_3);
  FUNC_1(VAR_6, VAR_7, VAR_9);

  VAR_3 += VAR_9;
  VAR_6 += VAR_9;
  VAR_5 -= VAR_9;
 }
}
