
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bts_action {long size; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(unsigned char **VAR_1, long *VAR_2)
{
 unsigned char *VAR_3, *VAR_4;
 VAR_4 = *VAR_1;

 VAR_3 = VAR_4 + sizeof(struct bts_action) +
  ((struct bts_action *) VAR_4)->size;

 if (((struct bts_action *) VAR_3)->type != VAR_0) {
  FUNC_0("invalid action after change remote baud command");
 } else {
  *VAR_1 = *VAR_1 + sizeof(struct bts_action) +
   ((struct bts_action *)VAR_4)->size;
  *VAR_2 = *VAR_2 - (sizeof(struct bts_action) +
    ((struct bts_action *)VAR_4)->size);

  FUNC_1("skipping the wait event of change remote baud");
 }
}
