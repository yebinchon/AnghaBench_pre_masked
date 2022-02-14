
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct fm10k_intfc {scalar_t__ glort; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fm10k_intfc*,scalar_t__) ;
 int FUNC_1 (struct fm10k_intfc*,scalar_t__,unsigned char const*,scalar_t__,int) ;
 int FUNC_2 (unsigned char const*) ;
 struct fm10k_intfc* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
      const unsigned char *VAR_3, bool VAR_4)
{
 struct fm10k_intfc *VAR_5 = FUNC_3(VAR_2);
 u16 VAR_6, VAR_7 = VAR_5->glort;
 s32 VAR_8;

 if (!FUNC_2(VAR_3))
  return -VAR_0;

 for (VAR_6 = FUNC_0(VAR_5, 0);
      VAR_6 < VAR_1;
      VAR_6 = FUNC_0(VAR_5, VAR_6)) {
  VAR_8 = FUNC_1(VAR_5, VAR_7,
           VAR_3, VAR_6, VAR_4);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
