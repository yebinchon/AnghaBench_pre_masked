
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct ethtool_usrip4_spec {scalar_t__ l4_4_bytes; scalar_t__ proto; scalar_t__ ip4dst; scalar_t__ ip4src; scalar_t__ ip_ver; scalar_t__ tos; } ;
typedef scalar_t__ __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ethtool_usrip4_spec *VAR_17,
    struct ethtool_usrip4_spec *VAR_18,
    void *VAR_19, void *VAR_20, u64 *VAR_21)
{
 int VAR_22;
 u32 VAR_23, VAR_24;

 if (VAR_18->tos || VAR_18->ip_ver)
  return -VAR_6;

 if (VAR_18->ip4src) {
  VAR_22 = FUNC_1(VAR_9, VAR_14);
  *(__be32 *)(VAR_19 + VAR_22) = VAR_17->ip4src;
  *(__be32 *)(VAR_20 + VAR_22) = VAR_18->ip4src;
  *VAR_21 |= VAR_3;
 }

 if (VAR_18->ip4dst) {
  VAR_22 = FUNC_1(VAR_9, VAR_12);
  *(__be32 *)(VAR_19 + VAR_22) = VAR_17->ip4dst;
  *(__be32 *)(VAR_20 + VAR_22) = VAR_18->ip4dst;
  *VAR_21 |= VAR_1;
 }

 if (VAR_18->proto) {
  VAR_22 = FUNC_1(VAR_9, VAR_13);
  *(u8 *)(VAR_19 + VAR_22) = VAR_17->proto;
  *(u8 *)(VAR_20 + VAR_22) = VAR_18->proto;
  *VAR_21 |= VAR_2;
 }

 if (VAR_18->l4_4_bytes) {
  VAR_23 = FUNC_0(VAR_17->l4_4_bytes);
  VAR_24 = FUNC_0(VAR_18->l4_4_bytes);

  VAR_22 = FUNC_1(VAR_10, VAR_16);
  *(__be16 *)(VAR_19 + VAR_22) = FUNC_2(VAR_23 >> 16);
  *(__be16 *)(VAR_20 + VAR_22) = FUNC_2(VAR_24 >> 16);
  *VAR_21 |= VAR_5;

  VAR_22 = FUNC_1(VAR_10, VAR_15);
  *(__be16 *)(VAR_19 + VAR_22) = FUNC_2(VAR_23 & 0xFFFF);
  *(__be16 *)(VAR_20 + VAR_22) = FUNC_2(VAR_24 & 0xFFFF);
  *VAR_21 |= VAR_4;
 }


 VAR_22 = FUNC_1(VAR_8, VAR_11);
 *(__be16 *)(VAR_19 + VAR_22) = FUNC_2(VAR_7);
 *(__be16 *)(VAR_20 + VAR_22) = FUNC_2(0xFFFF);
 *VAR_21 |= VAR_0;

 return 0;
}
