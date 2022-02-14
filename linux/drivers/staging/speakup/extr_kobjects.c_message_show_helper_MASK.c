
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef enum msg_index_t { ____Placeholder_msg_index_t } msg_index_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_1, enum msg_index_t VAR_2,
       enum msg_index_t VAR_3)
{
 size_t VAR_4 = VAR_0;
 char *VAR_5 = VAR_1;
 int VAR_6;
 enum msg_index_t VAR_7;
 int VAR_8 = 0;
 *VAR_5 = '\0';

 for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++, VAR_8++) {
  if (VAR_4 <= 1)
   break;
  VAR_6 = FUNC_0(VAR_5, VAR_4, "%d\t%s\n",
        VAR_8, FUNC_1(VAR_7));
  VAR_5 += VAR_6;
  VAR_4 -= VAR_6;
 }

 return VAR_5 - VAR_1;
}
