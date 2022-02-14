
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int ,int *,int *,char*,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_9)
{
 int VAR_10;

 if (!VAR_6)
  return -VAR_3;

 if (FUNC_1(&VAR_7))
  return -VAR_4;

 VAR_10 = 0;
 switch (VAR_5) {
 case 128:
  if (VAR_9 >= 0 && VAR_9 <= 65535) {
   if (!FUNC_0(VAR_8, ((void*)0), ((void*)0), "vddd",
     VAR_9, VAR_9, VAR_9))
    VAR_10 = -VAR_1;
  } else
   VAR_10 = -VAR_0;
  break;

 default:
  VAR_10 = -VAR_2;
 }

 FUNC_2(&VAR_7);
 return VAR_10;
}
