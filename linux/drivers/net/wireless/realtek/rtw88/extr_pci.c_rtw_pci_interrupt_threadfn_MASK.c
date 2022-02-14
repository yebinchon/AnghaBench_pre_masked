
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_pci {int irq_lock; } ;
struct rtw_dev {scalar_t__ priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct rtw_dev*,struct rtw_pci*) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_pci*,int*) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_pci*,int ) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_pci*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_17, void *VAR_18)
{
 struct rtw_dev *VAR_19 = VAR_18;
 struct rtw_pci *VAR_20 = (struct rtw_pci *)VAR_19->priv;
 unsigned long VAR_21;
 u32 VAR_22[4];

 FUNC_4(&VAR_20->irq_lock, VAR_21);
 FUNC_1(VAR_19, VAR_20, VAR_22);

 if (VAR_22[0] & VAR_4)
  FUNC_3(VAR_19, VAR_20, VAR_14);
 if (VAR_22[0] & VAR_3)
  FUNC_3(VAR_19, VAR_20, VAR_13);
 if (VAR_22[0] & VAR_0)
  FUNC_3(VAR_19, VAR_20, VAR_10);
 if (VAR_22[0] & VAR_1)
  FUNC_3(VAR_19, VAR_20, VAR_11);
 if (VAR_22[0] & VAR_7)
  FUNC_3(VAR_19, VAR_20, VAR_16);
 if (VAR_22[0] & VAR_6)
  FUNC_3(VAR_19, VAR_20, VAR_15);
 if (VAR_22[3] & VAR_2)
  FUNC_3(VAR_19, VAR_20, VAR_12);
 if (VAR_22[0] & VAR_5)
  FUNC_2(VAR_19, VAR_20, VAR_9);


 FUNC_0(VAR_19, VAR_20);
 FUNC_5(&VAR_20->irq_lock, VAR_21);

 return VAR_8;
}
