
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int ccdc; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct vpfe_device *VAR_4)
{
 unsigned int VAR_5 = VAR_2;
 enum ccdc_frmfmt VAR_6;

 VAR_6 = FUNC_0(&VAR_4->ccdc);
 if (VAR_6 == VAR_0)
  VAR_5 |= VAR_3;

 FUNC_1(&VAR_4->ccdc, VAR_5, VAR_1);
}
