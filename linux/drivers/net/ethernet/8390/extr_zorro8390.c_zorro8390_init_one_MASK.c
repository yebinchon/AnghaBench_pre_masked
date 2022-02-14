
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zorro_device_id {int dummy; } ;
struct TYPE_4__ {unsigned long start; } ;
struct zorro_dev {scalar_t__ id; TYPE_1__ resource; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ id; unsigned long offset; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned long) ;
 struct net_device* FUNC_2 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (unsigned long,int,int ) ;
 int FUNC_6 (struct net_device*,unsigned long,int ,int ) ;
 int FUNC_7 (struct zorro_dev*,struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct zorro_dev *VAR_6,
         const struct zorro_device_id *VAR_7)
{
 struct net_device *VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11, VAR_12;

 for (VAR_12 = FUNC_0(VAR_5) - 1; VAR_12 >= 0; VAR_12--)
  if (VAR_6->id == VAR_5[VAR_12].id)
   break;
 if (VAR_12 < 0)
  return -VAR_2;

 VAR_9 = VAR_6->resource.start;
 VAR_10 = VAR_9 + VAR_5[VAR_12].offset;
 VAR_8 = FUNC_2(0);
 if (!VAR_8)
  return -VAR_3;
 if (!FUNC_5(VAR_10, VAR_4 * 2, VAR_0)) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }
 VAR_11 = FUNC_6(VAR_8, VAR_9, VAR_5[VAR_12].name, FUNC_1(VAR_10));
 if (VAR_11) {
  FUNC_4(VAR_10, VAR_4 * 2);
  FUNC_3(VAR_8);
  return VAR_11;
 }
 FUNC_7(VAR_6, VAR_8);
 return 0;
}
