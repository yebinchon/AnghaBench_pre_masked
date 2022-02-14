
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct gasket_driver_desc {struct gasket_bar_desc* bar_descriptions; } ;
struct gasket_dev {TYPE_1__* internal_desc; } ;
struct gasket_bar_desc {scalar_t__ permissions; scalar_t__ base; scalar_t__ size; } ;
struct TYPE_2__ {struct gasket_driver_desc* driver_desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct gasket_dev *VAR_3,
    ulong VAR_4)
{
 int VAR_5;
 const struct gasket_driver_desc *VAR_6;

 VAR_6 = VAR_3->internal_desc->driver_desc;
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  struct gasket_bar_desc VAR_7 =
   VAR_6->bar_descriptions[VAR_5];

  if (VAR_7.permissions != VAR_1) {
   if (VAR_4 >= VAR_7.base &&
       VAR_4 < (VAR_7.base + VAR_7.size)) {
    return VAR_5;
   }
  }
 }

 return -VAR_0;
}
