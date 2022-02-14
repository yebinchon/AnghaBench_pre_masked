
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct ene_device* priv; } ;
struct ene_device {unsigned int* tx_buffer; unsigned int tx_len; int tx_sample_pulse; int hw_lock; int tx_complete; scalar_t__ tx_sample; scalar_t__ tx_done; scalar_t__ tx_reg; scalar_t__ tx_pos; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ene_device*) ;
 int FUNC_2 (struct ene_device*) ;
 int FUNC_3 (struct ene_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct rc_dev *VAR_1, unsigned *VAR_2, unsigned VAR_3)
{
 struct ene_device *VAR_4 = VAR_1->priv;
 unsigned long VAR_5;

 VAR_4->tx_buffer = VAR_2;
 VAR_4->tx_len = VAR_3;
 VAR_4->tx_pos = 0;
 VAR_4->tx_reg = 0;
 VAR_4->tx_done = 0;
 VAR_4->tx_sample = 0;
 VAR_4->tx_sample_pulse = 0;

 FUNC_0("TX: %d samples", VAR_4->tx_len);

 FUNC_4(&VAR_4->hw_lock, VAR_5);

 FUNC_2(VAR_4);


 FUNC_3(VAR_4);
 FUNC_3(VAR_4);

 FUNC_5(&VAR_4->hw_lock, VAR_5);

 if (FUNC_6(&VAR_4->tx_complete, 2 * VAR_0) == 0) {
  FUNC_0("TX: timeout");
  FUNC_4(&VAR_4->hw_lock, VAR_5);
  FUNC_1(VAR_4);
  FUNC_5(&VAR_4->hw_lock, VAR_5);
 } else
  FUNC_0("TX: done");
 return VAR_3;
}
