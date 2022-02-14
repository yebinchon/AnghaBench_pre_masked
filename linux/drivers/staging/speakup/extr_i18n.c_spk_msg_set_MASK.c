
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef enum msg_index_t { ____Placeholder_msg_index_t } msg_index_t ;
struct TYPE_2__ {int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,char*,size_t) ;
 char** VAR_7 ;
 TYPE_1__ VAR_8 ;
 char** VAR_9 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

ssize_t FUNC_6(enum msg_index_t VAR_10, char *VAR_11, size_t VAR_12)
{
 char *VAR_13 = ((void*)0);
 unsigned long VAR_14;

 if ((VAR_10 < VAR_3) || (VAR_10 >= VAR_6))
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_12 + 1, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_3(VAR_13, VAR_11, VAR_12);
 VAR_13[VAR_12] = '\0';
 if (VAR_10 >= VAR_5 &&
     VAR_10 <= VAR_4 &&
     !FUNC_0(VAR_7[VAR_10], VAR_13)) {
  FUNC_1(VAR_13);
  return -VAR_0;
 }
 FUNC_4(&VAR_8.spinlock, VAR_14);
 if (VAR_9[VAR_10] != VAR_7[VAR_10])
  FUNC_1(VAR_9[VAR_10]);
 VAR_9[VAR_10] = VAR_13;
 FUNC_5(&VAR_8.spinlock, VAR_14);
 return 0;
}
