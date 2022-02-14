
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tango_ir {scalar_t__ rc6_base; scalar_t__ rc5_base; } ;
struct rc_dev {struct tango_ir* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_8, u64 *VAR_9)
{
 struct tango_ir *VAR_10 = VAR_8->priv;
 u32 VAR_11 = VAR_0;
 u32 VAR_12 = 0;

 if (*VAR_9 & VAR_4)
  VAR_11 = 0;

 if (*VAR_9 & VAR_6)
  VAR_11 |= VAR_1;

 if (*VAR_9 & VAR_7)
  VAR_12 = VAR_2;

 FUNC_0(VAR_11, VAR_10->rc5_base + VAR_3);
 FUNC_0(VAR_12, VAR_10->rc6_base + VAR_5);

 return 0;
}
