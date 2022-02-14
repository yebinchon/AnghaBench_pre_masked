
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(const void *VAR_3)
{
 const struct ethhdr *VAR_4 = VAR_3;

 return VAR_4->h_proto == FUNC_0(VAR_1) ? VAR_2 : VAR_0;
}
