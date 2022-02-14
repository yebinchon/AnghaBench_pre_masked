
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,long) ;
 long FUNC_1 (int ,int,int,int *,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 long VAR_3;
 static int VAR_4 = 10;


 VAR_2 = (VAR_2 + 59) / 60;

 VAR_3 = FUNC_1(VAR_1, 3, 1, ((void*)0),
      VAR_0, 0, VAR_2);
 if (VAR_3 < 0 && VAR_4) {
  FUNC_0("setting the watchdog to %i timeout failed: %li\n",
         VAR_2, VAR_3);
  VAR_4--;
 }

 return VAR_3;
}
