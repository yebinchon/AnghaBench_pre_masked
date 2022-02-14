
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ene_device {int tx_period; int tx_duty_cycle; int hw_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ene_device*,int ,int ,int) ;
 int FUNC_3 (struct ene_device*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ene_device *VAR_5)
{
 u8 VAR_6;
 unsigned long VAR_7;

 FUNC_4(&VAR_5->hw_lock, VAR_7);

 FUNC_2(VAR_5, VAR_0,
  VAR_1, VAR_5->tx_period > 0);

 if (!VAR_5->tx_period)
  goto unlock;

 FUNC_0(VAR_5->tx_duty_cycle >= 100 || VAR_5->tx_duty_cycle <= 0);

 VAR_6 = VAR_5->tx_period / (100 / VAR_5->tx_duty_cycle);

 if (!VAR_6)
  VAR_6 = 1;

 FUNC_1("TX: pulse distance = %d * 500 ns", VAR_5->tx_period);
 FUNC_1("TX: pulse width = %d * 500 ns", VAR_6);

 FUNC_3(VAR_5, VAR_3, VAR_5->tx_period | VAR_4);
 FUNC_3(VAR_5, VAR_2, VAR_6);
unlock:
 FUNC_5(&VAR_5->hw_lock, VAR_7);
}
