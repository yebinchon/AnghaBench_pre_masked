
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct fm10k_intfc {int glort; int vid; } ;


 int VAR_0 ;
 int FUNC_0 (struct fm10k_intfc*,int,unsigned char const*,int,int) ;
 struct fm10k_intfc* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    const unsigned char *VAR_2)
{
 struct fm10k_intfc *VAR_3 = FUNC_1(VAR_1);
 u16 VAR_4 = VAR_3->glort;
 u16 VAR_5 = VAR_3->vid;
 bool VAR_6 = !!(VAR_5 / VAR_0);
 int VAR_7;


 VAR_5 &= VAR_0 - 1;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_2, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;


 return 1;
}
