
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct emac_sgmii {int decode_error_count; scalar_t__ base; } ;
struct emac_adapter {int work_thread; struct emac_sgmii phy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct emac_adapter*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct emac_adapter *VAR_7 = VAR_6;
 struct emac_sgmii *VAR_8 = &VAR_7->phy;
 u8 VAR_9;

 VAR_9 = FUNC_3(VAR_8->base + VAR_1);
 VAR_9 &= VAR_3;
 if (!VAR_9)
  return VAR_2;






 if (VAR_9 & VAR_4) {
  int VAR_10;






  VAR_10 = FUNC_0(&VAR_8->decode_error_count);
  if (VAR_10 == VAR_0) {
   FUNC_4(&VAR_7->work_thread);
   FUNC_1(&VAR_8->decode_error_count, 0);
  }
 } else {

  FUNC_1(&VAR_8->decode_error_count, 0);
 }

 if (FUNC_2(VAR_7, VAR_9))
  FUNC_4(&VAR_7->work_thread);

 return VAR_2;
}
