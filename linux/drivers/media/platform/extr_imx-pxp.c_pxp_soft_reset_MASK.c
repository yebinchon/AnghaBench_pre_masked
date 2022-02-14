
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxp_dev {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int,int,int ,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pxp_dev *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 FUNC_1(VAR_1, VAR_5->mmio + VAR_3);
 FUNC_1(VAR_0, VAR_5->mmio + VAR_3);

 FUNC_1(VAR_1, VAR_5->mmio + VAR_4);

 VAR_6 = FUNC_0(VAR_5->mmio + VAR_2, VAR_7,
     VAR_7 & VAR_0, 0, 100);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(VAR_1, VAR_5->mmio + VAR_3);
 FUNC_1(VAR_0, VAR_5->mmio + VAR_3);

 return 0;
}
