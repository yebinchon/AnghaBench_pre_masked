
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_component {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_1,
         struct enclosure_component *VAR_2,
         unsigned char *VAR_3)
{
 FUNC_0(VAR_1, VAR_3, 4);
 VAR_1[0] = 0;

 if (VAR_2->type == VAR_0)
  VAR_1[1] = 0;
 VAR_1[2] &= 0xde;
 VAR_1[3] &= 0x3c;
}
