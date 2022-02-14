
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; unsigned int csum_offset; } ;


 unsigned int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_0)
{
       unsigned int VAR_1 = VAR_0->len - FUNC_0(VAR_0);

       if (VAR_0->len <= 45)
        return 0;
       return VAR_0->csum_offset < (VAR_1 - (4 + 1));
}
