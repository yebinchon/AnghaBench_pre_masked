
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static enum pkt_hash_types FUNC_1(__be16 VAR_7)
{
 if (FUNC_0(VAR_7 & (VAR_2 | VAR_3)))
  return VAR_6;
 if (VAR_7 & (VAR_0 | VAR_1))
  return VAR_5;
 return VAR_4;
}
