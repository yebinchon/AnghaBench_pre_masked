
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int ih_key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct item_head*) ;
 int FUNC_1 (struct item_head*) ;
 int FUNC_2 (struct item_head*) ;
 scalar_t__ FUNC_3 (struct item_head*) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 int FUNC_5 (char*,int,int *) ;

__attribute__((used)) static int FUNC_6(char *VAR_1, size_t VAR_2, struct item_head *VAR_3)
{
 if (VAR_3) {
  char *VAR_4 = VAR_1;
  char * const VAR_5 = VAR_1 + VAR_2;

  VAR_4 += FUNC_4(VAR_4, VAR_5 - VAR_4, "%s",
          (FUNC_3(VAR_3) == VAR_0) ?
          "*3.6* " : "*3.5*");

  VAR_4 += FUNC_5(VAR_4, VAR_5 - VAR_4, &VAR_3->ih_key);

  VAR_4 += FUNC_4(VAR_4, VAR_5 - VAR_4,
          ", item_len %d, item_location %d, free_space(entry_count) %d",
          FUNC_1(VAR_3), FUNC_2(VAR_3),
          FUNC_0(VAR_3));
  return VAR_4 - VAR_1;
 } else
  return FUNC_4(VAR_1, VAR_2, "[NULL]");
}
