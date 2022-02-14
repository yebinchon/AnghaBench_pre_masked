
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvram_parser {int state; char* data; size_t pos; size_t entry; int multi_dev_v1; int multi_dev_v2; int boardrev_found; int column; int line; } ;
typedef enum nvram_parser_state { ____Placeholder_nvram_parser_state } nvram_parser_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static enum nvram_parser_state FUNC_3(struct nvram_parser *VAR_3)
{
 enum nvram_parser_state VAR_4 = VAR_3->state;
 char VAR_5;

 VAR_5 = VAR_3->data[VAR_3->pos];
 if (VAR_5 == '=') {

  if (FUNC_2(&VAR_3->data[VAR_3->entry], "RAW1", 4) == 0)
   VAR_4 = VAR_0;
  else
   VAR_4 = VAR_2;
  if (FUNC_2(&VAR_3->data[VAR_3->entry], "devpath", 7) == 0)
   VAR_3->multi_dev_v1 = 1;
  if (FUNC_2(&VAR_3->data[VAR_3->entry], "pcie/", 5) == 0)
   VAR_3->multi_dev_v2 = 1;
  if (FUNC_2(&VAR_3->data[VAR_3->entry], "boardrev", 8) == 0)
   VAR_3->boardrev_found = 1;
 } else if (!FUNC_1(VAR_5) || VAR_5 == ' ') {
  FUNC_0(VAR_1, "warning: ln=%d:col=%d: '=' expected, skip invalid key entry\n",
     VAR_3->line, VAR_3->column);
  return VAR_0;
 }

 VAR_3->column++;
 VAR_3->pos++;
 return VAR_4;
}
