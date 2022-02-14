
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0,
     unsigned int VAR_1)
{
 FUNC_0(VAR_0->data, 0xFF, VAR_1);
 VAR_1 &= ~1;
 FUNC_0(&VAR_0->data[VAR_1 / 2], 0xAA, VAR_1 / 2 - 1);
 FUNC_0(&VAR_0->data[VAR_1 / 2 + 10], 0xBE, 1);
 FUNC_0(&VAR_0->data[VAR_1 / 2 + 12], 0xAF, 1);
}
