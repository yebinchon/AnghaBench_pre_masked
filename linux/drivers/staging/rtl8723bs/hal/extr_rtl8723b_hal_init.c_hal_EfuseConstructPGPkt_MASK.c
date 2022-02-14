
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_3__ {void* word_en; int word_cnts; int data; void* offset; } ;
typedef TYPE_1__* PPGPKT_STRUCT ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (void*,void**,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(
 u8 VAR_1,
 u8 VAR_2,
 u8 *VAR_3,
 PPGPKT_STRUCT VAR_4
)
{
 FUNC_2(VAR_4->data, 0xFF, VAR_0);
 VAR_4->offset = VAR_1;
 VAR_4->word_en = VAR_2;
 FUNC_1(VAR_2, VAR_3, VAR_4->data);
 VAR_4->word_cnts = FUNC_0(VAR_4->word_en);
}
