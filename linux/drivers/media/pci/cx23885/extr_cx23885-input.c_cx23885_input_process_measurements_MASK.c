
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ir_raw_event {int dummy; } ;
struct cx23885_kernel_ir {int rc; } ;
struct cx23885_dev {int sd_ir; struct cx23885_kernel_ir* kernel_ir; } ;
typedef int ssize_t ;
typedef int ir_core_event ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ir_raw_event*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int *,int,int*) ;

__attribute__((used)) static void FUNC_4(struct cx23885_dev *VAR_2,
            bool VAR_3)
{
 struct cx23885_kernel_ir *VAR_4 = VAR_2->kernel_ir;

 ssize_t VAR_5;
 int VAR_6, VAR_7;
 bool VAR_8 = 0;
 struct ir_raw_event VAR_9[64];

 do {
  VAR_5 = 0;
  FUNC_3(VAR_2->sd_ir, VAR_0, VAR_1, (u8 *) VAR_9,
     sizeof(VAR_9), &VAR_5);

  VAR_6 = VAR_5 / sizeof(struct ir_raw_event);

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   FUNC_2(VAR_4->rc,
        &VAR_9[VAR_7]);
   VAR_8 = 1;
  }
 } while (VAR_5 != 0);

 if (VAR_3)
  FUNC_1(VAR_4->rc);
 else if (VAR_8)
  FUNC_0(VAR_4->rc);
}
