
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,long) ;
 long FUNC_4 (int ,int,int,int *,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(int VAR_5)
{
 long VAR_6;
 char VAR_7[VAR_1];

 FUNC_5(&VAR_3);
 FUNC_2(VAR_2, 0, VAR_1);
 VAR_6 = FUNC_4(VAR_4, 3, 1, ((void*)0),
      VAR_0, FUNC_0(VAR_2),
      VAR_1);

 FUNC_1(VAR_7, VAR_2, VAR_1);
 FUNC_6(&VAR_3);

 if (VAR_7[0] != 0 || VAR_7[1] != 2 || VAR_7[3] != 0 || VAR_6 < 0) {
  FUNC_3("could not get sp_spi watchdog timeout (%li). Continuing\n",
   VAR_6);
  return VAR_5;
 }


 return ((int)VAR_7[2]) * 60;
}
