
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iguanair {int completion; TYPE_1__* urb_out; } ;
struct TYPE_2__ {unsigned int transfer_buffer_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct iguanair *VAR_3, unsigned VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_3->completion);

 VAR_3->urb_out->transfer_buffer_length = VAR_4;
 VAR_5 = FUNC_1(VAR_3->urb_out, VAR_1);
 if (VAR_5)
  return VAR_5;

 if (FUNC_2(&VAR_3->completion, VAR_2) == 0)
  return -VAR_0;

 return VAR_5;
}
