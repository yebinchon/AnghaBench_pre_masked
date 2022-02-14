
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static const char *FUNC_1(u8 VAR_7)
{

 static char VAR_8[9];
 int VAR_9 = 0;

 FUNC_0(VAR_8, 0, sizeof(VAR_8));

 if (VAR_7 & VAR_1)
  VAR_8[VAR_9++] = 'm';
 if (VAR_7 & VAR_0)
  VAR_8[VAR_9++] = 'd';
 if (VAR_7 & VAR_4)
  VAR_8[VAR_9++] = 'r';
 if (VAR_7 & VAR_5)
  VAR_8[VAR_9++] = 't';
 if (VAR_7 & VAR_3)
  VAR_8[VAR_9++] = 'k';
 if (VAR_7 & VAR_2)
  VAR_8[VAR_9++] = 'e';
 if (VAR_7 & VAR_6)
  VAR_8[VAR_9++] = 'p';



 return VAR_8;
}
