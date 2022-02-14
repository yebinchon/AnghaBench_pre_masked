
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
typedef scalar_t__ ssize_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned char const,unsigned long) ;

__attribute__((used)) static void FUNC_1(
 struct map_info *VAR_1, unsigned long VAR_2,
 const void *VAR_3, ssize_t VAR_4)
{
 const unsigned char *VAR_5;
 VAR_5 = VAR_3;
 while(VAR_4 && (VAR_2 < VAR_0)) {
  FUNC_0(*VAR_5, VAR_2);
  VAR_2++;
  VAR_5++;
  VAR_4--;
 }
}
