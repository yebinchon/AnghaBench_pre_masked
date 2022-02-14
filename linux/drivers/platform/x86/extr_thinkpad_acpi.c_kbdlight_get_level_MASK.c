
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,char*,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return -VAR_1;

 if (!FUNC_0(VAR_2, &VAR_3, "MLCG", "dd", 0))
  return -VAR_0;

 if (VAR_3 < 0)
  return VAR_3;

 return VAR_3 & 0x3;
}
