
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct dump_header {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,int ) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, u32 VAR_1)
{
 struct bnx2x *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_3 *= 4;
 VAR_3 += sizeof(struct dump_header);

 return VAR_3;
}
