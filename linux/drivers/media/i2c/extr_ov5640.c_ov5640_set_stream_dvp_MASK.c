
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {unsigned int flags; } ;
struct TYPE_5__ {TYPE_1__ parallel; } ;
struct TYPE_6__ {TYPE_2__ bus; } ;
struct ov5640_dev {TYPE_3__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_7, bool VAR_8)
{
 int VAR_9;
 unsigned int VAR_10 = VAR_7->ep.bus.parallel.flags;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 if (VAR_8) {
  if (VAR_10 & VAR_5)
   VAR_11 = 1;
  if (VAR_10 & VAR_4)
   VAR_12 = 1;
  if (VAR_10 & VAR_6)
   VAR_13 = 1;

  VAR_9 = FUNC_0(VAR_7,
           VAR_3,
           (VAR_11 << 5) |
           (VAR_12 << 1) |
           VAR_13);

  if (VAR_9)
   return VAR_9;
 }
 VAR_9 = FUNC_0(VAR_7,
          VAR_0, VAR_8 ? 0x18 : 0);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_7,
          VAR_1,
          VAR_8 ? 0x7f : 0);
 if (VAR_9)
  return VAR_9;







 return FUNC_0(VAR_7,
    VAR_2,
    VAR_8 ? 0xfc : 0);
}
