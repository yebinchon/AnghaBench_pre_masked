
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nxp_fspi {int lock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nxp_fspi*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nxp_fspi*) ;
 struct nxp_fspi* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct nxp_fspi *VAR_3 = FUNC_3(VAR_2);


 FUNC_0(VAR_3, VAR_1, VAR_3->iobase + VAR_0);

 FUNC_2(VAR_3);

 FUNC_1(&VAR_3->lock);

 return 0;
}
