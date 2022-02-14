
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rbsp {int pos; int size; int * data; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(struct rbsp *VAR_0)
{
 u8 *VAR_1 = VAR_0->data + FUNC_0(VAR_0->pos, 8);
 int VAR_2;


 VAR_2 = VAR_0->size - FUNC_0(VAR_0->pos, 8) - 1;
 FUNC_1(VAR_1, 0xff, VAR_2);
 VAR_0->pos += VAR_2 * 8;
}
