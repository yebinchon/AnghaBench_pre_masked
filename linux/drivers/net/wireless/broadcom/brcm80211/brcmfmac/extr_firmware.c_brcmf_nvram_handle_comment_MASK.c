
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvram_parser {size_t pos; int column; int line; int * data; } ;
typedef enum nvram_parser_state { ____Placeholder_nvram_parser_state } nvram_parser_state ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static enum nvram_parser_state
FUNC_1(struct nvram_parser *VAR_2)
{
 char *VAR_3, *VAR_4;

 VAR_4 = (char *)&VAR_2->data[VAR_2->pos];
 VAR_3 = FUNC_0(VAR_4, '\n');
 if (!VAR_3) {
  VAR_3 = FUNC_0(VAR_4, '\0');
  if (!VAR_3)
   return VAR_0;
 }


 VAR_2->line++;
 VAR_2->column = 1;
 VAR_2->pos += (VAR_3 - VAR_4) + 1;
 return VAR_1;
}
