
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{
 u8 VAR_4[2];

 if (VAR_3 < 0 || VAR_3 >= VAR_2)
  return -VAR_0;

 VAR_4[0] = 0x80;
 VAR_4[1] = (u8) (VAR_3*31);

 return FUNC_0(VAR_1, VAR_4, sizeof(VAR_4),
         ((void*)0), 0);
}
