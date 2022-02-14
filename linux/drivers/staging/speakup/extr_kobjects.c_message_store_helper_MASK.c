
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_group_t {int start; int end; int name; } ;
typedef size_t ssize_t ;
typedef enum msg_index_t { ____Placeholder_msg_index_t } msg_index_t ;


 size_t VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int,int,int,int,int ) ;
 unsigned long FUNC_2 (char*,char**,int) ;
 size_t FUNC_3 (int,char*,size_t) ;
 int FUNC_4 (struct msg_group_t*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static ssize_t FUNC_6(const char *VAR_1, size_t VAR_2,
        struct msg_group_t *VAR_3)
{
 char *VAR_4 = (char *)VAR_1;
 char *VAR_5 = VAR_4 + VAR_2;
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 ssize_t VAR_8 = 0;
 ssize_t VAR_9 = VAR_2;
 size_t VAR_10 = 0;
 unsigned long VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 enum msg_index_t VAR_16 = VAR_3->start;
 enum msg_index_t VAR_17 = VAR_3->end;
 enum msg_index_t VAR_18;

 while (VAR_4 < VAR_5) {
  while ((VAR_4 < VAR_5) && (*VAR_4 == ' ' || *VAR_4 == '\t'))
   VAR_4++;

  if (VAR_4 == VAR_5)
   break;
  if (FUNC_5("dDrR", *VAR_4)) {
   VAR_15 = 1;
   break;
  }
  VAR_12++;

  VAR_6 = FUNC_5(VAR_4, '\n');
  if (!VAR_6) {
   VAR_14++;
   break;
  }

  if (!FUNC_0(*VAR_4)) {
   VAR_14++;
   VAR_4 = VAR_6 + 1;
   continue;
  }





  VAR_11 = FUNC_2(VAR_4, &VAR_7, 10);

  while ((VAR_7 < VAR_6) && (*VAR_7 == ' ' || *VAR_7 == '\t'))
   VAR_7++;

  VAR_10 = VAR_6 - VAR_7;
  VAR_18 = VAR_16 + VAR_11;
  if ((VAR_18 < VAR_16) || (VAR_18 > VAR_17)) {
   VAR_14++;
   VAR_4 = VAR_6 + 1;
   continue;
  }

  VAR_8 = FUNC_3(VAR_18, VAR_7, VAR_10);
  if (VAR_8 < 0) {
   VAR_9 = VAR_8;
   if (VAR_8 == -VAR_0)
    VAR_15 = 1;
   break;
  }

  VAR_13++;

  VAR_4 = VAR_6 + 1;
 }

 if (VAR_15)
  FUNC_4(VAR_3);

 FUNC_1(VAR_15, VAR_12, VAR_13, VAR_14, VAR_3->name);
 return VAR_9;
}
