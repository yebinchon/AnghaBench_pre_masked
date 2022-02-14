
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvram_parser {char* data; size_t pos; size_t entry; int column; int line; } ;
typedef enum nvram_parser_state { ____Placeholder_nvram_parser_state } nvram_parser_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static enum nvram_parser_state FUNC_3(struct nvram_parser *VAR_4)
{
 char VAR_5;

 VAR_5 = VAR_4->data[VAR_4->pos];
 if (VAR_5 == '\n')
  return VAR_0;
 if (FUNC_2(VAR_5) || VAR_5 == '\0')
  goto proceed;
 if (VAR_5 == '#')
  return VAR_0;
 if (FUNC_1(VAR_5)) {
  VAR_4->entry = VAR_4->pos;
  return VAR_3;
 }
 FUNC_0(VAR_2, "warning: ln=%d:col=%d: ignoring invalid character\n",
    VAR_4->line, VAR_4->column);
proceed:
 VAR_4->column++;
 VAR_4->pos++;
 return VAR_1;
}
