
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdio_func*,int ) ;
 int FUNC_1 (struct sdio_func*,int,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct sdio_func *VAR_3)
{
 int VAR_4;


 FUNC_1(VAR_3, 0, VAR_0, &VAR_4);
 if (VAR_4)
  goto irq_error;

 FUNC_1(VAR_3, 0xff, VAR_1, &VAR_4);
 if (VAR_4)
  goto irq_error;


 VAR_4 = FUNC_0(VAR_3, VAR_2);

irq_error:
 return VAR_4;
}
