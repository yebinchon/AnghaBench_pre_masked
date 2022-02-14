
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef scalar_t__ u32 ;
struct nvram_parser {char* data; size_t pos; size_t entry; scalar_t__ nvram_len; char* nvram; int column; } ;
typedef enum nvram_parser_state { ____Placeholder_nvram_parser_state } nvram_parser_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*,scalar_t__) ;

__attribute__((used)) static enum nvram_parser_state
FUNC_2(struct nvram_parser *VAR_4)
{
 char VAR_5;
 char *VAR_6;
 char *VAR_7;
 u32 VAR_8;

 VAR_5 = VAR_4->data[VAR_4->pos];
 if (!FUNC_0(VAR_5)) {

  VAR_7 = (u8 *)&VAR_4->data[VAR_4->pos];
  VAR_6 = (u8 *)&VAR_4->data[VAR_4->entry];
  VAR_8 = VAR_7 - VAR_6;
  if (VAR_4->nvram_len + VAR_8 + 1 >= VAR_0)
   return VAR_1;

  FUNC_1(&VAR_4->nvram[VAR_4->nvram_len], VAR_6, VAR_8);
  VAR_4->nvram_len += VAR_8;
  VAR_4->nvram[VAR_4->nvram_len] = '\0';
  VAR_4->nvram_len++;
  return VAR_2;
 }
 VAR_4->pos++;
 VAR_4->column++;
 return VAR_3;
}
