
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ethhdr {int h_dest; int h_source; scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ethhdr *VAR_7, struct ethhdr *VAR_8,
    void *VAR_9, void *VAR_10, u64 *VAR_11)
{
 int VAR_12;

 if (VAR_8->h_proto) {
  VAR_12 = FUNC_0(VAR_3, VAR_6);
  *(__be16 *)(VAR_9 + VAR_12) = VAR_7->h_proto;
  *(__be16 *)(VAR_10 + VAR_12) = VAR_8->h_proto;
  *VAR_11 |= VAR_2;
 }

 if (!FUNC_2(VAR_8->h_source)) {
  VAR_12 = FUNC_0(VAR_3, VAR_5);
  FUNC_1(VAR_9 + VAR_12, VAR_7->h_source);
  FUNC_1(VAR_10 + VAR_12, VAR_8->h_source);
  *VAR_11 |= VAR_1;
 }

 if (!FUNC_2(VAR_8->h_dest)) {
  VAR_12 = FUNC_0(VAR_3, VAR_4);
  FUNC_1(VAR_9 + VAR_12, VAR_7->h_dest);
  FUNC_1(VAR_10 + VAR_12, VAR_8->h_dest);
  *VAR_11 |= VAR_0;
 }

 return 0;
}
