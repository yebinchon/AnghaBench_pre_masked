
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ethtool_tcpip4_spec {scalar_t__ pdst; scalar_t__ psrc; scalar_t__ ip4dst; scalar_t__ ip4src; scalar_t__ tos; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


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
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ethtool_tcpip4_spec *VAR_17,
   struct ethtool_tcpip4_spec *VAR_18,
   void *VAR_19, void *VAR_20, u8 VAR_21, u64 *VAR_22)
{
 int VAR_23;

 if (VAR_18->tos)
  return -VAR_6;

 if (VAR_18->ip4src) {
  VAR_23 = FUNC_0(VAR_9, VAR_14);
  *(__be32 *)(VAR_19 + VAR_23) = VAR_17->ip4src;
  *(__be32 *)(VAR_20 + VAR_23) = VAR_18->ip4src;
  *VAR_22 |= VAR_3;
 }

 if (VAR_18->ip4dst) {
  VAR_23 = FUNC_0(VAR_9, VAR_12);
  *(__be32 *)(VAR_19 + VAR_23) = VAR_17->ip4dst;
  *(__be32 *)(VAR_20 + VAR_23) = VAR_18->ip4dst;
  *VAR_22 |= VAR_1;
 }

 if (VAR_18->psrc) {
  VAR_23 = FUNC_0(VAR_10, VAR_16);
  *(__be16 *)(VAR_19 + VAR_23) = VAR_17->psrc;
  *(__be16 *)(VAR_20 + VAR_23) = VAR_18->psrc;
  *VAR_22 |= VAR_5;
 }

 if (VAR_18->pdst) {
  VAR_23 = FUNC_0(VAR_10, VAR_15);
  *(__be16 *)(VAR_19 + VAR_23) = VAR_17->pdst;
  *(__be16 *)(VAR_20 + VAR_23) = VAR_18->pdst;
  *VAR_22 |= VAR_4;
 }


 VAR_23 = FUNC_0(VAR_8, VAR_11);
 *(__be16 *)(VAR_19 + VAR_23) = FUNC_1(VAR_7);
 *(__be16 *)(VAR_20 + VAR_23) = FUNC_1(0xFFFF);
 *VAR_22 |= VAR_0;

 VAR_23 = FUNC_0(VAR_9, VAR_13);
 *(u8 *)(VAR_19 + VAR_23) = VAR_21;
 *(u8 *)(VAR_20 + VAR_23) = 0xFF;
 *VAR_22 |= VAR_2;

 return 0;
}
