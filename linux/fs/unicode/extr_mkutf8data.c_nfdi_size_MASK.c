
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_data {scalar_t__ utf8nfdi; int code; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct unicode_data *VAR_1 = VAR_0;
 int VAR_2 = 2;

 if (FUNC_0(VAR_1->code))
  VAR_2 += 1;
 else if (VAR_1->utf8nfdi)
  VAR_2 += FUNC_1(VAR_1->utf8nfdi) + 1;
 return VAR_2;
}
