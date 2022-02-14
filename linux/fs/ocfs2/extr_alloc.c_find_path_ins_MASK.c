
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_path_data {int index; int path; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ,int ,struct buffer_head*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct buffer_head *VAR_1)
{
 struct find_path_data *VAR_2 = VAR_0;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2->path, VAR_2->index, VAR_1);
 VAR_2->index++;
}
