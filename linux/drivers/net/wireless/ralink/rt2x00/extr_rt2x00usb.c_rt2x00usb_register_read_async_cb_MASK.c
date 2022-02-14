
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct rt2x00_async_read_data* context; } ;
struct rt2x00_async_read_data {TYPE_1__* rt2x00dev; int reg; scalar_t__ (* callback ) (TYPE_1__*,int ,int ) ;} ;
struct TYPE_2__ {int anchor; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_async_read_data*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct urb*,int ) ;
 scalar_t__ FUNC_4 (struct urb*,int ) ;
 int FUNC_5 (struct urb*) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_1)
{
 struct rt2x00_async_read_data *VAR_2 = VAR_1->context;
 if (VAR_2->callback(VAR_2->rt2x00dev, VAR_1->status, FUNC_1(VAR_2->reg))) {
  FUNC_3(VAR_1, VAR_2->rt2x00dev->anchor);
  if (FUNC_4(VAR_1, VAR_0) < 0) {
   FUNC_5(VAR_1);
   FUNC_0(VAR_2);
  }
 } else
  FUNC_0(VAR_2);
}
