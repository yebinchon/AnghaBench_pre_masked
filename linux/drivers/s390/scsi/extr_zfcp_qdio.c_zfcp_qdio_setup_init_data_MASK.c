
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_qdio {int req_q; int res_q; TYPE_1__* adapter; } ;
struct qdio_initialize {int no_input_qs; int no_output_qs; unsigned long int_parm; scalar_t__ scan_threshold; int output_sbal_addr_array; int input_sbal_addr_array; int output_handler; int input_handler; int qdr_ac; int qib_rflags; int adapter_name; TYPE_2__* cdev; int q_format; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* ccw_device; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct qdio_initialize*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct qdio_initialize *VAR_8,
          struct zfcp_qdio *VAR_9)
{
 FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->cdev = VAR_9->adapter->ccw_device;
 VAR_8->q_format = VAR_1;
 FUNC_2(VAR_8->adapter_name, FUNC_1(&VAR_8->cdev->dev), 8);
 FUNC_0(VAR_8->adapter_name, 8);
 VAR_8->qib_rflags = VAR_3;
 if (VAR_5)
  VAR_8->qdr_ac |= VAR_2;
 VAR_8->no_input_qs = 1;
 VAR_8->no_output_qs = 1;
 VAR_8->input_handler = VAR_7;
 VAR_8->output_handler = VAR_6;
 VAR_8->int_parm = (unsigned long) VAR_9;
 VAR_8->input_sbal_addr_array = VAR_9->res_q;
 VAR_8->output_sbal_addr_array = VAR_9->req_q;
 VAR_8->scan_threshold =
  VAR_0 - VAR_4 * 2;
}
