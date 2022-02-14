
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bnxt {int rss_hash_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_0(struct bnxt *VAR_3)
{
 if (VAR_3->rss_hash_cfg & VAR_2)
  return VAR_1 | VAR_0;
 return 0;
}
