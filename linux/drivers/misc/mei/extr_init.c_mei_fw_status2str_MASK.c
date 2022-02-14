
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_fw_status {int count; int * status; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*,size_t,char*,int ) ;

ssize_t FUNC_1(struct mei_fw_status *VAR_2,
     char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5 = 0;
 int VAR_6;

 VAR_3[0] = '\0';

 if (VAR_4 < VAR_1)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2->count; VAR_6++)
  VAR_5 += FUNC_0(VAR_3 + VAR_5, VAR_4 - VAR_5, "%08X ",
    VAR_2->status[VAR_6]);


 VAR_3[VAR_5] = '\0';
 return VAR_5;
}
