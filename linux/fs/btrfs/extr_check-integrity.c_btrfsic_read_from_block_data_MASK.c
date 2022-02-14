
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btrfsic_block_data_ctx {size_t start; size_t len; char** datav; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (size_t,scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (size_t,size_t) ;
 size_t FUNC_5 (size_t) ;

__attribute__((used)) static void FUNC_6(
 struct btrfsic_block_data_ctx *VAR_2,
 void *VAR_3, u32 VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 size_t VAR_7;
 char *VAR_8;
 char *VAR_9 = (char *)VAR_3;
 size_t VAR_10 = FUNC_5(VAR_2->start);
 unsigned long VAR_11 = (VAR_10 + VAR_4) >> VAR_0;

 FUNC_2(VAR_4 + VAR_5 > VAR_2->len);
 VAR_7 = FUNC_5(VAR_10 + VAR_4);

 while (VAR_5 > 0) {
  VAR_6 = FUNC_4(VAR_5, ((size_t)VAR_1 - VAR_7));
  FUNC_0(VAR_11 >= FUNC_1(VAR_2->len, VAR_1));
  VAR_8 = VAR_2->datav[VAR_11];
  FUNC_3(VAR_9, VAR_8 + VAR_7, VAR_6);

  VAR_9 += VAR_6;
  VAR_5 -= VAR_6;
  VAR_7 = 0;
  VAR_11++;
 }
}
