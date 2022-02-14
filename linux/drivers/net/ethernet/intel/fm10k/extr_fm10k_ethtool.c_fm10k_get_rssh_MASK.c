
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct fm10k_intfc {int * rssrk; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int *) ;
 struct fm10k_intfc* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
     u8 *VAR_5)
{
 struct fm10k_intfc *VAR_6 = FUNC_2(VAR_2);
 int VAR_7, VAR_8;

 if (VAR_5)
  *VAR_5 = VAR_0;

 VAR_8 = FUNC_1(VAR_2, VAR_3);
 if (VAR_8 || !VAR_4)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_4 += 4)
  *(__le32 *)VAR_4 = FUNC_0(VAR_6->rssrk[VAR_7]);

 return 0;
}
