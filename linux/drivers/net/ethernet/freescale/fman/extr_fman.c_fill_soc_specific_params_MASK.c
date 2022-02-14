
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int minor; int major; } ;
struct fman_state_struct {int bmi_max_fifo_size; int fm_iram_size; int dma_thresh_max_commq; int dma_thresh_max_buf; int qmi_max_num_of_tnums; int qmi_def_tnums_thresh; int bmi_max_num_of_tasks; int max_num_of_open_dmas; int fm_port_num_of_cg; int num_of_rx_ports; int total_fifo_size; TYPE_1__ rev_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct fman_state_struct *VAR_1)
{
 u8 VAR_2 = VAR_1->rev_info.minor;




 switch (VAR_1->rev_info.major) {
 case 3:
  VAR_1->bmi_max_fifo_size = 160 * 1024;
  VAR_1->fm_iram_size = 64 * 1024;
  VAR_1->dma_thresh_max_commq = 31;
  VAR_1->dma_thresh_max_buf = 127;
  VAR_1->qmi_max_num_of_tnums = 64;
  VAR_1->qmi_def_tnums_thresh = 48;
  VAR_1->bmi_max_num_of_tasks = 128;
  VAR_1->max_num_of_open_dmas = 32;
  VAR_1->fm_port_num_of_cg = 256;
  VAR_1->num_of_rx_ports = 6;
  VAR_1->total_fifo_size = 136 * 1024;
  break;

 case 2:
  VAR_1->bmi_max_fifo_size = 160 * 1024;
  VAR_1->fm_iram_size = 64 * 1024;
  VAR_1->dma_thresh_max_commq = 31;
  VAR_1->dma_thresh_max_buf = 127;
  VAR_1->qmi_max_num_of_tnums = 64;
  VAR_1->qmi_def_tnums_thresh = 48;
  VAR_1->bmi_max_num_of_tasks = 128;
  VAR_1->max_num_of_open_dmas = 32;
  VAR_1->fm_port_num_of_cg = 256;
  VAR_1->num_of_rx_ports = 5;
  VAR_1->total_fifo_size = 100 * 1024;
  break;

 case 6:
  VAR_1->dma_thresh_max_commq = 83;
  VAR_1->dma_thresh_max_buf = 127;
  VAR_1->qmi_max_num_of_tnums = 64;
  VAR_1->qmi_def_tnums_thresh = 32;
  VAR_1->fm_port_num_of_cg = 256;


  if (VAR_2 == 1 || VAR_2 == 4) {
   VAR_1->bmi_max_fifo_size = 192 * 1024;
   VAR_1->bmi_max_num_of_tasks = 64;
   VAR_1->max_num_of_open_dmas = 32;
   VAR_1->num_of_rx_ports = 5;
   if (VAR_2 == 1)
    VAR_1->fm_iram_size = 32 * 1024;
   else
    VAR_1->fm_iram_size = 64 * 1024;
   VAR_1->total_fifo_size = 156 * 1024;
  }

  else if (VAR_2 == 0 || VAR_2 == 2 || VAR_2 == 3) {
   VAR_1->bmi_max_fifo_size = 384 * 1024;
   VAR_1->fm_iram_size = 64 * 1024;
   VAR_1->bmi_max_num_of_tasks = 128;
   VAR_1->max_num_of_open_dmas = 84;
   VAR_1->num_of_rx_ports = 8;
   VAR_1->total_fifo_size = 295 * 1024;
  } else {
   FUNC_0("Unsupported FManv3 version\n");
   return -VAR_0;
  }

  break;
 default:
  FUNC_0("Unsupported FMan version\n");
  return -VAR_0;
 }

 return 0;
}
