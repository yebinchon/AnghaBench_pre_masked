
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int actual_length; int transfer_buffer; } ;
struct acm {int port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct acm *VAR_0, struct urb *VAR_1)
{
 if (!VAR_1->actual_length)
  return;

 FUNC_1(&VAR_0->port, VAR_1->transfer_buffer,
   VAR_1->actual_length);
 FUNC_0(&VAR_0->port);
}
