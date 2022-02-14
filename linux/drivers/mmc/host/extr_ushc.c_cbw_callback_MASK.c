
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ushc_data {int csw_urb; int data_urb; } ;
struct urb {scalar_t__ status; struct ushc_data* context; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct ushc_data *VAR_1 = VAR_0->context;

 if (VAR_0->status != 0) {
  FUNC_0(VAR_1->data_urb);
  FUNC_0(VAR_1->csw_urb);
 }
}
