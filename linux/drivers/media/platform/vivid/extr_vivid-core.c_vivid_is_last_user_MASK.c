
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int radio_tx_dev; int radio_rx_dev; int sdr_cap_dev; int vbi_out_dev; int vbi_cap_dev; int vid_out_dev; int vid_cap_dev; } ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct vivid_dev *VAR_0)
{
 unsigned VAR_1 = FUNC_0(&VAR_0->vid_cap_dev) +
   FUNC_0(&VAR_0->vid_out_dev) +
   FUNC_0(&VAR_0->vbi_cap_dev) +
   FUNC_0(&VAR_0->vbi_out_dev) +
   FUNC_0(&VAR_0->sdr_cap_dev) +
   FUNC_0(&VAR_0->radio_rx_dev) +
   FUNC_0(&VAR_0->radio_tx_dev);

 return VAR_1 == 1;
}
