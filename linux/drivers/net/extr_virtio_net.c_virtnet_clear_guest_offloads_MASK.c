
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct virtnet_info {int guest_offloads; } ;


 int FUNC_0 (struct virtnet_info*,int ) ;

__attribute__((used)) static int FUNC_1(struct virtnet_info *VAR_0)
{
 u64 VAR_1 = 0;

 if (!VAR_0->guest_offloads)
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}
