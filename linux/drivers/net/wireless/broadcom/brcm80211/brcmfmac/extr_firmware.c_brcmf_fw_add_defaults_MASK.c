
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvram_parser {char* nvram; size_t nvram_len; scalar_t__ boardrev_found; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nvram_parser *VAR_1)
{
 if (VAR_1->boardrev_found)
  return;

 FUNC_0(&VAR_1->nvram[VAR_1->nvram_len], &VAR_0,
        FUNC_1(VAR_0));
 VAR_1->nvram_len += FUNC_1(VAR_0);
 VAR_1->nvram[VAR_1->nvram_len] = '\0';
 VAR_1->nvram_len++;
}
