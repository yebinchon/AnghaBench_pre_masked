
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encx24j600_context {int bank; int spi; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct encx24j600_context *VAR_0,
      int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_0->spi, &VAR_3, 1);
 if (VAR_2 == 0)
  VAR_0->bank = VAR_1;

 return VAR_2;
}
