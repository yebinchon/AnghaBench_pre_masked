
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ethtool_flow_ext {int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ethtool_flow_ext *VAR_3,
        struct ethtool_flow_ext *VAR_4,
        void *VAR_5, void *VAR_6, u64 *VAR_7)
{
 int VAR_8;

 if (!FUNC_2(VAR_4->h_dest)) {
  VAR_8 = FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_5 + VAR_8, VAR_3->h_dest);
  FUNC_1(VAR_6 + VAR_8, VAR_4->h_dest);
  *VAR_7 |= VAR_0;
 }

 return 0;
}
