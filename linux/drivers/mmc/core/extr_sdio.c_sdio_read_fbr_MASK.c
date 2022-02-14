
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {unsigned char class; int num; int card; } ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct sdio_func *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 if (FUNC_1(VAR_3->card)) {
  VAR_3->class = VAR_0;
  return 0;
 }

 VAR_4 = FUNC_2(VAR_3->card, 0, 0,
  FUNC_0(VAR_3->num) + VAR_1, 0, &VAR_5);
 if (VAR_4)
  goto out;

 VAR_5 &= 0x0f;

 if (VAR_5 == 0x0f) {
  VAR_4 = FUNC_2(VAR_3->card, 0, 0,
   FUNC_0(VAR_3->num) + VAR_2, 0, &VAR_5);
  if (VAR_4)
   goto out;
 }

 VAR_3->class = VAR_5;

out:
 return VAR_4;
}
