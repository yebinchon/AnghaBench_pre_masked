
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(v4l2_std_id VAR_5)
{
 bool VAR_6 = VAR_5 & VAR_4;
 bool VAR_7 = VAR_5 & VAR_3;

 if (!VAR_6 && !VAR_7)
  return VAR_0;

 if (VAR_6 && VAR_7)
  return VAR_0;

 if (VAR_6)
  return VAR_2;
 else
  return VAR_1;
}
