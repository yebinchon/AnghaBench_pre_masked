
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct pgpkt {void* word_en; int word_cnts; scalar_t__ data; void* offset; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,void**,scalar_t__) ;
 int FUNC_2 (void*,int,int) ;

__attribute__((used)) static void FUNC_3(u8 VAR_0, u8 VAR_1, u8 *VAR_2, struct pgpkt *VAR_3)
{
 FUNC_2((void *)VAR_3->data, 0xFF, sizeof(u8) * 8);
 VAR_3->offset = VAR_0;
 VAR_3->word_en = VAR_1;
 FUNC_1(VAR_1, VAR_2, VAR_3->data);
 VAR_3->word_cnts = FUNC_0(VAR_3->word_en);
}
