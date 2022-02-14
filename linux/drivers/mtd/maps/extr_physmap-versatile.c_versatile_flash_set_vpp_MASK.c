
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0,
     0x01, !!VAR_3);
 if (VAR_4)
  FUNC_0("error setting Versatile VPP\n");
}
